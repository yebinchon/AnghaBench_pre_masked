
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vars {struct subre* treechain; struct subre* treefree; int re; } ;
struct subre {int op; int flags; int min; int max; int cnfa; struct state* end; struct state* begin; int * right; struct subre* left; scalar_t__ subno; scalar_t__ id; struct subre* chain; } ;
struct state {int dummy; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (char*,int) ;

__attribute__((used)) static struct subre *
FUNC_6(struct vars *VAR_2,
   int VAR_3,
   int VAR_4,
   struct state *VAR_5,
   struct state *VAR_6)
{
 struct subre *VAR_7 = VAR_2->treefree;





 if (FUNC_2(VAR_2->re))
 {
  FUNC_0(VAR_1);
  return ((void*)0);
 }

 if (VAR_7 != ((void*)0))
  VAR_2->treefree = VAR_7->left;
 else
 {
  VAR_7 = (struct subre *) FUNC_1(sizeof(struct subre));
  if (VAR_7 == ((void*)0))
  {
   FUNC_0(VAR_0);
   return ((void*)0);
  }
  VAR_7->chain = VAR_2->treechain;
  VAR_2->treechain = VAR_7;
 }

 FUNC_4(FUNC_5("=b|.*(", VAR_3) != ((void*)0));

 VAR_7->op = VAR_3;
 VAR_7->flags = VAR_4;
 VAR_7->id = 0;
 VAR_7->subno = 0;
 VAR_7->min = VAR_7->max = 1;
 VAR_7->left = ((void*)0);
 VAR_7->right = ((void*)0);
 VAR_7->begin = VAR_5;
 VAR_7->end = VAR_6;
 FUNC_3(VAR_7->cnfa);

 return VAR_7;
}
