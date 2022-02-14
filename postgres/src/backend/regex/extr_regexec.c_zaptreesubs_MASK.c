
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vars {size_t nmatch; TYPE_1__* pmatch; } ;
struct subre {char op; int subno; struct subre* right; struct subre* left; } ;
struct TYPE_2__ {int rm_so; int rm_eo; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(struct vars *VAR_0,
   struct subre *VAR_1)
{
 if (VAR_1->op == '(')
 {
  int VAR_2 = VAR_1->subno;

  FUNC_0(VAR_2 > 0);
  if ((size_t) VAR_2 < VAR_0->nmatch)
  {
   VAR_0->pmatch[VAR_2].rm_so = -1;
   VAR_0->pmatch[VAR_2].rm_eo = -1;
  }
 }

 if (VAR_1->left != ((void*)0))
  FUNC_1(VAR_0, VAR_1->left);
 if (VAR_1->right != ((void*)0))
  FUNC_1(VAR_0, VAR_1->right);
}
