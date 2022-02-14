
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ TickType_t ;
struct TYPE_10__ {scalar_t__ xItemValue; void* pvContainer; struct TYPE_10__* pxNext; struct TYPE_10__* pxPrevious; } ;
struct TYPE_8__ {TYPE_3__* pxPrevious; } ;
struct TYPE_9__ {int uxNumberOfItems; TYPE_1__ xListEnd; } ;
typedef TYPE_2__ List_t ;
typedef TYPE_3__ ListItem_t ;


 int FUNC_0 (TYPE_2__* const) ;
 int FUNC_1 (TYPE_3__* const) ;
 scalar_t__ const VAR_0 ;

void FUNC_2( List_t * const VAR_1, ListItem_t * const VAR_2 )
{
ListItem_t *VAR_3;
const TickType_t VAR_4 = VAR_2->xItemValue;




 FUNC_0( VAR_1 );
 FUNC_1( VAR_2 );
 if( VAR_4 == VAR_0 )
 {
  VAR_3 = VAR_1->xListEnd.pxPrevious;
 }
 else
 {
  for( VAR_3 = ( ListItem_t * ) &( VAR_1->xListEnd ); VAR_3->pxNext->xItemValue <= VAR_4; VAR_3 = VAR_3->pxNext )
  {


  }
 }

 VAR_2->pxNext = VAR_3->pxNext;
 VAR_2->pxNext->pxPrevious = VAR_2;
 VAR_2->pxPrevious = VAR_3;
 VAR_3->pxNext = VAR_2;



 VAR_2->pvContainer = ( void * ) VAR_1;

 ( VAR_1->uxNumberOfItems )++;
}
