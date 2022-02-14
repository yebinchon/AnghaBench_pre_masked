
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {int name; } ;
struct node {int name; } ;
struct dt_info {int dummy; } ;
struct check {int data; } ;


 int FUNC_0 (struct check*,struct dt_info*,struct node*,struct property*,char*) ;
 int FUNC_1 (struct check*,struct dt_info*,struct node*) ;
 struct property* FUNC_2 (struct node*,char*) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void FUNC_4(struct check *VAR_0, struct dt_info *VAR_1,
       struct node *VAR_2)
{
 struct property *VAR_3;

 if (!FUNC_3(VAR_2->name, "chosen"))
  return;

 VAR_3 = FUNC_2(VAR_2, "stdout-path");
 if (!VAR_3) {
  VAR_3 = FUNC_2(VAR_2, "linux,stdout-path");
  if (!VAR_3)
   return;
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, "Use 'stdout-path' instead");
 }

 VAR_0->data = VAR_3->name;
 FUNC_1(VAR_0, VAR_1, VAR_2);
}
