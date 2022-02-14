
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char*,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int,char*,int) ;

int FUNC_5(const char *VAR_1,
    int (*VAR_2)(const char *VAR_3, void *VAR_4),
    void *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_2();
 if (VAR_6 == 0) {
  char VAR_7[64];

  FUNC_4(VAR_7, sizeof(VAR_7), "%d", FUNC_3());
  if (FUNC_0(VAR_1, "cgroup.procs", VAR_7))
   FUNC_1(VAR_0);
  FUNC_1(VAR_2(VAR_1, VAR_5));
 }

 return VAR_6;
}
