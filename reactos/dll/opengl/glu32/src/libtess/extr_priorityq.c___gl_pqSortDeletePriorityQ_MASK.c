
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* keys; struct TYPE_4__* order; int * heap; } ;
typedef TYPE_1__ PriorityQ ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3( PriorityQ *VAR_0 )
{
  FUNC_1(VAR_0 != ((void*)0));
  if (VAR_0->heap != ((void*)0)) FUNC_0( VAR_0->heap );
  if (VAR_0->order != ((void*)0)) FUNC_2( VAR_0->order );
  if (VAR_0->keys != ((void*)0)) FUNC_2( VAR_0->keys );
  FUNC_2( VAR_0 );
}
