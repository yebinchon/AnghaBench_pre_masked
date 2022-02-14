
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {size_t xBlockSize; struct TYPE_5__* pxNextFreeBlock; } ;
typedef TYPE_1__ BlockLink_t ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 int FUNC_1 () ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_4 (void*,size_t) ;
 int FUNC_5 () ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 TYPE_1__ VAR_8 ;
 int FUNC_6 () ;

void *FUNC_7( size_t VAR_9 )
{
BlockLink_t *VAR_10, *VAR_11, *VAR_12;
void *VAR_13 = ((void*)0);

 FUNC_5();
 {


  if( VAR_3 == ((void*)0) )
  {
   FUNC_2();
  }
  else
  {
   FUNC_1();
  }





  if( ( VAR_9 & VAR_4 ) == 0 )
  {


   if( VAR_9 > 0 )
   {
    VAR_9 += VAR_6;



    if( ( VAR_9 & VAR_2 ) != 0x00 )
    {

     VAR_9 += ( VAR_1 - ( VAR_9 & VAR_2 ) );
     FUNC_0( ( VAR_9 & VAR_2 ) == 0 );
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

   if( ( VAR_9 > 0 ) && ( VAR_9 <= VAR_5 ) )
   {


    VAR_11 = &VAR_8;
    VAR_10 = VAR_8.pxNextFreeBlock;
    while( ( VAR_10->xBlockSize < VAR_9 ) && ( VAR_10->pxNextFreeBlock != ((void*)0) ) )
    {
     VAR_11 = VAR_10;
     VAR_10 = VAR_10->pxNextFreeBlock;
    }



    if( VAR_10 != VAR_3 )
    {


     VAR_13 = ( void * ) ( ( ( uint8_t * ) VAR_11->pxNextFreeBlock ) + VAR_6 );



     VAR_11->pxNextFreeBlock = VAR_10->pxNextFreeBlock;



     if( ( VAR_10->xBlockSize - VAR_9 ) > VAR_0 )
     {




      VAR_12 = ( void * ) ( ( ( uint8_t * ) VAR_10 ) + VAR_9 );
      FUNC_0( ( ( ( size_t ) VAR_12 ) & VAR_2 ) == 0 );



      VAR_12->xBlockSize = VAR_10->xBlockSize - VAR_9;
      VAR_10->xBlockSize = VAR_9;


      FUNC_3( VAR_12 );
     }
     else
     {
      FUNC_1();
     }

     VAR_5 -= VAR_10->xBlockSize;

     if( VAR_5 < VAR_7 )
     {
      VAR_7 = VAR_5;
     }
     else
     {
      FUNC_1();
     }



     VAR_10->xBlockSize |= VAR_4;
     VAR_10->pxNextFreeBlock = ((void*)0);
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
  else
  {
   FUNC_1();
  }

  FUNC_4( VAR_13, VAR_9 );
 }
 ( void ) FUNC_6();
 FUNC_0( ( ( ( size_t ) VAR_13 ) & ( size_t ) VAR_2 ) == 0 );
 return VAR_13;
}
