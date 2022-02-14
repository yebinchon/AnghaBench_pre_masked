
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct provider {int prop_name; } ;
struct property {int dummy; } ;
struct node {int dummy; } ;
struct dt_info {int dummy; } ;
struct check {struct provider* data; } ;


 int FUNC_0 (struct check*,struct dt_info*,struct node*,struct property*,struct provider*) ;
 struct property* FUNC_1 (struct node*,int ) ;

__attribute__((used)) static void FUNC_2(struct check *VAR_0,
       struct dt_info *VAR_1,
              struct node *VAR_2)
{
 struct provider *VAR_3 = VAR_0->data;
 struct property *VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_3->prop_name);
 if (!VAR_4)
  return;

 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_4, VAR_3);
}
