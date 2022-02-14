
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;
typedef int path ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,char*,char*) ;
 int FUNC_2 (char*,char*,...) ;
 int FUNC_3 (char*,int ) ;
 size_t FUNC_4 (int,char*,int) ;
 int FUNC_5 (char*,int,char*,char*) ;
 char* FUNC_6 (char*,char*,char**) ;

int FUNC_7(char *VAR_3)
{
 char VAR_4[VAR_2 + 1];
 char VAR_5[VAR_2];
 char *VAR_6, *VAR_7;
 int VAR_8, VAR_9;
 ssize_t VAR_10;

 FUNC_5(VAR_4, sizeof(VAR_4), "%s/cgroup.controllers", VAR_3);
 VAR_8 = FUNC_3(VAR_4, VAR_0);
 if (VAR_8 < 0) {
  FUNC_2("Opening cgroup.controllers: %s", VAR_4);
  return 1;
 }

 VAR_10 = FUNC_4(VAR_8, VAR_5, sizeof(VAR_5) - 1);
 if (VAR_10 < 0) {
  FUNC_0(VAR_8);
  FUNC_2("Reading cgroup.controllers: %s", VAR_4);
  return 1;
 }
 VAR_5[VAR_10] = 0;
 FUNC_0(VAR_8);


 if (VAR_10 == 0)
  return 0;

 FUNC_5(VAR_4, sizeof(VAR_4), "%s/cgroup.subtree_control", VAR_3);
 VAR_9 = FUNC_3(VAR_4, VAR_1);
 if (VAR_9 < 0) {
  FUNC_2("Opening cgroup.subtree_control: %s", VAR_4);
  return 1;
 }

 for (VAR_6 = FUNC_6(VAR_5, " ", &VAR_7); VAR_6; VAR_6 = FUNC_6(((void*)0), " ", &VAR_7)) {
  if (FUNC_1(VAR_9, "+%s\n", VAR_6) <= 0) {
   FUNC_2("Enabling controller %s: %s", VAR_6, VAR_4);
   FUNC_0(VAR_9);
   return 1;
  }
 }
 FUNC_0(VAR_9);
 return 0;
}
