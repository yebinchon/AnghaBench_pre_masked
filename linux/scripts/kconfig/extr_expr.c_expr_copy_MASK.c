
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct expr* expr; int sym; } ;
struct TYPE_3__ {struct expr* expr; int sym; } ;
struct expr {int type; TYPE_2__ right; TYPE_1__ left; } ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct expr*) ;
 int FUNC_2 (struct expr*,struct expr const*,int) ;
 int VAR_0 ;
 struct expr* FUNC_3 (int) ;

struct expr *FUNC_4(const struct expr *VAR_1)
{
 struct expr *VAR_2;

 if (!VAR_1)
  return ((void*)0);

 VAR_2 = FUNC_3(sizeof(*VAR_1));
 FUNC_2(VAR_2, VAR_1, sizeof(*VAR_1));
 switch (VAR_1->type) {
 case 129:
  VAR_2->left = VAR_1->left;
  break;
 case 131:
  VAR_2->left.expr = FUNC_4(VAR_1->left.expr);
  break;
 case 137:
 case 136:
 case 135:
 case 134:
 case 132:
 case 128:
  VAR_2->left.sym = VAR_1->left.sym;
  VAR_2->right.sym = VAR_1->right.sym;
  break;
 case 138:
 case 130:
 case 133:
  VAR_2->left.expr = FUNC_4(VAR_1->left.expr);
  VAR_2->right.expr = FUNC_4(VAR_1->right.expr);
  break;
 default:
  FUNC_0(VAR_0, "can't copy type %d\n", VAR_2->type);
  FUNC_1(VAR_2);
  VAR_2 = ((void*)0);
  break;
 }

 return VAR_2;
}
