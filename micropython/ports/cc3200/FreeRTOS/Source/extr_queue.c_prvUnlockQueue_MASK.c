
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int8_t ;
struct TYPE_4__ {scalar_t__ cTxLock; scalar_t__ cRxLock; int xTasksWaitingToSend; int xTasksWaitingToReceive; int * pxQueueSetContainer; } ;
typedef TYPE_1__ Queue_t ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (TYPE_1__* const,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7( Queue_t * const VAR_4 )
{






 FUNC_3();
 {
  int8_t VAR_5 = VAR_4->cTxLock;


  while( VAR_5 > VAR_1 )
  {
   {


    if( FUNC_0( &( VAR_4->xTasksWaitingToReceive ) ) == VAR_0 )
    {
     if( FUNC_6( &( VAR_4->xTasksWaitingToReceive ) ) != VAR_0 )
     {


      FUNC_5();
     }
     else
     {
      FUNC_1();
     }
    }
    else
    {
     break;
    }
   }


   --VAR_5;
  }

  VAR_4->cTxLock = VAR_3;
 }
 FUNC_4();


 FUNC_3();
 {
  int8_t VAR_6 = VAR_4->cRxLock;

  while( VAR_6 > VAR_1 )
  {
   if( FUNC_0( &( VAR_4->xTasksWaitingToSend ) ) == VAR_0 )
   {
    if( FUNC_6( &( VAR_4->xTasksWaitingToSend ) ) != VAR_0 )
    {
     FUNC_5();
    }
    else
    {
     FUNC_1();
    }

    --VAR_6;
   }
   else
   {
    break;
   }
  }

  VAR_4->cRxLock = VAR_3;
 }
 FUNC_4();
}
