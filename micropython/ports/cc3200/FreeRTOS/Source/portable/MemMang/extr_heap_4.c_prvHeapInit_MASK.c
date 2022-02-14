
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int * pxNextFreeBlock; scalar_t__ xBlockSize; } ;
struct TYPE_5__ {size_t xBlockSize; void* pxNextFreeBlock; } ;
struct TYPE_4__ {size_t xBlockSize; TYPE_3__* pxNextFreeBlock; } ;
typedef TYPE_1__ BlockLink_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 TYPE_3__* VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ VAR_8 ;
 size_t VAR_9 ;
 TYPE_2__ VAR_10 ;

__attribute__((used)) static void FUNC_0( void )
{
BlockLink_t *VAR_11;
uint8_t *VAR_12;
size_t VAR_13;
size_t VAR_14 = VAR_0;


 VAR_13 = ( size_t ) VAR_5;

 if( ( VAR_13 & VAR_3 ) != 0 )
 {
  VAR_13 += ( VAR_2 - 1 );
  VAR_13 &= ~( ( size_t ) VAR_3 );
  VAR_14 -= VAR_13 - ( size_t ) VAR_5;
 }

 VAR_12 = ( uint8_t * ) VAR_13;



 VAR_10.pxNextFreeBlock = ( void * ) VAR_12;
 VAR_10.xBlockSize = ( size_t ) 0;



 VAR_13 = ( ( size_t ) VAR_12 ) + VAR_14;
 VAR_13 -= VAR_8;
 VAR_13 &= ~( ( size_t ) VAR_3 );
 VAR_4 = ( void * ) VAR_13;
 VAR_4->xBlockSize = 0;
 VAR_4->pxNextFreeBlock = ((void*)0);



 VAR_11 = ( void * ) VAR_12;
 VAR_11->xBlockSize = VAR_13 - ( size_t ) VAR_11;
 VAR_11->pxNextFreeBlock = VAR_4;


 VAR_9 = VAR_11->xBlockSize;
 VAR_7 = VAR_11->xBlockSize;


 VAR_6 = ( ( size_t ) 1 ) << ( ( sizeof( size_t ) * VAR_1 ) - 1 );
}
