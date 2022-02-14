
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * reader; int * pei; } ;
typedef TYPE_1__ GatherMergeState ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(GatherMergeState *VAR_0)
{
 if (VAR_0->pei != ((void*)0))
  FUNC_0(VAR_0->pei);


 if (VAR_0->reader)
  FUNC_1(VAR_0->reader);
 VAR_0->reader = ((void*)0);
}
