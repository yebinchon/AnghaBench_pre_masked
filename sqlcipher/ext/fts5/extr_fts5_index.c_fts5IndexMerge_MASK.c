
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ rc; } ;
struct TYPE_11__ {int nLevel; TYPE_1__* aLevel; } ;
struct TYPE_10__ {int nMerge; int nSeg; } ;
typedef TYPE_1__ Fts5StructureLevel ;
typedef TYPE_2__ Fts5Structure ;
typedef TYPE_3__ Fts5Index ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__**,int,int*) ;
 int FUNC_2 (TYPE_3__*,int,TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(
  Fts5Index *VAR_1,
  Fts5Structure **VAR_2,
  int VAR_3,
  int VAR_4
){
  int VAR_5 = VAR_3;
  int VAR_6 = 0;
  Fts5Structure *VAR_7 = *VAR_2;
  while( VAR_5>0 && VAR_1->rc==VAR_0 ){
    int VAR_8;
    int VAR_9 = 0;
    int VAR_10 = 0;


    FUNC_0( VAR_7->nLevel>0 );
    for(VAR_8=0; VAR_8<VAR_7->nLevel; VAR_8++){
      Fts5StructureLevel *VAR_11 = &VAR_7->aLevel[VAR_8];
      if( VAR_11->nMerge ){
        if( VAR_11->nMerge>VAR_10 ){
          VAR_9 = VAR_8;
          VAR_10 = VAR_11->nMerge;
        }
        break;
      }
      if( VAR_11->nSeg>VAR_10 ){
        VAR_10 = VAR_11->nSeg;
        VAR_9 = VAR_8;
      }
    }
    if( VAR_10<VAR_4 && VAR_7->aLevel[VAR_9].nMerge==0 ){
      break;
    }
    VAR_6 = 1;
    FUNC_1(VAR_1, &VAR_7, VAR_9, &VAR_5);
    if( VAR_1->rc==VAR_0 && VAR_7->aLevel[VAR_9].nMerge==0 ){
      FUNC_2(VAR_1, VAR_9+1, VAR_7);
    }
  }
  *VAR_2 = VAR_7;
  return VAR_6;
}
