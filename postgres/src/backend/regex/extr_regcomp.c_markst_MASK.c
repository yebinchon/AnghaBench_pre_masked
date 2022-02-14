
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subre {struct subre* right; struct subre* left; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct subre *VAR_1)
{
 FUNC_0(VAR_1 != ((void*)0));

 VAR_1->flags |= VAR_0;
 if (VAR_1->left != ((void*)0))
  FUNC_1(VAR_1->left);
 if (VAR_1->right != ((void*)0))
  FUNC_1(VAR_1->right);
}
