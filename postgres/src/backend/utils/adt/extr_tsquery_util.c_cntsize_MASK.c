
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int nchild; TYPE_2__* valnode; struct TYPE_7__** child; } ;
struct TYPE_5__ {scalar_t__ length; } ;
struct TYPE_6__ {scalar_t__ type; TYPE_1__ qoperand; } ;
typedef TYPE_3__ QTNode ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static void
FUNC_1(QTNode *VAR_1, int *VAR_2, int *VAR_3)
{

 FUNC_0();

 *VAR_3 += 1;
 if (VAR_1->valnode->type == VAR_0)
 {
  int VAR_4;

  for (VAR_4 = 0; VAR_4 < VAR_1->nchild; VAR_4++)
   FUNC_1(VAR_1->child[VAR_4], VAR_2, VAR_3);
 }
 else
 {
  *VAR_2 += VAR_1->valnode->qoperand.length + 1;
 }
}
