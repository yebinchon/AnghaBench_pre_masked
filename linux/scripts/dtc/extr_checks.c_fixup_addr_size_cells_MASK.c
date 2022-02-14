
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {int dummy; } ;
struct node {int addr_cells; int size_cells; } ;
struct dt_info {int dummy; } ;
struct check {int dummy; } ;


 struct property* FUNC_0 (struct node*,char*) ;
 void* FUNC_1 (struct property*) ;

__attribute__((used)) static void FUNC_2(struct check *VAR_0, struct dt_info *VAR_1,
      struct node *VAR_2)
{
 struct property *VAR_3;

 VAR_2->addr_cells = -1;
 VAR_2->size_cells = -1;

 VAR_3 = FUNC_0(VAR_2, "#address-cells");
 if (VAR_3)
  VAR_2->addr_cells = FUNC_1(VAR_3);

 VAR_3 = FUNC_0(VAR_2, "#size-cells");
 if (VAR_3)
  VAR_2->size_cells = FUNC_1(VAR_3);
}
