
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_mon; int tm_year; int tm_hour; int tm_min; void* tm_sec; scalar_t__ tm_isdst; void* tm_mday; } ;


 int JAN02_1980 ;
 scalar_t__ isspace (char) ;
 struct tm* localtime (int*) ;
 int mktime (struct tm*) ;
 int * monthtab ;
 char* strchr (char*,char) ;
 int strncasecmp (char*,int ,int) ;
 void* strtol (char*,char**,int ) ;
 int tzchecked ;
 void* tzoff ;

__attribute__((used)) static time_t
make_unix_time(char *s)
{
    struct tm time;
    int i, ysub = 1900, fmt = 0;
    char *month;
    char *n;
    time_t res;

    if (s[3] != ' ')
    {
        fmt = 1;
        if (s[3] != ',')
            ysub = 0;
    }
    for (n = s; *n; ++n)
        if (*n == '-' || *n == ':')
            *n = ' ';

    time.tm_mon = 0;
    n = strchr(s, ' ');
    if (fmt)
    {

        time.tm_mday = strtol(n + 1, &n, 0);
        month = n + 1;
        n = strchr(month, ' ');
        time.tm_year = strtol(n + 1, &n, 0);
        time.tm_hour = strtol(n + 1, &n, 0);
        time.tm_min = strtol(n + 1, &n, 0);
        time.tm_sec = strtol(n + 1, ((void*)0), 0);
    }
    else
    {


        month = n + 1;
        n = strchr(month, ' ');
        while (isspace(*n))
            n++;
        time.tm_mday = strtol(n, &n, 0);
        time.tm_hour = strtol(n + 1, &n, 0);
        time.tm_min = strtol(n + 1, &n, 0);
        time.tm_sec = strtol(n + 1, &n, 0);
        time.tm_year = strtol(n + 1, ((void*)0), 0);
    }
    if (time.tm_year > 100)
        time.tm_year -= ysub;

    for (i = 0; i < 12; i++)
        if (!strncasecmp(month, monthtab[i], 3))
        {
            time.tm_mon = i;
            break;
        }
    time.tm_isdst = 0;




    if (!tzchecked)
    {
        struct tm *tc;
        time_t then = JAN02_1980;
        tc = localtime(&then);
        tzoff = (12 - tc->tm_hour) * 3600 + tc->tm_min * 60 + tc->tm_sec;
        tzchecked = 1;
    }
    res = mktime(&time);



    if (res != -1)
        res += tzoff;
    return res;
}
