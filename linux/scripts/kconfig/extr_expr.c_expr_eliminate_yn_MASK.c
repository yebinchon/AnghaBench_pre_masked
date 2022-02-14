
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct expr* expr; } ;
struct TYPE_3__ {int * sym; struct expr* expr; } ;
struct expr {int type; TYPE_2__ right; TYPE_1__ left; } ;




 void* VAR_0 ;
 int FUNC_0 (struct expr*) ;
 int FUNC_1 (struct expr*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static struct expr *FUNC_2(struct expr *VAR_3)
{
 struct expr *VAR_4;

 if (VAR_3) switch (VAR_3->type) {
 case 129:
  VAR_3->left.expr = FUNC_2(VAR_3->left.expr);
  VAR_3->right.expr = FUNC_2(VAR_3->right.expr);
  if (VAR_3->left.expr->type == VAR_0) {
   if (VAR_3->left.expr->left.sym == &VAR_1) {
    FUNC_0(VAR_3->left.expr);
    FUNC_0(VAR_3->right.expr);
    VAR_3->type = VAR_0;
    VAR_3->left.sym = &VAR_1;
    VAR_3->right.expr = ((void*)0);
    return VAR_3;
   } else if (VAR_3->left.expr->left.sym == &VAR_2) {
    FUNC_1(VAR_3->left.expr);
    VAR_4 = VAR_3->right.expr;
    *VAR_3 = *(VAR_3->right.expr);
    FUNC_1(VAR_4);
    return VAR_3;
   }
  }
  if (VAR_3->right.expr->type == VAR_0) {
   if (VAR_3->right.expr->left.sym == &VAR_1) {
    FUNC_0(VAR_3->left.expr);
    FUNC_0(VAR_3->right.expr);
    VAR_3->type = VAR_0;
    VAR_3->left.sym = &VAR_1;
    VAR_3->right.expr = ((void*)0);
    return VAR_3;
   } else if (VAR_3->right.expr->left.sym == &VAR_2) {
    FUNC_1(VAR_3->right.expr);
    VAR_4 = VAR_3->left.expr;
    *VAR_3 = *(VAR_3->left.expr);
    FUNC_1(VAR_4);
    return VAR_3;
   }
  }
  break;
 case 128:
  VAR_3->left.expr = FUNC_2(VAR_3->left.expr);
  VAR_3->right.expr = FUNC_2(VAR_3->right.expr);
  if (VAR_3->left.expr->type == VAR_0) {
   if (VAR_3->left.expr->left.sym == &VAR_1) {
    FUNC_1(VAR_3->left.expr);
    VAR_4 = VAR_3->right.expr;
    *VAR_3 = *(VAR_3->right.expr);
    FUNC_1(VAR_4);
    return VAR_3;
   } else if (VAR_3->left.expr->left.sym == &VAR_2) {
    FUNC_0(VAR_3->left.expr);
    FUNC_0(VAR_3->right.expr);
    VAR_3->type = VAR_0;
    VAR_3->left.sym = &VAR_2;
    VAR_3->right.expr = ((void*)0);
    return VAR_3;
   }
  }
  if (VAR_3->right.expr->type == VAR_0) {
   if (VAR_3->right.expr->left.sym == &VAR_1) {
    FUNC_1(VAR_3->right.expr);
    VAR_4 = VAR_3->left.expr;
    *VAR_3 = *(VAR_3->left.expr);
    FUNC_1(VAR_4);
    return VAR_3;
   } else if (VAR_3->right.expr->left.sym == &VAR_2) {
    FUNC_0(VAR_3->left.expr);
    FUNC_0(VAR_3->right.expr);
    VAR_3->type = VAR_0;
    VAR_3->left.sym = &VAR_2;
    VAR_3->right.expr = ((void*)0);
    return VAR_3;
   }
  }
  break;
 default:
  ;
 }
 return VAR_3;
}
