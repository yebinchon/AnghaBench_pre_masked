
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {long size; int initialized; } ;
typedef TYPE_1__ PriorityQ ;


 int FUNC_0 (TYPE_1__*,long) ;
 int VAR_0 ;

void FUNC_1( PriorityQ *VAR_1 )
{
  long VAR_2;



  for( VAR_2 = VAR_1->size; VAR_2 >= 1; --VAR_2 ) {
    FUNC_0( VAR_1, VAR_2 );
  }
  VAR_1->initialized = VAR_0;
}
