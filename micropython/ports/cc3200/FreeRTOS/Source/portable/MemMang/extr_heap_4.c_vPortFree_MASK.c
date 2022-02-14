
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int xBlockSize; int * pxNextFreeBlock; } ;
typedef TYPE_1__ BlockLink_t ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (void*,int) ;
 int FUNC_4 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 () ;

void FUNC_6( void *VAR_3 )
{
uint8_t *VAR_4 = ( uint8_t * ) VAR_3;
BlockLink_t *VAR_5;

 if( VAR_3 != ((void*)0) )
 {


  VAR_4 -= VAR_2;


  VAR_5 = ( void * ) VAR_4;


  FUNC_0( ( VAR_5->xBlockSize & VAR_0 ) != 0 );
  FUNC_0( VAR_5->pxNextFreeBlock == ((void*)0) );

  if( ( VAR_5->xBlockSize & VAR_0 ) != 0 )
  {
   if( VAR_5->pxNextFreeBlock == ((void*)0) )
   {


    VAR_5->xBlockSize &= ~VAR_0;

    FUNC_4();
    {

     VAR_1 += VAR_5->xBlockSize;
     FUNC_3( VAR_3, VAR_5->xBlockSize );
     FUNC_2( ( ( BlockLink_t * ) VAR_5 ) );
    }
    ( void ) FUNC_5();
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
}
