
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct symbol {int dummy; } ;
struct TYPE_4__ {int sym; struct expr* expr; } ;
struct TYPE_3__ {int sym; struct expr* expr; } ;
struct expr {int type; TYPE_2__ left; TYPE_1__ right; } ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 struct symbol* FUNC_1 (int ) ;

__attribute__((used)) static struct symbol *FUNC_2(struct expr *VAR_1)
{
 struct symbol *VAR_2;

 if (!VAR_1)
  return ((void*)0);
 switch (VAR_1->type) {
 case 130:
 case 137:
  VAR_2 = FUNC_2(VAR_1->left.expr);
  if (VAR_2)
   return VAR_2;
  return FUNC_2(VAR_1->right.expr);
 case 131:
  return FUNC_2(VAR_1->left.expr);
 case 136:
 case 135:
 case 134:
 case 133:
 case 132:
 case 128:
  VAR_2 = FUNC_1(VAR_1->left.sym);
  if (VAR_2)
   return VAR_2;
  return FUNC_1(VAR_1->right.sym);
 case 129:
  return FUNC_1(VAR_1->left.sym);
 default:
  break;
 }
 FUNC_0(VAR_0, "Oops! How to check %d?\n", VAR_1->type);
 return ((void*)0);
}
