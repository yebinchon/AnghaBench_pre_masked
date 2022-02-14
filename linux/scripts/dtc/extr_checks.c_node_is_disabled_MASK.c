
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* val; } ;
struct property {TYPE_1__ val; } ;
struct node {int dummy; } ;


 struct property* FUNC_0 (struct node*,char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;

__attribute__((used)) static bool FUNC_2(struct node *VAR_0)
{
 struct property *VAR_1;

 VAR_1 = FUNC_0(VAR_0, "status");
 if (VAR_1) {
  char *VAR_2 = VAR_1->val.val;
  if (FUNC_1("disabled", VAR_2))
   return 1;
 }

 return 0;
}
