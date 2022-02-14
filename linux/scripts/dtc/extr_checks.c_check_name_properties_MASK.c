
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ len; int val; } ;
struct property {TYPE_1__ val; struct property* name; struct property* next; } ;
struct node {int basenamelen; int name; struct property* proplist; } ;
struct dt_info {int dummy; } ;
struct check {int dummy; } ;


 int FUNC_0 (struct check*,struct dt_info*,struct node*,char*,int ) ;
 int FUNC_1 (TYPE_1__) ;
 int FUNC_2 (struct property*) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 scalar_t__ FUNC_4 (struct property*,char*) ;

__attribute__((used)) static void FUNC_5(struct check *VAR_0, struct dt_info *VAR_1,
      struct node *VAR_2)
{
 struct property **VAR_3, *VAR_4 = ((void*)0);

 for (VAR_3 = &VAR_2->proplist; *VAR_3; VAR_3 = &((*VAR_3)->next))
  if (FUNC_4((*VAR_3)->name, "name")) {
   VAR_4 = *VAR_3;
   break;
  }

 if (!VAR_4)
  return;

 if ((VAR_4->val.len != VAR_2->basenamelen+1)
     || (FUNC_3(VAR_4->val.val, VAR_2->name, VAR_2->basenamelen) != 0)) {
  FUNC_0(VAR_0, VAR_1, VAR_2, "\"name\" property is incorrect (\"%s\" instead"
       " of base node name)", VAR_4->val.val);
 } else {


  *VAR_3 = VAR_4->next;
  FUNC_2(VAR_4->name);
  FUNC_1(VAR_4->val);
  FUNC_2(VAR_4);
 }
}
