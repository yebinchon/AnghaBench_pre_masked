
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ val; } ;
struct property {TYPE_1__ val; } ;
struct node {struct node* parent; int * bus; } ;
struct dt_info {int dummy; } ;
struct check {int dummy; } ;
typedef int cell_t ;


 int FUNC_0 (struct check*,struct dt_info*,struct node*,struct property*,char*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (int ) ;
 struct property* FUNC_2 (struct node*,char*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct check *VAR_1, struct dt_info *VAR_2, struct node *VAR_3)
{
 struct property *VAR_4;
 unsigned int VAR_5, VAR_6, VAR_7;
 cell_t *VAR_8;

 if (!VAR_3->parent || (VAR_3->parent->bus != &VAR_0))
  return;

 VAR_4 = FUNC_2(VAR_3, "reg");
 if (!VAR_4)
  return;

 VAR_8 = (cell_t *)VAR_4->val.val;
 VAR_5 = (FUNC_1(VAR_8[0]) & 0x00ff0000) >> 16;

 VAR_4 = FUNC_2(VAR_3->parent, "bus-range");
 if (!VAR_4) {
  VAR_6 = VAR_7 = 0;
 } else {
  VAR_8 = (cell_t *)VAR_4->val.val;
  VAR_6 = FUNC_1(VAR_8[0]);
  VAR_7 = FUNC_1(VAR_8[0]);
 }
 if ((VAR_5 < VAR_6) || (VAR_5 > VAR_7))
  FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, "PCI bus number %d out of range, expected (%d - %d)",
     VAR_5, VAR_6, VAR_7);
}
