
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vars {int dummy; } ;
struct subre {struct subre* right; struct subre* left; int * begin; } ;
typedef int FILE ;
typedef int DISCARD ;


 int FUNC_0 (int) ;
 long FUNC_1 (struct vars*,struct subre*,int ,int *) ;

__attribute__((used)) static long
FUNC_2(struct vars *VAR_0,
  struct subre *VAR_1,
  FILE *VAR_2)
{
 FUNC_0(VAR_1 != ((void*)0) && VAR_1->begin != ((void*)0));

 if (VAR_1->left != ((void*)0))
  (DISCARD) FUNC_2(VAR_0, VAR_1->left, VAR_2);
 if (VAR_1->right != ((void*)0))
  (DISCARD) FUNC_2(VAR_0, VAR_1->right, VAR_2);

 return FUNC_1(VAR_0, VAR_1, 0, VAR_2);
}
