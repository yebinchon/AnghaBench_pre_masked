
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vars {int dummy; } ;
struct subre {char op; struct subre* right; TYPE_2__* left; int id; } ;
struct dfa {int dummy; } ;
typedef int chr ;
struct TYPE_4__ {scalar_t__ nstates; } ;
struct TYPE_5__ {TYPE_1__ cnfa; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct vars*,TYPE_2__*,int *,int *) ;
 struct dfa* FUNC_4 (struct vars*,TYPE_2__*) ;
 int * FUNC_5 (struct vars*,struct dfa*,int *,int *,int*) ;

__attribute__((used)) static int
FUNC_6(struct vars *VAR_1,
   struct subre *VAR_2,
   chr *VAR_3,
   chr *VAR_4)
{
 struct dfa *VAR_5;
 int VAR_6;


 while (VAR_2 != ((void*)0))
 {
  FUNC_2(VAR_2->op == '|');
  FUNC_2(VAR_2->left != ((void*)0) && VAR_2->left->cnfa.nstates > 0);

  FUNC_0(("calt n%d\n", VAR_2->id));

  VAR_5 = FUNC_4(VAR_1, VAR_2->left);
  FUNC_1();
  if (FUNC_5(VAR_1, VAR_5, VAR_3, VAR_4, (int *) ((void*)0)) == VAR_4)
  {
   FUNC_0(("calt matched\n"));
   VAR_6 = FUNC_3(VAR_1, VAR_2->left, VAR_3, VAR_4);
   if (VAR_6 != VAR_0)
    return VAR_6;
  }
  FUNC_1();

  VAR_2 = VAR_2->right;
 }

 return VAR_0;
}
