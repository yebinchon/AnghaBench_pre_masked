
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char**,char*,char const*) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char const**,int ) ;
 int FUNC_5 (char**) ;

__attribute__((used)) static void FUNC_6(const char **VAR_3)
{
 char *VAR_4;
 const char *VAR_5;
 int VAR_6;

 if (FUNC_1(&VAR_4, "perf-%s", VAR_3[0]) < 0)
  goto do_die;







 VAR_5 = VAR_3[0];
 VAR_3[0] = VAR_4;





 VAR_6 = FUNC_4(VAR_3, 0);
 if (VAR_6 != -VAR_1) {
  if (FUNC_0(VAR_6)) {
do_die:
   FUNC_3("FATAL: unable to run '%s'", VAR_3[0]);
   VAR_6 = -128;
  }
  FUNC_2(-VAR_6);
 }
 VAR_2 = VAR_0;

 VAR_3[0] = VAR_5;
 FUNC_5(&VAR_4);
}
