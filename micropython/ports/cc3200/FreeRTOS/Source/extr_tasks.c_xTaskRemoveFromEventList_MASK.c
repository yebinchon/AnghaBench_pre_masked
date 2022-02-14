
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UBaseType_t ;
struct TYPE_6__ {scalar_t__ uxPriority; } ;
struct TYPE_5__ {scalar_t__ uxPriority; int xEventListItem; int xStateListItem; } ;
typedef TYPE_1__ TCB_t ;
typedef int List_t ;
typedef void* BaseType_t ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int const* const) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 () ;
 TYPE_2__* VAR_2 ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int *,int *) ;
 int VAR_4 ;
 void* VAR_5 ;

BaseType_t FUNC_6( const List_t * const VAR_6 )
{
TCB_t *VAR_7;
BaseType_t VAR_8;
 VAR_7 = ( TCB_t * ) FUNC_1( VAR_6 );
 FUNC_0( VAR_7 );
 ( void ) FUNC_4( &( VAR_7->xEventListItem ) );

 if( VAR_3 == ( UBaseType_t ) VAR_0 )
 {
  ( void ) FUNC_4( &( VAR_7->xStateListItem ) );
  FUNC_2( VAR_7 );
 }
 else
 {


  FUNC_5( &( VAR_4 ), &( VAR_7->xEventListItem ) );
 }

 if( VAR_7->uxPriority > VAR_2->uxPriority )
 {



  VAR_8 = VAR_1;



  VAR_5 = VAR_1;
 }
 else
 {
  VAR_8 = VAR_0;
 }
 return VAR_8;
}
