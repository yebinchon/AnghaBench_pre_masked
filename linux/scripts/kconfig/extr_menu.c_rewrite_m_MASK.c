
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * sym; struct expr* expr; } ;
struct TYPE_3__ {struct expr* expr; } ;
struct expr {int type; TYPE_2__ left; TYPE_1__ right; } ;






 struct expr* FUNC_0 (struct expr*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static struct expr *FUNC_2(struct expr *VAR_2)
{
 if (!VAR_2)
  return VAR_2;

 switch (VAR_2->type) {
 case 130:
  VAR_2->left.expr = FUNC_2(VAR_2->left.expr);
  break;
 case 129:
 case 131:
  VAR_2->left.expr = FUNC_2(VAR_2->left.expr);
  VAR_2->right.expr = FUNC_2(VAR_2->right.expr);
  break;
 case 128:

  if (VAR_2->left.sym == &VAR_1)
   return FUNC_0(VAR_2, FUNC_1(VAR_0));
  break;
 default:
  break;
 }
 return VAR_2;
}
