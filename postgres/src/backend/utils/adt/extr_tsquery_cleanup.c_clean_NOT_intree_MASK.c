
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {struct TYPE_10__* left; struct TYPE_10__* right; TYPE_2__* valnode; } ;
struct TYPE_8__ {scalar_t__ oper; } ;
struct TYPE_9__ {scalar_t__ type; TYPE_1__ qoperator; } ;
typedef TYPE_3__ NODE ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static NODE *
FUNC_4(NODE *VAR_5)
{

 FUNC_1();

 if (VAR_5->valnode->type == VAR_4)
  return VAR_5;

 if (VAR_5->valnode->qoperator.oper == VAR_1)
 {
  FUNC_2(VAR_5);
  return ((void*)0);
 }


 if (VAR_5->valnode->qoperator.oper == VAR_2)
 {
  if ((VAR_5->left = FUNC_4(VAR_5->left)) == ((void*)0) ||
   (VAR_5->right = FUNC_4(VAR_5->right)) == ((void*)0))
  {
   FUNC_2(VAR_5);
   return ((void*)0);
  }
 }
 else
 {
  NODE *VAR_6 = VAR_5;

  FUNC_0(VAR_5->valnode->qoperator.oper == VAR_0 ||
      VAR_5->valnode->qoperator.oper == VAR_3);

  VAR_5->left = FUNC_4(VAR_5->left);
  VAR_5->right = FUNC_4(VAR_5->right);
  if (VAR_5->left == ((void*)0) && VAR_5->right == ((void*)0))
  {
   FUNC_3(VAR_5);
   VAR_6 = ((void*)0);
  }
  else if (VAR_5->left == ((void*)0))
  {
   VAR_6 = VAR_5->right;
   FUNC_3(VAR_5);
  }
  else if (VAR_5->right == ((void*)0))
  {
   VAR_6 = VAR_5->left;
   FUNC_3(VAR_5);
  }
  return VAR_6;
 }
 return VAR_5;
}
