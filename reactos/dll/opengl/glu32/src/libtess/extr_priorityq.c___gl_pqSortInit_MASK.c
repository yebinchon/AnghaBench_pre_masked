
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int max; int ** order; int heap; int initialized; int * keys; } ;
typedef TYPE_1__ PriorityQ ;
typedef int PQkey ;
typedef int PQHeapKey ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int **,int **) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (size_t) ;

int FUNC_7( PriorityQ *VAR_1 )
{
  PQkey **VAR_2, **VAR_3, **VAR_4, **VAR_5, *VAR_6;
  struct { PQkey **p, **r; } VAR_7[50], *VAR_8 = VAR_7;
  unsigned long VAR_9 = 2016473283;
  VAR_1->order = (PQHeapKey **)FUNC_6( (size_t)
                                  ((VAR_1->size+1) * sizeof(VAR_1->order[0])) );




  if (VAR_1->order == ((void*)0)) return 0;

  VAR_2 = VAR_1->order;
  VAR_3 = VAR_2 + VAR_1->size - 1;
  for( VAR_6 = VAR_1->keys, VAR_4 = VAR_2; VAR_4 <= VAR_3; ++VAR_6, ++VAR_4 ) {
    *VAR_4 = VAR_6;
  }




  VAR_8->p = VAR_2; VAR_8->r = VAR_3; ++VAR_8;
  while( --VAR_8 >= VAR_7 ) {
    VAR_2 = VAR_8->p;
    VAR_3 = VAR_8->r;
    while( VAR_3 > VAR_2 + 10 ) {
      VAR_9 = VAR_9 * 1539415821 + 1;
      VAR_4 = VAR_2 + VAR_9 % (VAR_3 - VAR_2 + 1);
      VAR_6 = *VAR_4;
      *VAR_4 = *VAR_2;
      *VAR_2 = VAR_6;
      VAR_4 = VAR_2 - 1;
      VAR_5 = VAR_3 + 1;
      do {
 do { ++VAR_4; } while( FUNC_0( **VAR_4, *VAR_6 ));
 do { --VAR_5; } while( FUNC_2( **VAR_5, *VAR_6 ));
 FUNC_3( VAR_4, VAR_5 );
      } while( VAR_4 < VAR_5 );
      FUNC_3( VAR_4, VAR_5 );
      if( VAR_4 - VAR_2 < VAR_3 - VAR_5 ) {
 VAR_8->p = VAR_5+1; VAR_8->r = VAR_3; ++VAR_8;
 VAR_3 = VAR_4-1;
      } else {
 VAR_8->p = VAR_2; VAR_8->r = VAR_4-1; ++VAR_8;
 VAR_2 = VAR_5+1;
      }
    }

    for( VAR_4 = VAR_2+1; VAR_4 <= VAR_3; ++VAR_4 ) {
      VAR_6 = *VAR_4;
      for( VAR_5 = VAR_4; VAR_5 > VAR_2 && FUNC_2( **(VAR_5-1), *VAR_6 ); --VAR_5 ) {
 *VAR_5 = *(VAR_5-1);
      }
      *VAR_5 = VAR_6;
    }
  }
  VAR_1->max = VAR_1->size;
  VAR_1->initialized = VAR_0;
  FUNC_4( VAR_1->heap );


  VAR_2 = VAR_1->order;
  VAR_3 = VAR_2 + VAR_1->size - 1;
  for( VAR_4 = VAR_2; VAR_4 < VAR_3; ++VAR_4 ) {
    FUNC_5( FUNC_1( **(VAR_4+1), **VAR_4 ));
  }


  return 1;
}
