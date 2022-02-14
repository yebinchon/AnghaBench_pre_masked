
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ TickType_t ;
struct TYPE_2__ {int xNewLib_reent; } ;
typedef int StaticTask_t ;
typedef int StackType_t ;
typedef scalar_t__ BaseType_t ;


 int * VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 () ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__* VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int **,int **,int *) ;
 int * VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_5 () ;
 int VAR_14 ;
 scalar_t__ FUNC_6 (int ,char*,int ,void*,int,int **) ;
 int * FUNC_7 (int ,char*,int ,void*,int,int *,int *) ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_8 () ;

void FUNC_9( void )
{
BaseType_t VAR_16;
 {

  VAR_16 = FUNC_6( VAR_9,
        "IDLE", VAR_1,
        ( void * ) ((void*)0),
        ( VAR_11 | VAR_8 ),
        &VAR_12 );
 }
 if( VAR_16 == VAR_5 )
 {





  FUNC_3();
  VAR_13 = VAR_7;
  VAR_14 = VAR_6;
  VAR_15 = ( TickType_t ) 0U;




  FUNC_2();



  if( FUNC_5() != VAR_4 )
  {


  }
  else
  {

  }
 }
 else
 {



  FUNC_0( VAR_16 != VAR_2 );
 }



 ( void ) VAR_12;
}
