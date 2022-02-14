
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slabinfo {char* name; } ;


 char* VAR_0 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (struct slabinfo*,char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;

__attribute__((used)) static void FUNC_3(struct slabinfo *VAR_1)
{
 if (FUNC_2(VAR_1->name, "*") == 0)
  return;

 if (FUNC_1(VAR_1, "ops")) {
  FUNC_0("\n%s: kmem_cache operations\n", VAR_1->name);
  FUNC_0("--------------------------------------------\n");
  FUNC_0("%s", VAR_0);
 } else
  FUNC_0("\n%s has no kmem_cache operations\n", VAR_1->name);
}
