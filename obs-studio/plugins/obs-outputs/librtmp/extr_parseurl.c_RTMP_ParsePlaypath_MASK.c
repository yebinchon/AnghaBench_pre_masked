
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* av_val; int av_len; } ;
typedef TYPE_1__ AVal ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,char*,unsigned int*) ;
 char* FUNC_2 (char const*,char) ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*,char*,int) ;
 char* FUNC_6 (char const*,char*) ;

void FUNC_7(AVal *VAR_0, AVal *VAR_1)
{
    int VAR_2 = 0;
    int VAR_3 = 0;
    int VAR_4 = 0;
    const char *VAR_5 = VAR_0->av_val;
    const char *VAR_6, *VAR_7, *VAR_8 = ((void*)0);
    const char *VAR_9 = VAR_5;
    char *VAR_10, *VAR_11, *VAR_12;

    int VAR_13 = VAR_0->av_len;

    VAR_1->av_val = ((void*)0);
    VAR_1->av_len = 0;

    if (!VAR_5)
        return;

    if ((*VAR_9 == '?') &&
            (VAR_6=FUNC_6(VAR_9, "slist=")) != 0)
    {
        VAR_9 = VAR_6+6;
        VAR_13 = (int)FUNC_4(VAR_9);

        VAR_6 = FUNC_2(VAR_9, '&');
        if (VAR_6)
        {
            VAR_13 = VAR_6-VAR_9;
        }
    }

    VAR_7 = FUNC_2(VAR_9, '?');
    if (VAR_13 >= 4)
    {
        if (VAR_7)
            VAR_8 = VAR_7-4;
        else
            VAR_8 = &VAR_9[VAR_13-4];
        if ((FUNC_5(VAR_8, ".f4v", 4) == 0) ||
                (FUNC_5(VAR_8, ".mp4", 4) == 0))
        {
            VAR_2 = 1;
            VAR_4 = 1;

        }
        else if ((VAR_9 == VAR_5) &&
                 (FUNC_5(VAR_8, ".flv", 4) == 0))
        {
            VAR_4 = 1;
        }
        else if (FUNC_5(VAR_8, ".mp3", 4) == 0)
        {
            VAR_3 = 1;
            VAR_4 = 1;
        }
    }

    VAR_10 = (char *)FUNC_0((VAR_13+4+1)*sizeof(char));
    if (!VAR_10)
        return;

    VAR_11 = VAR_10;
    if (VAR_2)
    {
        if (FUNC_5(VAR_9, "mp4:", 4))
        {
            FUNC_3(VAR_11, "mp4:");
            VAR_11 += 4;
        }
        else
        {
            VAR_4 = 0;
        }
    }
    else if (VAR_3)
    {
        if (FUNC_5(VAR_9, "mp3:", 4))
        {
            FUNC_3(VAR_11, "mp3:");
            VAR_11 += 4;
        }
        else
        {
            VAR_4 = 0;
        }
    }

    for (VAR_12=(char *)VAR_9; VAR_13 >0;)
    {

        if (VAR_4 && VAR_12 == VAR_8)
        {
            VAR_12 += 4;
            VAR_13 -= 4;
            continue;
        }
        if (*VAR_12 == '%')
        {
            unsigned int VAR_14;
            FUNC_1(VAR_12+1, "%02x", &VAR_14);
            *VAR_11++ = VAR_14;
            VAR_13 -= 3;
            VAR_12 += 3;
        }
        else
        {
            *VAR_11++ = *VAR_12++;
            VAR_13--;
        }
    }
    *VAR_11 = '\0';

    VAR_1->av_val = VAR_10;
    VAR_1->av_len = VAR_11 - VAR_10;
}
