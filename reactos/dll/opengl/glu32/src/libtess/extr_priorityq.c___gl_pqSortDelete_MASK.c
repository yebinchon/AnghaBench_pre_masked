
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max; int size; int *** order; int ** keys; int heap; } ;
typedef TYPE_1__ PriorityQ ;
typedef int PQhandle ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;

void FUNC_2( PriorityQ *VAR_0, PQhandle VAR_1 )
{
  if( VAR_1 >= 0 ) {
    FUNC_0( VAR_0->heap, VAR_1 );
    return;
  }
  VAR_1 = -(VAR_1+1);
  FUNC_1( VAR_1 < VAR_0->max && VAR_0->keys[VAR_1] != ((void*)0) );

  VAR_0->keys[VAR_1] = ((void*)0);
  while( VAR_0->size > 0 && *(VAR_0->order[VAR_0->size-1]) == ((void*)0) ) {
    -- VAR_0->size;
  }
}
