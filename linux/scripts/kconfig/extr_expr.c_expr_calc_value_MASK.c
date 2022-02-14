
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


union string_value {scalar_t__ u; scalar_t__ s; } ;
typedef int tristate ;
struct TYPE_8__ {TYPE_4__* sym; struct expr* expr; } ;
struct TYPE_7__ {TYPE_4__* sym; struct expr* expr; } ;
struct expr {int type; TYPE_3__ right; TYPE_2__ left; } ;
typedef enum string_value_kind { ____Placeholder_string_value_kind } string_value_kind ;
struct TYPE_6__ {int tri; } ;
struct TYPE_9__ {int type; TYPE_1__ curr; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (char const*,int ,union string_value*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char const*,char const*) ;
 int FUNC_6 (TYPE_4__*) ;
 char* FUNC_7 (TYPE_4__*) ;
 int VAR_4 ;

tristate FUNC_8(struct expr *VAR_5)
{
 tristate VAR_6, VAR_7;
 const char *VAR_8, *VAR_9;
 enum string_value_kind VAR_10 = VAR_1, VAR_11 = VAR_1;
 union string_value VAR_12 = {}, VAR_13 = {};
 int VAR_14;

 if (!VAR_5)
  return VAR_4;

 switch (VAR_5->type) {
 case 129:
  FUNC_6(VAR_5->left.sym);
  return VAR_5->left.sym->curr.tri;
 case 137:
  VAR_6 = FUNC_8(VAR_5->left.expr);
  VAR_7 = FUNC_8(VAR_5->right.expr);
  return FUNC_0(VAR_6, VAR_7);
 case 130:
  VAR_6 = FUNC_8(VAR_5->left.expr);
  VAR_7 = FUNC_8(VAR_5->right.expr);
  return FUNC_2(VAR_6, VAR_7);
 case 131:
  VAR_6 = FUNC_8(VAR_5->left.expr);
  return FUNC_1(VAR_6);
 case 136:
 case 135:
 case 134:
 case 133:
 case 132:
 case 128:
  break;
 default:
  FUNC_4("expr_calc_value: %d?\n", VAR_5->type);
  return VAR_3;
 }

 FUNC_6(VAR_5->left.sym);
 FUNC_6(VAR_5->right.sym);
 VAR_8 = FUNC_7(VAR_5->left.sym);
 VAR_9 = FUNC_7(VAR_5->right.sym);

 if (VAR_5->left.sym->type != VAR_0 || VAR_5->right.sym->type != VAR_0) {
  VAR_10 = FUNC_3(VAR_8, VAR_5->left.sym->type, &VAR_12);
  VAR_11 = FUNC_3(VAR_9, VAR_5->right.sym->type, &VAR_13);
 }

 if (VAR_10 == VAR_1 || VAR_11 == VAR_1)
  VAR_14 = FUNC_5(VAR_8, VAR_9);
 else if (VAR_10 == VAR_2 || VAR_11 == VAR_2)
  VAR_14 = (VAR_12.u > VAR_13.u) - (VAR_12.u < VAR_13.u);
 else
  VAR_14 = (VAR_12.s > VAR_13.s) - (VAR_12.s < VAR_13.s);

 switch(VAR_5->type) {
 case 136:
  return VAR_14 ? VAR_3 : VAR_4;
 case 135:
  return VAR_14 >= 0 ? VAR_4 : VAR_3;
 case 134:
  return VAR_14 > 0 ? VAR_4 : VAR_3;
 case 133:
  return VAR_14 <= 0 ? VAR_4 : VAR_3;
 case 132:
  return VAR_14 < 0 ? VAR_4 : VAR_3;
 case 128:
  return VAR_14 ? VAR_4 : VAR_3;
 default:
  FUNC_4("expr_calc_value: relation %d?\n", VAR_5->type);
  return VAR_3;
 }
}
