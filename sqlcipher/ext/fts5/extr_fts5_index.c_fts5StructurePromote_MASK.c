
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ rc; } ;
struct TYPE_11__ {TYPE_2__* aLevel; } ;
struct TYPE_10__ {int nSeg; scalar_t__ nMerge; TYPE_1__* aSeg; } ;
struct TYPE_9__ {int pgnoLast; int pgnoFirst; } ;
typedef TYPE_1__ Fts5StructureSegment ;
typedef TYPE_2__ Fts5StructureLevel ;
typedef TYPE_3__ Fts5Structure ;
typedef TYPE_4__ Fts5Index ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*,int,int,TYPE_3__*) ;

__attribute__((used)) static void FUNC_2(
  Fts5Index *VAR_1,
  int VAR_2,
  Fts5Structure *VAR_3
){
  if( VAR_1->rc==VAR_0 ){
    int VAR_4;
    int VAR_5 = -1;
    int VAR_6 = 0;
    Fts5StructureSegment *VAR_7;
    int VAR_8;
    int VAR_9 = VAR_3->aLevel[VAR_2].nSeg;

    if( VAR_9==0 ) return;
    VAR_7 = &VAR_3->aLevel[VAR_2].aSeg[VAR_3->aLevel[VAR_2].nSeg-1];
    VAR_8 = (1 + VAR_7->pgnoLast - VAR_7->pgnoFirst);


    for(VAR_4=VAR_2-1; VAR_4>=0 && VAR_3->aLevel[VAR_4].nSeg==0; VAR_4--);
    if( VAR_4>=0 ){
      int VAR_10;
      int VAR_11 = 0;
      Fts5StructureLevel *VAR_12 = &VAR_3->aLevel[VAR_4];
      FUNC_0( VAR_12->nMerge==0 );
      for(VAR_10=0; VAR_10<VAR_12->nSeg; VAR_10++){
        int VAR_13 = VAR_12->aSeg[VAR_10].pgnoLast - VAR_12->aSeg[VAR_10].pgnoFirst + 1;
        if( VAR_13>VAR_11 ) VAR_11 = VAR_13;
      }
      if( VAR_11>=VAR_8 ){


        VAR_5 = VAR_4;
        VAR_6 = VAR_11;
      }
    }



    if( VAR_5<0 ){
      VAR_5 = VAR_2;
      VAR_6 = VAR_8;
    }
    FUNC_1(VAR_1, VAR_5, VAR_6, VAR_3);
  }
}
