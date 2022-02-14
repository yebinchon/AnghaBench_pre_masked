
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vars {int re; } ;
struct subre {int op; int flags; struct subre* left; int subno; int * right; } ;
typedef int chr ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct vars*,struct subre*,int *,int *) ;
 int FUNC_6 (struct vars*,struct subre*,int *,int *) ;
 int FUNC_7 (struct vars*,struct subre*,int *,int *) ;
 int FUNC_8 (struct vars*,struct subre*,int *,int *) ;
 int FUNC_9 (struct vars*,struct subre*,int *,int *) ;
 int FUNC_10 (struct vars*,struct subre*,int *,int *) ;
 int FUNC_11 (struct vars*,struct subre*,int *,int *) ;

__attribute__((used)) static int
FUNC_12(struct vars *VAR_7,
   struct subre *VAR_8,
   chr *VAR_9,
   chr *VAR_10)
{
 int VAR_11;

 FUNC_4(VAR_8 != ((void*)0));
 FUNC_2(("cdissect %ld-%ld %c\n", FUNC_1(VAR_9), FUNC_1(VAR_10), VAR_8->op));


 if (FUNC_0(VAR_7->re))
  return VAR_2;

 if (FUNC_3(VAR_7->re))
  return VAR_3;

 switch (VAR_8->op)
 {
  case '=':
   FUNC_4(VAR_8->left == ((void*)0) && VAR_8->right == ((void*)0));
   VAR_11 = VAR_5;
   break;
  case 'b':
   FUNC_4(VAR_8->left == ((void*)0) && VAR_8->right == ((void*)0));
   VAR_11 = FUNC_6(VAR_7, VAR_8, VAR_9, VAR_10);
   break;
  case '.':
   FUNC_4(VAR_8->left != ((void*)0) && VAR_8->right != ((void*)0));
   if (VAR_8->left->flags & VAR_6)
    VAR_11 = FUNC_9(VAR_7, VAR_8, VAR_9, VAR_10);
   else
    VAR_11 = FUNC_7(VAR_7, VAR_8, VAR_9, VAR_10);
   break;
  case '|':
   FUNC_4(VAR_8->left != ((void*)0));
   VAR_11 = FUNC_5(VAR_7, VAR_8, VAR_9, VAR_10);
   break;
  case '*':
   FUNC_4(VAR_8->left != ((void*)0));
   if (VAR_8->left->flags & VAR_6)
    VAR_11 = FUNC_10(VAR_7, VAR_8, VAR_9, VAR_10);
   else
    VAR_11 = FUNC_8(VAR_7, VAR_8, VAR_9, VAR_10);
   break;
  case '(':
   FUNC_4(VAR_8->left != ((void*)0) && VAR_8->right == ((void*)0));
   FUNC_4(VAR_8->subno > 0);
   VAR_11 = FUNC_12(VAR_7, VAR_8->left, VAR_9, VAR_10);
   if (VAR_11 == VAR_5)
    FUNC_11(VAR_7, VAR_8, VAR_9, VAR_10);
   break;
  default:
   VAR_11 = VAR_1;
   break;
 }






 FUNC_4(VAR_11 != VAR_4 || (VAR_8->flags & VAR_0));

 return VAR_11;
}
