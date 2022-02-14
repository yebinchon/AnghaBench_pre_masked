
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timestamp ;
struct tm {int dummy; } ;
typedef int fsec_t ;
typedef int date ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int,struct tm*,char*,int*,char const*) ;
 int FUNC_3 (int ,int *,struct tm*,int *,int *) ;

int
FUNC_4(timestamp * VAR_0, char *VAR_1, int VAR_2, const char *VAR_3)
{
 struct tm VAR_4;
 fsec_t VAR_5;
 date VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(*VAR_0);
 VAR_7 = FUNC_0(VAR_6);
 FUNC_3(*VAR_0, ((void*)0), &VAR_4, &VAR_5, ((void*)0));

 return FUNC_2(VAR_0, VAR_6, VAR_7, &VAR_4, VAR_1, &VAR_2, VAR_3);
}
