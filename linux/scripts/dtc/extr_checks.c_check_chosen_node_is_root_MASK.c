
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node {scalar_t__ parent; int name; } ;
struct dt_info {scalar_t__ dt; } ;
struct check {int dummy; } ;


 int FUNC_0 (struct check*,struct dt_info*,struct node*,char*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2(struct check *VAR_0, struct dt_info *VAR_1,
          struct node *VAR_2)
{
 if (!FUNC_1(VAR_2->name, "chosen"))
  return;

 if (VAR_2->parent != VAR_1->dt)
  FUNC_0(VAR_0, VAR_1, VAR_2, "chosen node must be at root node");
}
