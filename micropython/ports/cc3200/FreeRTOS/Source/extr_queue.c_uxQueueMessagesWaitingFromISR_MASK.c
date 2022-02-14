
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UBaseType_t ;
struct TYPE_2__ {int uxMessagesWaiting; } ;
typedef TYPE_1__ Queue_t ;
typedef scalar_t__ QueueHandle_t ;


 int FUNC_0 (scalar_t__ const) ;

UBaseType_t FUNC_1( const QueueHandle_t VAR_0 )
{
UBaseType_t VAR_1;

 FUNC_0( VAR_0 );

 VAR_1 = ( ( Queue_t * ) VAR_0 )->uxMessagesWaiting;

 return VAR_1;
}
