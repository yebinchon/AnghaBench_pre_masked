
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ int32 ;
struct TYPE_9__ {struct TYPE_9__* left; TYPE_3__* valnode; struct TYPE_9__* right; } ;
struct TYPE_6__ {scalar_t__ oper; } ;
struct TYPE_7__ {scalar_t__ length; } ;
struct TYPE_8__ {scalar_t__ type; TYPE_1__ qoperator; TYPE_2__ qoperand; } ;
typedef TYPE_4__ NODE ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int32
FUNC_1(NODE *VAR_3)
{
 int32 VAR_4 = 0;

 if (VAR_3->valnode->type == VAR_2)
 {
  VAR_4 = VAR_3->valnode->qoperand.length + 1;
 }
 else
 {
  FUNC_0(VAR_3->valnode->type == VAR_1);

  VAR_4 = FUNC_1(VAR_3->right);
  if (VAR_3->valnode->qoperator.oper != VAR_0)
   VAR_4 += FUNC_1(VAR_3->left);
 }

 return VAR_4;
}
