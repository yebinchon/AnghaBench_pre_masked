
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int data; } ;
struct TYPE_5__ {int cacheCount; scalar_t__* normal; int windingRule; scalar_t__ boundaryOnly; TYPE_2__* cache; } ;
typedef scalar_t__ GLdouble ;
typedef int GLboolean ;
typedef TYPE_1__ GLUtesselator ;
typedef TYPE_2__ CachedVertex ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,scalar_t__*,int ) ;
 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

GLboolean FUNC_4( GLUtesselator *VAR_6 )
{
  CachedVertex *VAR_7 = VAR_6->cache;
  CachedVertex *VAR_8 = VAR_7 + VAR_6->cacheCount;
  CachedVertex *VAR_9;
  GLdouble VAR_10[3];
  int VAR_11;

  if( VAR_6->cacheCount < 3 ) {

    return VAR_5;
  }

  VAR_10[0] = VAR_6->normal[0];
  VAR_10[1] = VAR_6->normal[1];
  VAR_10[2] = VAR_6->normal[2];
  if( VAR_10[0] == 0 && VAR_10[1] == 0 && VAR_10[2] == 0 ) {
    FUNC_3( VAR_6, VAR_10, VAR_0 );
  }

  VAR_11 = FUNC_3( VAR_6, VAR_10, VAR_5 );
  if( VAR_11 == VAR_4 ) {

    return VAR_0;
  }
  if( VAR_11 == 0 ) {

    return VAR_5;
  }


  switch( VAR_6->windingRule ) {
  case 129:
  case 130:
    break;
  case 128:
    if( VAR_11 < 0 ) return VAR_5;
    break;
  case 131:
    if( VAR_11 > 0 ) return VAR_5;
    break;
  case 132:
    return VAR_5;
  }

  FUNC_0( VAR_6->boundaryOnly ? VAR_1
     : (VAR_6->cacheCount > 3) ? VAR_3
     : VAR_2 );

  FUNC_2( VAR_7->data );
  if( VAR_11 > 0 ) {
    for( VAR_9 = VAR_7+1; VAR_9 < VAR_8; ++VAR_9 ) {
      FUNC_2( VAR_9->data );
    }
  } else {
    for( VAR_9 = VAR_8-1; VAR_9 > VAR_7; --VAR_9 ) {
      FUNC_2( VAR_9->data );
    }
  }
  FUNC_1();
  return VAR_5;
}
