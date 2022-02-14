
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char const*,char*,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (char*,int,char*,int) ;
 int FUNC_7 (int,int*,int ) ;

int FUNC_8(const char *VAR_1,
    int (*VAR_2)(const char *VAR_3, void *VAR_4),
    void *VAR_5)
{
 int VAR_6, VAR_7;

 VAR_6 = FUNC_4();
 if (VAR_6 < 0) {
  return VAR_6;
 } else if (VAR_6 == 0) {
  char VAR_8[64];

  FUNC_6(VAR_8, sizeof(VAR_8), "%d", FUNC_5());
  if (FUNC_2(VAR_1, "cgroup.procs", VAR_8))
   FUNC_3(VAR_0);
  FUNC_3(VAR_2(VAR_1, VAR_5));
 } else {
  FUNC_7(VAR_6, &VAR_7, 0);
  if (FUNC_1(VAR_7))
   return FUNC_0(VAR_7);
  else
   return -1;
 }
}
