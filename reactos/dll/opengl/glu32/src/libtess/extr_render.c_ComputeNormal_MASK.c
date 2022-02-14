
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {double* coords; } ;
struct TYPE_4__ {int cacheCount; TYPE_2__* cache; } ;
typedef double GLdouble ;
typedef TYPE_1__ GLUtesselator ;
typedef TYPE_2__ CachedVertex ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0( GLUtesselator *VAR_1, GLdouble VAR_2[3], int VAR_3 )
{
  CachedVertex *VAR_4 = VAR_1->cache;
  CachedVertex *VAR_5 = VAR_4 + VAR_1->cacheCount;
  CachedVertex *VAR_6;
  GLdouble VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14[3];
  int VAR_15 = 0;
  if( ! VAR_3 ) {
    VAR_2[0] = VAR_2[1] = VAR_2[2] = 0.0;
  }

  VAR_6 = VAR_4 + 1;
  VAR_8 = VAR_6->coords[0] - VAR_4->coords[0];
  VAR_9 = VAR_6->coords[1] - VAR_4->coords[1];
  VAR_10 = VAR_6->coords[2] - VAR_4->coords[2];
  while( ++VAR_6 < VAR_5 ) {
    VAR_11 = VAR_8; VAR_12 = VAR_9; VAR_13 = VAR_10;
    VAR_8 = VAR_6->coords[0] - VAR_4->coords[0];
    VAR_9 = VAR_6->coords[1] - VAR_4->coords[1];
    VAR_10 = VAR_6->coords[2] - VAR_4->coords[2];


    VAR_14[0] = VAR_12*VAR_10 - VAR_13*VAR_9;
    VAR_14[1] = VAR_13*VAR_8 - VAR_11*VAR_10;
    VAR_14[2] = VAR_11*VAR_9 - VAR_12*VAR_8;

    VAR_7 = VAR_14[0]*VAR_2[0] + VAR_14[1]*VAR_2[1] + VAR_14[2]*VAR_2[2];
    if( ! VAR_3 ) {



      if( VAR_7 >= 0 ) {
 VAR_2[0] += VAR_14[0]; VAR_2[1] += VAR_14[1]; VAR_2[2] += VAR_14[2];
      } else {
 VAR_2[0] -= VAR_14[0]; VAR_2[1] -= VAR_14[1]; VAR_2[2] -= VAR_14[2];
      }
    } else if( VAR_7 != 0 ) {

      if( VAR_7 > 0 ) {
 if( VAR_15 < 0 ) return VAR_0;
 VAR_15 = 1;
      } else {
 if( VAR_15 > 0 ) return VAR_0;
 VAR_15 = -1;
      }
    }
  }
  return VAR_15;
}
