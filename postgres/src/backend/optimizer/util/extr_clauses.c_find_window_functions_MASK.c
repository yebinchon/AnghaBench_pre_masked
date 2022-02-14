
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int maxWinRef; int ** windowFuncs; scalar_t__ numWindowFuncs; } ;
typedef TYPE_1__ WindowFuncLists ;
typedef int Node ;
typedef int List ;
typedef int Index ;


 int FUNC_0 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;

WindowFuncLists *
FUNC_3(Node *VAR_0, Index VAR_1)
{
 WindowFuncLists *VAR_2 = FUNC_1(sizeof(WindowFuncLists));

 VAR_2->numWindowFuncs = 0;
 VAR_2->maxWinRef = VAR_1;
 VAR_2->windowFuncs = (List **) FUNC_2((VAR_1 + 1) * sizeof(List *));
 (void) FUNC_0(VAR_0, VAR_2);
 return VAR_2;
}
