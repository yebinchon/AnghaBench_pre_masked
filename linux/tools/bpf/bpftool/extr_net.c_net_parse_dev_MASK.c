
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static int FUNC_4(int *VAR_0, char ***VAR_1)
{
 int VAR_2;

 if (FUNC_2(**VAR_1, "dev")) {
  FUNC_0();

  VAR_2 = FUNC_1(**VAR_1);
  if (!VAR_2)
   FUNC_3("invalid devname %s", **VAR_1);

  FUNC_0();
 } else {
  FUNC_3("expected 'dev', got: '%s'?", **VAR_1);
  return -1;
 }

 return VAR_2;
}
