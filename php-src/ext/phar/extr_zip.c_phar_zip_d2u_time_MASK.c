
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct tm*) ;
 struct tm* FUNC_2 (int *,struct tm*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static time_t FUNC_4(char *VAR_0, char *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0), VAR_3 = FUNC_0(VAR_1);
 struct tm *VAR_4, VAR_5;
 time_t VAR_6;

 VAR_6 = FUNC_3(((void*)0));
 VAR_4 = FUNC_2(&VAR_6, &VAR_5);

 VAR_4->tm_year = ((VAR_3>>9)&127) + 1980 - 1900;
 VAR_4->tm_mon = ((VAR_3>>5)&15) - 1;
 VAR_4->tm_mday = VAR_3&31;

 VAR_4->tm_hour = (VAR_2>>11)&31;
 VAR_4->tm_min = (VAR_2>>5)&63;
 VAR_4->tm_sec = (VAR_2<<1)&62;

 return FUNC_1(VAR_4);
}
