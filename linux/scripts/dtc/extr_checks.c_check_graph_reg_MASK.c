
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int unit_addr ;
struct TYPE_3__ {int len; scalar_t__ val; } ;
struct property {TYPE_1__ val; } ;
struct node {TYPE_2__* parent; } ;
struct dt_info {int dummy; } ;
struct check {int dummy; } ;
typedef int cell_t ;
struct TYPE_4__ {int addr_cells; int size_cells; } ;


 int FUNC_0 (struct check*,struct dt_info*,struct node*,char*,...) ;
 int FUNC_1 (struct check*,struct dt_info*,struct node*,struct property*,char*,int) ;
 struct property* FUNC_2 (struct node*,char*) ;
 char* FUNC_3 (struct node*) ;
 int FUNC_4 (struct property*) ;
 int FUNC_5 (char*,int,char*,int) ;
 int FUNC_6 (char const*,char*) ;

__attribute__((used)) static void FUNC_7(struct check *VAR_0, struct dt_info *VAR_1,
       struct node *VAR_2)
{
 char VAR_3[9];
 const char *VAR_4 = FUNC_3(VAR_2);
 struct property *VAR_5;

 VAR_5 = FUNC_2(VAR_2, "reg");
 if (!VAR_5 || !VAR_4)
  return;

 if (!(VAR_5->val.val && VAR_5->val.len == sizeof(cell_t))) {
  FUNC_0(VAR_0, VAR_1, VAR_2, "graph node malformed 'reg' property");
  return;
 }

 FUNC_5(VAR_3, sizeof(VAR_3), "%x", FUNC_4(VAR_5));
 if (!FUNC_6(VAR_4, VAR_3))
  FUNC_0(VAR_0, VAR_1, VAR_2, "graph node unit address error, expected \"%s\"",
       VAR_3);

 if (VAR_2->parent->addr_cells != 1)
  FUNC_1(VAR_0, VAR_1, VAR_2, FUNC_2(VAR_2, "#address-cells"),
     "graph node '#address-cells' is %d, must be 1",
     VAR_2->parent->addr_cells);
 if (VAR_2->parent->size_cells != 0)
  FUNC_1(VAR_0, VAR_1, VAR_2, FUNC_2(VAR_2, "#size-cells"),
     "graph node '#size-cells' is %d, must be 0",
     VAR_2->parent->size_cells);
}
