
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; } ;
struct property {TYPE_1__ val; } ;
struct node {int parent; } ;
struct dt_info {int dummy; } ;
struct check {int dummy; } ;
typedef int cell_t ;


 int FUNC_0 (struct check*,struct dt_info*,struct node*,char*) ;
 int FUNC_1 (struct check*,struct dt_info*,struct node*,struct property*,char*,...) ;
 struct property* FUNC_2 (struct node*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct check *VAR_0, struct dt_info *VAR_1,
        struct node *VAR_2)
{
 struct property *VAR_3;
 int VAR_4, VAR_5, VAR_6;

 VAR_3 = FUNC_2(VAR_2, "reg");
 if (!VAR_3)
  return;

 if (!VAR_2->parent) {
  FUNC_0(VAR_0, VAR_1, VAR_2, "Root node has a \"reg\" property");
  return;
 }

 if (VAR_3->val.len == 0)
  FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, "property is empty");

 VAR_4 = FUNC_3(VAR_2->parent);
 VAR_5 = FUNC_4(VAR_2->parent);
 VAR_6 = (VAR_4 + VAR_5) * sizeof(cell_t);

 if (!VAR_6 || (VAR_3->val.len % VAR_6) != 0)
  FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, "property has invalid length (%d bytes) "
     "(#address-cells == %d, #size-cells == %d)",
     VAR_3->val.len, VAR_4, VAR_5);
}
