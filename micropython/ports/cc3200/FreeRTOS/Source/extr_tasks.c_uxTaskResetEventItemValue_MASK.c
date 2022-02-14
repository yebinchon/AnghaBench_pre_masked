
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ TickType_t ;
struct TYPE_2__ {scalar_t__ uxPriority; int xEventListItem; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__) ;
 TYPE_1__* VAR_1 ;

TickType_t FUNC_2( void )
{
TickType_t VAR_2;

 VAR_2 = FUNC_0( &( VAR_1->xEventListItem ) );



 FUNC_1( &( VAR_1->xEventListItem ), ( ( TickType_t ) VAR_0 - ( TickType_t ) VAR_1->uxPriority ) );

 return VAR_2;
}
