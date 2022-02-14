
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* left; struct TYPE_8__* right; TYPE_2__* valnode; } ;
struct TYPE_6__ {scalar_t__ oper; int left; } ;
struct TYPE_7__ {scalar_t__ type; TYPE_1__ qoperator; } ;
typedef TYPE_2__ QueryItem ;
typedef TYPE_3__ NODE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static NODE *
FUNC_2(QueryItem *VAR_2)
{
 NODE *VAR_3 = (NODE *) FUNC_1(sizeof(NODE));


 FUNC_0();

 VAR_3->valnode = VAR_2;
 VAR_3->right = VAR_3->left = ((void*)0);
 if (VAR_2->type == VAR_1)
 {
  VAR_3->right = FUNC_2(VAR_2 + 1);
  if (VAR_2->qoperator.oper != VAR_0)
   VAR_3->left = FUNC_2(VAR_2 + VAR_2->qoperator.left);
 }
 return VAR_3;
}
