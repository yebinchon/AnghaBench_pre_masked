
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vars {int dummy; } ;
struct subre {struct subre* right; struct subre* left; } ;


 int FUNC_0 (struct vars*,struct subre*) ;

__attribute__((used)) static void
FUNC_1(struct vars *VAR_0,
    struct subre *VAR_1)
{
 if (VAR_1 == ((void*)0))
  return;

 if (VAR_1->left != ((void*)0))
  FUNC_1(VAR_0, VAR_1->left);
 if (VAR_1->right != ((void*)0))
  FUNC_1(VAR_0, VAR_1->right);

 FUNC_0(VAR_0, VAR_1);
}
