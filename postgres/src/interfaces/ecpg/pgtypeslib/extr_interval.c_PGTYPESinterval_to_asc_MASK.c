
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int dummy; } ;
typedef int interval ;
typedef int fsec_t ;


 int FUNC_0 (struct tm*,int ,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,struct tm*,int *) ;
 char* FUNC_2 (char*) ;

char *
FUNC_3(interval * VAR_4)
{
 struct tm VAR_5,
      *VAR_6 = &VAR_5;
 fsec_t VAR_7;
 char VAR_8[VAR_1 + 1];
 int VAR_9 = VAR_0;

 if (FUNC_1(*VAR_4, VAR_6, &VAR_7) != 0)
 {
  VAR_3 = VAR_2;
  return ((void*)0);
 }

 FUNC_0(VAR_6, VAR_7, VAR_9, VAR_8);

 return FUNC_2(VAR_8);
}
