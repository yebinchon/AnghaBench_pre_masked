
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u32 ;


 int FUNC_0 () ;
 int FUNC_1 (char*,char const*,...) ;
 int FUNC_2 (char*,char**,int ) ;

int FUNC_3(int *VAR_0, char ***VAR_1, __u32 *VAR_2, const char *VAR_3)
{
 char *VAR_4;

 FUNC_0();

 if (*VAR_2) {
  FUNC_1("%s already specified", VAR_3);
  return -1;
 }

 *VAR_2 = FUNC_2(**VAR_1, &VAR_4, 0);
 if (*VAR_4) {
  FUNC_1("can't parse %s as %s", **VAR_1, VAR_3);
  return -1;
 }
 FUNC_0();

 return 0;
}
