
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (char**,int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char const*) ;
 scalar_t__ FUNC_6 (int ,int ,int ,int ,int ,int ) ;

int FUNC_7(int VAR_7, char **VAR_8)
{
 const char *VAR_9 = "";






 if (VAR_7 != 5)
  FUNC_4("wrong argc\n");
 FUNC_1();

 if (FUNC_2(VAR_1, VAR_4) != FUNC_0(VAR_8, 1)) {
  FUNC_5("Wrong effective state%s\n", VAR_9);
  return 1;
 }

 if (FUNC_2(VAR_3, VAR_4) != FUNC_0(VAR_8, 2)) {
  FUNC_5("Wrong permitted state%s\n", VAR_9);
  return 1;
 }

 if (FUNC_2(VAR_2, VAR_4) != FUNC_0(VAR_8, 3)) {
  FUNC_5("Wrong inheritable state%s\n", VAR_9);
  return 1;
 }

 if (FUNC_6(VAR_5, VAR_6, VAR_4, 0, 0, 0) != FUNC_0(VAR_8, 4)) {
  FUNC_5("Wrong ambient state%s\n", VAR_9);
  return 1;
 }

 FUNC_5("%s: Capabilities after execve were correct\n",
   "validate_cap:");
 return 0;
}
