
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * nodes; int * uttable; } ;
typedef TYPE_1__ UTHashTable ;
typedef int UTHashNode ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(UTHashTable *VAR_0)
{
 UTHashNode *VAR_1 = VAR_0->uttable;
 UTHashNode *VAR_2;


 while (VAR_1 != ((void*)0)) {
  VAR_2 = VAR_1;
  FUNC_0(VAR_1, VAR_2);
 }


 if (VAR_0->nodes != ((void*)0)) FUNC_1(VAR_0->nodes);
 VAR_0->uttable = VAR_0->nodes = ((void*)0);
}
