
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int8_t ;
typedef scalar_t__ const UBaseType_t ;
struct TYPE_5__ {scalar_t__ uxLength; scalar_t__ uxItemSize; int * pxQueueSetContainer; int ucQueueType; int * pcHead; } ;
typedef TYPE_1__ Queue_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_2( const UBaseType_t VAR_1, const UBaseType_t VAR_2, uint8_t *VAR_3, const uint8_t VAR_4, Queue_t *VAR_5 )
{


 ( void ) VAR_4;

 if( VAR_2 == ( UBaseType_t ) 0 )
 {




  VAR_5->pcHead = ( int8_t * ) VAR_5;
 }
 else
 {

  VAR_5->pcHead = ( int8_t * ) VAR_3;
 }



 VAR_5->uxLength = VAR_1;
 VAR_5->uxItemSize = VAR_2;
 ( void ) FUNC_1( VAR_5, VAR_0 );
 FUNC_0( VAR_5 );
}
