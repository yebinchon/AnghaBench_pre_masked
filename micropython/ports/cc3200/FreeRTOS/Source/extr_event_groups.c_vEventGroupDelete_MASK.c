
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ UBaseType_t ;
struct TYPE_6__ {int * pxNext; } ;
struct TYPE_7__ {TYPE_1__ xListEnd; } ;
struct TYPE_8__ {scalar_t__ ucStaticallyAllocated; TYPE_2__ xTasksWaitingForBits; } ;
typedef TYPE_2__ List_t ;
typedef int ListItem_t ;
typedef TYPE_3__ EventGroup_t ;
typedef scalar_t__ EventGroupHandle_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_2__ const*) ;
 int FUNC_2 () ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 () ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 () ;

void FUNC_8( EventGroupHandle_t VAR_2 )
{
EventGroup_t *VAR_3 = ( EventGroup_t * ) VAR_2;
const List_t *VAR_4 = &( VAR_3->xTasksWaitingForBits );

 FUNC_5();
 {
  FUNC_3( VAR_2 );

  while( FUNC_1( VAR_4 ) > ( UBaseType_t ) 0 )
  {


   FUNC_0( VAR_4->xListEnd.pxNext != ( ListItem_t * ) &( VAR_4->xListEnd ) );
   ( void ) FUNC_6( VAR_4->xListEnd.pxNext, VAR_0 );
  }
 }
 ( void ) FUNC_7();
}
