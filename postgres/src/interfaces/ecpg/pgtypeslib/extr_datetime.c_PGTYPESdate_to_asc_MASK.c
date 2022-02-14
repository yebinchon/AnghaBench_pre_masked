
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_mday; int tm_mon; int tm_year; } ;
typedef scalar_t__ date ;


 int FUNC_0 (struct tm*,int,char*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int,int,int) ;
 int FUNC_2 (scalar_t__,int *,int *,int *) ;
 char* FUNC_3 (char*) ;

char *
FUNC_4(date VAR_1)
{
 struct tm VAR_2,
      *VAR_3 = &VAR_2;
 char VAR_4[VAR_0 + 1];
 int VAR_5 = 1;
 bool VAR_6 = 0;

 FUNC_2(VAR_1 + FUNC_1(2000, 1, 1), &(VAR_3->tm_year), &(VAR_3->tm_mon), &(VAR_3->tm_mday));
 FUNC_0(VAR_3, VAR_5, VAR_4, VAR_6);
 return FUNC_3(VAR_4);
}
