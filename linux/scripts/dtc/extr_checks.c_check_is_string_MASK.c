
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {int val; } ;
struct node {int dummy; } ;
struct dt_info {int dummy; } ;
struct check {char* data; } ;


 int FUNC_0 (struct check*,struct dt_info*,struct node*,struct property*,char*) ;
 int FUNC_1 (int ) ;
 struct property* FUNC_2 (struct node*,char*) ;

__attribute__((used)) static void FUNC_3(struct check *VAR_0, struct dt_info *VAR_1,
       struct node *VAR_2)
{
 struct property *VAR_3;
 char *VAR_4 = VAR_0->data;

 VAR_3 = FUNC_2(VAR_2, VAR_4);
 if (!VAR_3)
  return;

 if (!FUNC_1(VAR_3->val))
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, "property is not a string");
}
