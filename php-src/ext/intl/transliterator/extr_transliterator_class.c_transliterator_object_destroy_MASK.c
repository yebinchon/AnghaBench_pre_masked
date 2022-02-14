
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * utrans; } ;
typedef TYPE_1__ Transliterator_object ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3( Transliterator_object* VAR_0 )
{
 if( !VAR_0 )
  return;

 if( VAR_0->utrans )
 {
  FUNC_2( VAR_0->utrans );
  VAR_0->utrans = ((void*)0);
 }

 FUNC_1( FUNC_0( VAR_0 ) );
}
