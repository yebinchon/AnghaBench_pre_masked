
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct expr* expr; } ;
struct TYPE_3__ {struct expr* expr; } ;
struct expr {int type; TYPE_2__ right; TYPE_1__ left; } ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct expr*) ;
 int VAR_0 ;

void FUNC_2(struct expr *VAR_1)
{
 if (!VAR_1)
  return;

 switch (VAR_1->type) {
 case 129:
  break;
 case 131:
  FUNC_2(VAR_1->left.expr);
  break;
 case 136:
 case 135:
 case 134:
 case 133:
 case 132:
 case 128:
  break;
 case 130:
 case 137:
  FUNC_2(VAR_1->left.expr);
  FUNC_2(VAR_1->right.expr);
  break;
 default:
  FUNC_0(VAR_0, "how to free type %d?\n", VAR_1->type);
  break;
 }
 FUNC_1(VAR_1);
}
