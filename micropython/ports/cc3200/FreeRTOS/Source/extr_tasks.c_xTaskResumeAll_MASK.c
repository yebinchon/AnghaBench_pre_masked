
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UBaseType_t ;
struct TYPE_5__ {scalar_t__ uxPriority; } ;
struct TYPE_4__ {scalar_t__ uxPriority; int xStateListItem; int xEventListItem; } ;
typedef TYPE_1__ TCB_t ;
typedef void* BaseType_t ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 () ;
 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 () ;
 TYPE_2__* VAR_2 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ VAR_3 ;
 int FUNC_9 (int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_10 () ;
 scalar_t__ VAR_7 ;

BaseType_t FUNC_11( void )
{
TCB_t *VAR_8 = ((void*)0);
BaseType_t VAR_9 = VAR_0;



 FUNC_0( VAR_5 );






 FUNC_6();
 {
  --VAR_5;

  if( VAR_5 == ( UBaseType_t ) VAR_0 )
  {
   if( VAR_3 > ( UBaseType_t ) 0U )
   {


    while( FUNC_2( &VAR_6 ) == VAR_0 )
    {
     VAR_8 = ( TCB_t * ) FUNC_1( ( &VAR_6 ) );
     ( void ) FUNC_9( &( VAR_8->xEventListItem ) );
     ( void ) FUNC_9( &( VAR_8->xStateListItem ) );
     FUNC_4( VAR_8 );



     if( VAR_8->uxPriority >= VAR_2->uxPriority )
     {
      VAR_7 = VAR_1;
     }
     else
     {
      FUNC_3();
     }
    }

    if( VAR_8 != ((void*)0) )
    {






     FUNC_5();
    }





    {
     UBaseType_t VAR_10 = VAR_4;

     if( VAR_10 > ( UBaseType_t ) 0U )
     {
      do
      {
       if( FUNC_10() != VAR_0 )
       {
        VAR_7 = VAR_1;
       }
       else
       {
        FUNC_3();
       }
       --VAR_10;
      } while( VAR_10 > ( UBaseType_t ) 0U );

      VAR_4 = 0;
     }
     else
     {
      FUNC_3();
     }
    }

    if( VAR_7 != VAR_0 )
    {





     FUNC_8();
    }
    else
    {
     FUNC_3();
    }
   }
  }
  else
  {
   FUNC_3();
  }
 }
 FUNC_7();

 return VAR_9;
}
