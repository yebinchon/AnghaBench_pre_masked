
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* valnode; struct TYPE_10__* left; struct TYPE_10__* right; } ;
struct TYPE_8__ {scalar_t__ oper; int distance; } ;
struct TYPE_9__ {scalar_t__ type; TYPE_1__ qoperator; } ;
typedef TYPE_3__ NODE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static NODE *
FUNC_5(NODE *VAR_5, int *VAR_6, int *VAR_7)
{

 FUNC_2();


 *VAR_6 = *VAR_7 = 0;

 if (VAR_5->valnode->type == VAR_3)
  return VAR_5;
 else if (VAR_5->valnode->type == VAR_4)
 {
  FUNC_4(VAR_5);
  return ((void*)0);
 }

 FUNC_0(VAR_5->valnode->type == VAR_2);

 if (VAR_5->valnode->qoperator.oper == VAR_0)
 {

  VAR_5->right = FUNC_5(VAR_5->right, VAR_6, VAR_7);
  if (!VAR_5->right)
  {
   FUNC_3(VAR_5);
   return ((void*)0);
  }
 }
 else
 {
  NODE *VAR_8 = VAR_5;
  bool VAR_9;
  int VAR_10,
     VAR_11,
     VAR_12,
     VAR_13,
     VAR_14;


  VAR_5->left = FUNC_5(VAR_5->left, &VAR_11, &VAR_12);
  VAR_5->right = FUNC_5(VAR_5->right, &VAR_13, &VAR_14);


  VAR_9 = (VAR_5->valnode->qoperator.oper == VAR_1);
  VAR_10 = VAR_9 ? VAR_5->valnode->qoperator.distance : 0;

  if (VAR_5->left == ((void*)0) && VAR_5->right == ((void*)0))
  {
   if (VAR_9)
    *VAR_6 = *VAR_7 = VAR_11 + VAR_10 + VAR_13;
   else
    *VAR_6 = *VAR_7 = FUNC_1(VAR_11, VAR_13);
   FUNC_3(VAR_5);
   return ((void*)0);
  }
  else if (VAR_5->left == ((void*)0))
  {


   if (VAR_9)
   {

    *VAR_6 = VAR_11 + VAR_10 + VAR_13;
    *VAR_7 = VAR_14;
   }
   else
   {

    *VAR_6 = VAR_13;
    *VAR_7 = VAR_14;
   }
   VAR_8 = VAR_5->right;
   FUNC_4(VAR_5);
  }
  else if (VAR_5->right == ((void*)0))
  {


   if (VAR_9)
   {

    *VAR_6 = VAR_11;
    *VAR_7 = VAR_12 + VAR_10 + VAR_14;
   }
   else
   {

    *VAR_6 = VAR_11;
    *VAR_7 = VAR_12;
   }
   VAR_8 = VAR_5->left;
   FUNC_4(VAR_5);
  }
  else if (VAR_9)
  {

   VAR_5->valnode->qoperator.distance += VAR_12 + VAR_13;

   *VAR_6 = VAR_11;
   *VAR_7 = VAR_14;
  }
  else
  {

  }

  return VAR_8;
 }
 return VAR_5;
}
