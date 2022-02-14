
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * sym; struct expr* expr; } ;
struct TYPE_3__ {struct expr* expr; } ;
struct expr {int type; TYPE_2__ left; TYPE_1__ right; } ;
typedef enum expr_type { ____Placeholder_expr_type } expr_type ;




 scalar_t__ VAR_0 ;
 struct expr* VAR_1 ;
 struct expr* VAR_2 ;
 struct expr* FUNC_0 (int *) ;
 int FUNC_1 (struct expr*,struct expr*) ;
 int FUNC_2 (struct expr*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_3(enum expr_type VAR_6, struct expr **VAR_7, struct expr **VAR_8)
{


 if (VAR_1->type == VAR_6) {
  FUNC_3(VAR_6, &VAR_1->left.expr, &VAR_2);
  FUNC_3(VAR_6, &VAR_1->right.expr, &VAR_2);
  return;
 }
 if (VAR_2->type == VAR_6) {
  FUNC_3(VAR_6, &VAR_1, &VAR_2->left.expr);
  FUNC_3(VAR_6, &VAR_1, &VAR_2->right.expr);
  return;
 }



 if (VAR_1->type == VAR_0 && VAR_2->type == VAR_0 &&
     VAR_1->left.sym == VAR_2->left.sym &&
     (VAR_1->left.sym == &VAR_4 || VAR_1->left.sym == &VAR_3))
  return;
 if (!FUNC_1(VAR_1, VAR_2))
  return;



 VAR_5++;
 FUNC_2(VAR_1); FUNC_2(VAR_2);
 switch (VAR_6) {
 case 128:
  VAR_1 = FUNC_0(&VAR_3);
  VAR_2 = FUNC_0(&VAR_3);
  break;
 case 129:
  VAR_1 = FUNC_0(&VAR_4);
  VAR_2 = FUNC_0(&VAR_4);
  break;
 default:
  ;
 }
}
