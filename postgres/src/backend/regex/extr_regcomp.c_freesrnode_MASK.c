
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vars {struct subre* treefree; int * treechain; } ;
struct subre {struct subre* left; scalar_t__ flags; int cnfa; } ;


 int FUNC_0 (struct subre*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct vars *VAR_0,
     struct subre *VAR_1)
{
 if (VAR_1 == ((void*)0))
  return;

 if (!FUNC_1(VAR_1->cnfa))
  FUNC_2(&VAR_1->cnfa);
 VAR_1->flags = 0;

 if (VAR_0 != ((void*)0) && VAR_0->treechain != ((void*)0))
 {

  VAR_1->left = VAR_0->treefree;
  VAR_0->treefree = VAR_1;
 }
 else
  FUNC_0(VAR_1);
}
