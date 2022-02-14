
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * ucoll; } ;
typedef TYPE_1__ Collator_object ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

void FUNC_3( Collator_object* VAR_0 )
{
 if( !VAR_0 )
  return;

 if( VAR_0->ucoll )
 {
  FUNC_2( VAR_0->ucoll );
  VAR_0->ucoll = ((void*)0);
 }

 FUNC_1( FUNC_0( VAR_0 ) );
}
