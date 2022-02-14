
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char const*,int ,int ,int) ;
 int FUNC_1 (char*,...) ;
 char* FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(int VAR_3, const char *VAR_4, int VAR_5,
    int VAR_6, const char *VAR_7)
{
 int VAR_8;

 VAR_2 = 0;
 FUNC_1("Check failure of execveat(%d, '%s', %d) with %s... ",
  VAR_3, VAR_4?:"(null)", VAR_5, VAR_7);
 VAR_8 = FUNC_0(VAR_3, VAR_4, VAR_0, VAR_1, VAR_5);

 if (VAR_8 > 0) {
  FUNC_1("[FAIL] (unexpected success from execveat(2))\n");
  return 1;
 }
 if (VAR_2 != VAR_6) {
  FUNC_1("[FAIL] (expected errno %d (%s) not %d (%s)\n",
   VAR_6, FUNC_2(VAR_6),
   VAR_2, FUNC_2(VAR_2));
  return 1;
 }
 FUNC_1("[OK]\n");
 return 0;
}
