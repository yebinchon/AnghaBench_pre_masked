
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ UBaseType_t ;
struct TYPE_2__ {scalar_t__ uxMessagesWaiting; } ;
typedef TYPE_1__ Queue_t ;
typedef scalar_t__ QueueHandle_t ;
typedef int BaseType_t ;


 int FUNC_0 (scalar_t__ const) ;
 int VAR_0 ;
 int VAR_1 ;

BaseType_t FUNC_1( const QueueHandle_t VAR_2 )
{
BaseType_t VAR_3;

 FUNC_0( VAR_2 );
 if( ( ( Queue_t * ) VAR_2 )->uxMessagesWaiting == ( UBaseType_t ) 0 )
 {
  VAR_3 = VAR_1;
 }
 else
 {
  VAR_3 = VAR_0;
 }

 return VAR_3;
}
