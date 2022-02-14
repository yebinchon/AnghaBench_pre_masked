
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ UBaseType_t ;
typedef scalar_t__ TickType_t ;
struct TYPE_2__ {scalar_t__ ucDelayAborted; int xStateListItem; int uxPriority; } ;
typedef scalar_t__ BaseType_t ;


 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 () ;
 scalar_t__ const VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,int ) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_5 ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,int *) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static void FUNC_6( TickType_t VAR_9, const BaseType_t VAR_10 )
{
TickType_t VAR_11;
const TickType_t VAR_12 = VAR_8;
 if( FUNC_3( &( VAR_2->xStateListItem ) ) == ( UBaseType_t ) 0 )
 {


  FUNC_2( VAR_2->uxPriority, VAR_5 );
 }
 else
 {
  FUNC_1();
 }
 {



  VAR_11 = VAR_12 + VAR_9;


  FUNC_0( &( VAR_2->xStateListItem ), VAR_11 );

  if( VAR_11 < VAR_12 )
  {

   FUNC_4( VAR_4, &( VAR_2->xStateListItem ) );
  }
  else
  {

   FUNC_4( VAR_3, &( VAR_2->xStateListItem ) );




   if( VAR_11 < VAR_6 )
   {
    VAR_6 = VAR_11;
   }
   else
   {
    FUNC_1();
   }
  }


  ( void ) VAR_10;
 }

}
