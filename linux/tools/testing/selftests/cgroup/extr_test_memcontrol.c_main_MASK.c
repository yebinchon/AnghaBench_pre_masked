
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int root ;
struct TYPE_3__ {int (* fn ) (char*) ;int name; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 scalar_t__ FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (char*,char*,char*) ;
 scalar_t__ FUNC_3 (char*,char*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (char*) ;
 TYPE_1__* VAR_3 ;

int FUNC_9(int VAR_4, char **VAR_5)
{
 char VAR_6[VAR_2];
 int VAR_7, VAR_8 = VAR_1;

 if (FUNC_1(VAR_6, sizeof(VAR_6)))
  FUNC_4("cgroup v2 isn't mounted\n");





 if (FUNC_2(VAR_6, "cgroup.controllers", "memory"))
  FUNC_4("memory controller isn't available\n");

 if (FUNC_2(VAR_6, "cgroup.subtree_control", "memory"))
  if (FUNC_3(VAR_6, "cgroup.subtree_control", "+memory"))
   FUNC_4("Failed to set memory controller\n");

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_3); VAR_7++) {
  switch (VAR_3[VAR_7].fn(VAR_6)) {
  case 129:
   FUNC_6("%s\n", VAR_3[VAR_7].name);
   break;
  case 128:
   FUNC_7("%s\n", VAR_3[VAR_7].name);
   break;
  default:
   VAR_8 = VAR_0;
   FUNC_5("%s\n", VAR_3[VAR_7].name);
   break;
  }
 }

 return VAR_8;
}
