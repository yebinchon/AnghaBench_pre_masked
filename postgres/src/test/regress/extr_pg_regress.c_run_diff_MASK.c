
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (char const*) ;
 int FUNC_5 (int ,char*,...) ;
 int VAR_0 ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static int
FUNC_7(const char *VAR_1, const char *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_6(VAR_1);
 if (!FUNC_1(VAR_3) || FUNC_0(VAR_3) > 1)
 {
  FUNC_5(VAR_0, FUNC_2("diff command failed with status %d: %s\n"), VAR_3, VAR_1);
  FUNC_3(2);
 }
 return FUNC_0(VAR_3);
}
