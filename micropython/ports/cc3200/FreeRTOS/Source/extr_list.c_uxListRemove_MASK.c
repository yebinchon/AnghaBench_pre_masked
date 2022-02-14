
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UBaseType_t ;
struct TYPE_7__ {int * pvContainer; struct TYPE_7__* pxPrevious; TYPE_1__* pxNext; } ;
struct TYPE_6__ {int uxNumberOfItems; TYPE_3__* pxIndex; } ;
struct TYPE_5__ {TYPE_3__* pxPrevious; } ;
typedef TYPE_2__ List_t ;
typedef TYPE_3__ ListItem_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;

UBaseType_t FUNC_2( ListItem_t * const VAR_0 )
{


List_t * const VAR_1 = ( List_t * ) VAR_0->pvContainer;

 VAR_0->pxNext->pxPrevious = VAR_0->pxPrevious;
 VAR_0->pxPrevious->pxNext = VAR_0->pxNext;


 FUNC_0();


 if( VAR_1->pxIndex == VAR_0 )
 {
  VAR_1->pxIndex = VAR_0->pxPrevious;
 }
 else
 {
  FUNC_1();
 }

 VAR_0->pvContainer = ((void*)0);
 ( VAR_1->uxNumberOfItems )--;

 return VAR_1->uxNumberOfItems;
}
