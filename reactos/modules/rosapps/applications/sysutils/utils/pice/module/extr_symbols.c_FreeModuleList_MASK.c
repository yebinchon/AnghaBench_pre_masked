
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__* PDEBUG_MODULE ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 () ;

VOID FUNC_3( PDEBUG_MODULE VAR_0 )
{
 PDEBUG_MODULE VAR_1 = VAR_0;

 FUNC_0();

 while( VAR_1 ){
  VAR_1 = VAR_0->next;
  FUNC_1( VAR_0 );
 }
 FUNC_2();
}
