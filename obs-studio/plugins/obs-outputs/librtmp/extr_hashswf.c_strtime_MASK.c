
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {size_t tm_wday; int tm_mday; size_t tm_mon; int tm_year; int tm_hour; int tm_min; int tm_sec; } ;


 char** VAR_0 ;
 struct tm* FUNC_0 (int *) ;
 char** VAR_1 ;
 int FUNC_1 (char*,char*,char*,int,char*,int,int,int,int) ;

__attribute__((used)) static void
FUNC_2(time_t * VAR_2, char *VAR_3)
{
    struct tm *VAR_4;

    VAR_4 = FUNC_0((time_t *) VAR_2);
    FUNC_1(VAR_3, "%s, %02d %s %d %02d:%02d:%02d GMT",
            VAR_0[VAR_4->tm_wday], VAR_4->tm_mday, VAR_1[VAR_4->tm_mon],
            VAR_4->tm_year + 1900, VAR_4->tm_hour, VAR_4->tm_min, VAR_4->tm_sec);
}
