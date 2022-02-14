
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int xBlockSize; struct TYPE_5__* pxNextFreeBlock; } ;
typedef TYPE_1__ BlockLink_t ;


 int FUNC_0 () ;
 TYPE_1__* VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void FUNC_1( BlockLink_t *VAR_2 )
{
BlockLink_t *VAR_3;
uint8_t *VAR_4;



 for( VAR_3 = &VAR_1; VAR_3->pxNextFreeBlock < VAR_2; VAR_3 = VAR_3->pxNextFreeBlock )
 {

 }



 VAR_4 = ( uint8_t * ) VAR_3;
 if( ( VAR_4 + VAR_3->xBlockSize ) == ( uint8_t * ) VAR_2 )
 {
  VAR_3->xBlockSize += VAR_2->xBlockSize;
  VAR_2 = VAR_3;
 }
 else
 {
  FUNC_0();
 }



 VAR_4 = ( uint8_t * ) VAR_2;
 if( ( VAR_4 + VAR_2->xBlockSize ) == ( uint8_t * ) VAR_3->pxNextFreeBlock )
 {
  if( VAR_3->pxNextFreeBlock != VAR_0 )
  {

   VAR_2->xBlockSize += VAR_3->pxNextFreeBlock->xBlockSize;
   VAR_2->pxNextFreeBlock = VAR_3->pxNextFreeBlock->pxNextFreeBlock;
  }
  else
  {
   VAR_2->pxNextFreeBlock = VAR_0;
  }
 }
 else
 {
  VAR_2->pxNextFreeBlock = VAR_3->pxNextFreeBlock;
 }





 if( VAR_3 != VAR_2 )
 {
  VAR_3->pxNextFreeBlock = VAR_2;
 }
 else
 {
  FUNC_0();
 }
}
