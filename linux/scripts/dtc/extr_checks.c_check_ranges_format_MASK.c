
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; } ;
struct property {TYPE_1__ val; } ;
struct node {int fullpath; struct node* parent; } ;
struct dt_info {int dummy; } ;
struct check {int dummy; } ;
typedef int cell_t ;


 int FUNC_0 (struct check*,struct dt_info*,struct node*,struct property*,char*,...) ;
 struct property* FUNC_1 (struct node*,char*) ;
 int FUNC_2 (struct node*) ;
 int FUNC_3 (struct node*) ;

__attribute__((used)) static void FUNC_4(struct check *VAR_0, struct dt_info *VAR_1,
    struct node *VAR_2)
{
 struct property *VAR_3;
 int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;

 VAR_3 = FUNC_1(VAR_2, "ranges");
 if (!VAR_3)
  return;

 if (!VAR_2->parent) {
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, "Root node has a \"ranges\" property");
  return;
 }

 VAR_5 = FUNC_2(VAR_2->parent);
 VAR_7 = FUNC_3(VAR_2->parent);
 VAR_4 = FUNC_2(VAR_2);
 VAR_6 = FUNC_3(VAR_2);
 VAR_8 = (VAR_5 + VAR_4 + VAR_6) * sizeof(cell_t);

 if (VAR_3->val.len == 0) {
  if (VAR_5 != VAR_4)
   FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, "empty \"ranges\" property but its "
      "#address-cells (%d) differs from %s (%d)",
      VAR_4, VAR_2->parent->fullpath,
      VAR_5);
  if (VAR_7 != VAR_6)
   FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, "empty \"ranges\" property but its "
      "#size-cells (%d) differs from %s (%d)",
      VAR_6, VAR_2->parent->fullpath,
      VAR_7);
 } else if ((VAR_3->val.len % VAR_8) != 0) {
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, "\"ranges\" property has invalid length (%d bytes) "
     "(parent #address-cells == %d, child #address-cells == %d, "
     "#size-cells == %d)", VAR_3->val.len,
     VAR_5, VAR_4, VAR_6);
 }
}
