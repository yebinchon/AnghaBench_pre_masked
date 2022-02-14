
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vars {int dummy; } ;
struct subre {char op; TYPE_2__* right; TYPE_2__* left; int id; } ;
struct dfa {int dummy; } ;
typedef int chr ;
struct TYPE_5__ {scalar_t__ nstates; } ;
struct TYPE_6__ {int flags; TYPE_1__ cnfa; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct vars*,TYPE_2__*,int *,int *) ;
 struct dfa* FUNC_5 (struct vars*,TYPE_2__*) ;
 int * FUNC_6 (struct vars*,struct dfa*,int *,int *,int*) ;
 int * FUNC_7 (struct vars*,struct dfa*,int *,int *,int *,int **,int*) ;
 int FUNC_8 (struct vars*,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_9(struct vars *VAR_4,
      struct subre *VAR_5,
      chr *VAR_6,
      chr *VAR_7)
{
 struct dfa *VAR_8;
 struct dfa *VAR_9;
 chr *VAR_10;
 int VAR_11;

 FUNC_3(VAR_5->op == '.');
 FUNC_3(VAR_5->left != ((void*)0) && VAR_5->left->cnfa.nstates > 0);
 FUNC_3(VAR_5->right != ((void*)0) && VAR_5->right->cnfa.nstates > 0);
 FUNC_3(VAR_5->left->flags & VAR_3);

 VAR_8 = FUNC_5(VAR_4, VAR_5->left);
 FUNC_2();
 VAR_9 = FUNC_5(VAR_4, VAR_5->right);
 FUNC_2();
 FUNC_1(("crevcon %d\n", VAR_5->id));


 VAR_10 = FUNC_7(VAR_4, VAR_8, VAR_6, VAR_6, VAR_7, (chr **) ((void*)0), (int *) ((void*)0));
 FUNC_2();
 if (VAR_10 == ((void*)0))
  return VAR_1;
 FUNC_1(("tentative midpoint %ld\n", FUNC_0(VAR_10)));


 for (;;)
 {

  if (FUNC_6(VAR_4, VAR_9, VAR_10, VAR_7, (int *) ((void*)0)) == VAR_7)
  {
   VAR_11 = FUNC_4(VAR_4, VAR_5->left, VAR_6, VAR_10);
   if (VAR_11 == VAR_2)
   {
    VAR_11 = FUNC_4(VAR_4, VAR_5->right, VAR_10, VAR_7);
    if (VAR_11 == VAR_2)
    {

     FUNC_1(("successful\n"));
     return VAR_2;
    }
   }
   if (VAR_11 != VAR_1)
    return VAR_11;
  }
  FUNC_2();


  if (VAR_10 == VAR_7)
  {

   FUNC_1(("%d no midpoint\n", VAR_5->id));
   return VAR_1;
  }
  VAR_10 = FUNC_7(VAR_4, VAR_8, VAR_6, VAR_10 + 1, VAR_7, (chr **) ((void*)0), (int *) ((void*)0));
  FUNC_2();
  if (VAR_10 == ((void*)0))
  {

   FUNC_1(("%d failed midpoint\n", VAR_5->id));
   return VAR_1;
  }
  FUNC_1(("%d: new midpoint %ld\n", VAR_5->id, FUNC_0(VAR_10)));
  FUNC_8(VAR_4, VAR_5->left);
  FUNC_8(VAR_4, VAR_5->right);
 }


 return VAR_0;
}
