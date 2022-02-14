
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; } ;
struct property {TYPE_1__ val; } ;
struct node {struct node* parent; } ;
struct dt_info {int dtsflags; struct node* dt; } ;
struct check {int dummy; } ;
typedef int cell_t ;


 int VAR_0 ;
 int FUNC_0 (struct check*,struct dt_info*,struct node*,char*) ;
 int FUNC_1 (struct check*,struct dt_info*,struct node*,struct property*,char*,...) ;
 struct node* FUNC_2 (struct node*,int) ;
 struct property* FUNC_3 (struct node*,char*) ;
 scalar_t__ FUNC_4 (struct node*) ;
 int FUNC_5 (struct property*) ;

__attribute__((used)) static void FUNC_6(struct check *VAR_1,
          struct dt_info *VAR_2,
          struct node *VAR_3)
{
 struct node *VAR_4 = VAR_2->dt;
 struct node *VAR_5 = ((void*)0), *VAR_6 = VAR_3;
 struct property *VAR_7, *VAR_8 = ((void*)0);
 int VAR_9, VAR_10;

 VAR_7 = FUNC_3(VAR_3, "interrupts");
 if (!VAR_7)
  return;

 if (VAR_7->val.len % sizeof(cell_t))
  FUNC_1(VAR_1, VAR_2, VAR_3, VAR_7, "size (%d) is invalid, expected multiple of %zu",
       VAR_7->val.len, sizeof(cell_t));

 while (VAR_6 && !VAR_8) {
  if (VAR_6 != VAR_3 && FUNC_4(VAR_6)) {
   VAR_5 = VAR_6;
   break;
  }

  VAR_8 = FUNC_3(VAR_6, "interrupt-parent");
  if (VAR_8) {
   VAR_10 = FUNC_5(VAR_8);
   if ((VAR_10 == 0) || (VAR_10 == -1)) {


    if (VAR_2->dtsflags & VAR_0)
     return;
    FUNC_1(VAR_1, VAR_2, VAR_6, VAR_8, "Invalid phandle");
    continue;
   }

   VAR_5 = FUNC_2(VAR_4, VAR_10);
   if (!VAR_5) {
    FUNC_1(VAR_1, VAR_2, VAR_6, VAR_8, "Bad phandle");
    return;
   }
   if (!FUNC_4(VAR_5))
    FUNC_0(VAR_1, VAR_2, VAR_5,
         "Missing interrupt-controller or interrupt-map property");

   break;
  }

  VAR_6 = VAR_6->parent;
 }

 if (!VAR_5) {
  FUNC_0(VAR_1, VAR_2, VAR_3, "Missing interrupt-parent");
  return;
 }

 VAR_8 = FUNC_3(VAR_5, "#interrupt-cells");
 if (!VAR_8) {
  FUNC_0(VAR_1, VAR_2, VAR_5, "Missing #interrupt-cells in interrupt-parent");
  return;
 }

 VAR_9 = FUNC_5(VAR_8);
 if (VAR_7->val.len % (VAR_9 * sizeof(cell_t))) {
  FUNC_1(VAR_1, VAR_2, VAR_3, VAR_8,
     "size is (%d), expected multiple of %d",
     VAR_7->val.len, (int)(VAR_9 * sizeof(cell_t)));
 }
}
