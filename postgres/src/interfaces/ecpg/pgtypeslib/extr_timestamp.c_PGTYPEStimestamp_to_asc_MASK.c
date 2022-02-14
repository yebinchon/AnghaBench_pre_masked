
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timestamp ;
struct tm {int dummy; } ;
typedef int fsec_t ;


 int FUNC_0 (struct tm*,int ,int,int ,int *,int,char*,int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 char* FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ,int *,struct tm*,int *,int *) ;

char *
FUNC_5(timestamp VAR_3)
{
 struct tm VAR_4,
      *VAR_5 = &VAR_4;
 char VAR_6[VAR_0 + 1];
 fsec_t VAR_7;
 int VAR_8 = 1;


 if (FUNC_2(VAR_3))
  FUNC_1(VAR_3, VAR_6);
 else if (FUNC_4(VAR_3, ((void*)0), VAR_5, &VAR_7, ((void*)0)) == 0)
  FUNC_0(VAR_5, VAR_7, 0, 0, ((void*)0), VAR_8, VAR_6, 0);
 else
 {
  VAR_2 = VAR_1;
  return ((void*)0);
 }
 return FUNC_3(VAR_6);
}
