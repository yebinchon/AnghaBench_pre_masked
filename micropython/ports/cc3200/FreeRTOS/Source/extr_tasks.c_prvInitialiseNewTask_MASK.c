
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int const uint32_t ;
typedef unsigned long portPOINTER_SIZE_TYPE ;
typedef unsigned int UBaseType_t ;
typedef scalar_t__ TickType_t ;
typedef scalar_t__ TaskHandle_t ;
typedef int TaskFunction_t ;
struct TYPE_4__ {char* pcTaskName; unsigned int uxPriority; unsigned int uxBasePriority; unsigned int uxCriticalNesting; unsigned long ulRunTimeCounter; void* pxTopOfStack; void* ucDelayAborted; int xNewLib_reent; int ucNotifyState; scalar_t__ ulNotifiedValue; int ** pvThreadLocalStoragePointers; int * pxStack; int xMPUSettings; int * pxTaskTag; int xEventListItem; int xStateListItem; scalar_t__ uxMutexesHeld; int * pxEndOfStack; } ;
typedef TYPE_1__ TCB_t ;
typedef int StackType_t ;
typedef int MemoryRegion_t ;
typedef void* BaseType_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *,int,size_t) ;
 int FUNC_5 () ;
 void* VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 void* FUNC_6 (int *,int ,void* const,...) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int const* const,int *,int const) ;

__attribute__((used)) static void FUNC_9( TaskFunction_t VAR_9,
         const char * const VAR_10,
         const uint32_t VAR_11,
         void * const VAR_12,
         UBaseType_t VAR_13,
         TaskHandle_t * const VAR_14,
         TCB_t *VAR_15,
         const MemoryRegion_t * const VAR_16 )
{
StackType_t *VAR_17;
UBaseType_t VAR_18;
 {
  VAR_17 = VAR_15->pxStack;


  FUNC_1( ( ( ( portPOINTER_SIZE_TYPE ) VAR_15->pxStack & ( portPOINTER_SIZE_TYPE ) VAR_5 ) == 0UL ) );



  VAR_15->pxEndOfStack = VAR_15->pxStack + ( VAR_11 - ( uint32_t ) 1 );
 }



 for( VAR_18 = ( UBaseType_t ) 0; VAR_18 < ( UBaseType_t ) VAR_1; VAR_18++ )
 {
  VAR_15->pcTaskName[ VAR_18 ] = VAR_10[ VAR_18 ];




  if( VAR_10[ VAR_18 ] == 0x00 )
  {
   break;
  }
  else
  {
   FUNC_5();
  }
 }



 VAR_15->pcTaskName[ VAR_1 - 1 ] = '\0';



 if( VAR_13 >= ( UBaseType_t ) VAR_0 )
 {
  VAR_13 = ( UBaseType_t ) VAR_0 - ( UBaseType_t ) 1U;
 }
 else
 {
  FUNC_5();
 }

 VAR_15->uxPriority = VAR_13;







 FUNC_7( &( VAR_15->xStateListItem ) );
 FUNC_7( &( VAR_15->xEventListItem ) );



 FUNC_2( &( VAR_15->xStateListItem ), VAR_15 );


 FUNC_3( &( VAR_15->xEventListItem ), ( TickType_t ) VAR_0 - ( TickType_t ) VAR_13 );
 FUNC_2( &( VAR_15->xEventListItem ), VAR_15 );
 {

  ( void ) VAR_16;
 }
 {
  VAR_15->pxTopOfStack = FUNC_6( VAR_17, VAR_9, VAR_12 );
 }


 if( ( void * ) VAR_14 != ((void*)0) )
 {


  *VAR_14 = ( TaskHandle_t ) VAR_15;
 }
 else
 {
  FUNC_5();
 }
}
