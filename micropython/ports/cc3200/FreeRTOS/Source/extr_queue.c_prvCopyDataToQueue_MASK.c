
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UBaseType_t ;
struct TYPE_4__ {scalar_t__ pcReadFrom; } ;
struct TYPE_5__ {scalar_t__ uxMessagesWaiting; scalar_t__ uxItemSize; scalar_t__ uxQueueType; scalar_t__ pcWriteTo; scalar_t__ pcTail; scalar_t__ pcHead; TYPE_1__ u; int * pxMutexHolder; } ;
typedef TYPE_2__ Queue_t ;
typedef scalar_t__ BaseType_t ;


 int FUNC_0 (void*,void const*,size_t) ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ const VAR_3 ;
 scalar_t__ FUNC_2 (void*) ;

__attribute__((used)) static BaseType_t FUNC_3( Queue_t * const VAR_4, const void *VAR_5, const BaseType_t VAR_6 )
{
BaseType_t VAR_7 = VAR_0;
UBaseType_t VAR_8;



 VAR_8 = VAR_4->uxMessagesWaiting;

 if( VAR_4->uxItemSize == ( UBaseType_t ) 0 )
 {
 }
 else if( VAR_6 == VAR_3 )
 {
  ( void ) FUNC_0( ( void * ) VAR_4->pcWriteTo, VAR_5, ( size_t ) VAR_4->uxItemSize );
  VAR_4->pcWriteTo += VAR_4->uxItemSize;
  if( VAR_4->pcWriteTo >= VAR_4->pcTail )
  {
   VAR_4->pcWriteTo = VAR_4->pcHead;
  }
  else
  {
   FUNC_1();
  }
 }
 else
 {
  ( void ) FUNC_0( ( void * ) VAR_4->u.pcReadFrom, VAR_5, ( size_t ) VAR_4->uxItemSize );
  VAR_4->u.pcReadFrom -= VAR_4->uxItemSize;
  if( VAR_4->u.pcReadFrom < VAR_4->pcHead )
  {
   VAR_4->u.pcReadFrom = ( VAR_4->pcTail - VAR_4->uxItemSize );
  }
  else
  {
   FUNC_1();
  }

  if( VAR_6 == VAR_1 )
  {
   if( VAR_8 > ( UBaseType_t ) 0 )
   {




    --VAR_8;
   }
   else
   {
    FUNC_1();
   }
  }
  else
  {
   FUNC_1();
  }
 }

 VAR_4->uxMessagesWaiting = VAR_8 + 1;

 return VAR_7;
}
