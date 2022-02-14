
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int val; } ;
struct symbol {int type; TYPE_4__ curr; } ;
struct property {TYPE_3__* expr; } ;
struct TYPE_6__ {int sym; } ;
struct TYPE_5__ {int sym; } ;
struct TYPE_7__ {TYPE_2__ right; TYPE_1__ left; } ;




 int FUNC_0 (char*,char*,long long) ;
 long long FUNC_1 (int ,int *,int) ;
 struct property* FUNC_2 (struct symbol*) ;
 long long FUNC_3 (int ,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(struct symbol *VAR_0)
{
 struct property *VAR_1;
 int VAR_2;
 long long VAR_3, VAR_4;
 char VAR_5[64];

 switch (VAR_0->type) {
 case 128:
  VAR_2 = 10;
  break;
 case 129:
  VAR_2 = 16;
  break;
 default:
  return;
 }
 VAR_1 = FUNC_2(VAR_0);
 if (!VAR_1)
  return;
 VAR_3 = FUNC_1(VAR_0->curr.val, ((void*)0), VAR_2);
 VAR_4 = FUNC_3(VAR_1->expr->left.sym, VAR_2);
 if (VAR_3 >= VAR_4) {
  VAR_4 = FUNC_3(VAR_1->expr->right.sym, VAR_2);
  if (VAR_3 <= VAR_4)
   return;
 }
 if (VAR_0->type == 128)
  FUNC_0(VAR_5, "%lld", VAR_4);
 else
  FUNC_0(VAR_5, "0x%llx", VAR_4);
 VAR_0->curr.val = FUNC_4(VAR_5);
}
