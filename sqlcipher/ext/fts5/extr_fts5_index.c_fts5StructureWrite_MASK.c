
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int i64 ;
struct TYPE_21__ {int n; int p; } ;
struct TYPE_20__ {scalar_t__ rc; TYPE_1__* pConfig; } ;
struct TYPE_19__ {int nSegment; int nLevel; TYPE_3__* aLevel; scalar_t__ nWriteCounter; } ;
struct TYPE_18__ {int nMerge; int nSeg; TYPE_2__* aSeg; } ;
struct TYPE_17__ {int iSegid; int pgnoFirst; int pgnoLast; } ;
struct TYPE_16__ {int iCookie; } ;
typedef TYPE_3__ Fts5StructureLevel ;
typedef TYPE_4__ Fts5Structure ;
typedef TYPE_5__ Fts5Index ;
typedef TYPE_6__ Fts5Buffer ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__*,TYPE_6__*,int) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (TYPE_6__*,int) ;
 int FUNC_4 (TYPE_5__*,int ,int ,int) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_6__*,int ,int) ;
 scalar_t__ FUNC_7 (scalar_t__*,TYPE_6__*,int) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static void FUNC_9(Fts5Index *VAR_2, Fts5Structure *VAR_3){
  if( VAR_2->rc==VAR_1 ){
    Fts5Buffer VAR_4;
    int VAR_5;
    int VAR_6;

    FUNC_0( VAR_3->nSegment==FUNC_5(VAR_3) );
    FUNC_6(&VAR_4, 0, sizeof(Fts5Buffer));


    VAR_6 = VAR_2->pConfig->iCookie;
    if( VAR_6<0 ) VAR_6 = 0;

    if( 0==FUNC_7(&VAR_2->rc, &VAR_4, 4+9+9+9) ){
      FUNC_8(VAR_4.p, VAR_6);
      VAR_4.n = 4;
      FUNC_3(&VAR_4, VAR_3->nLevel);
      FUNC_3(&VAR_4, VAR_3->nSegment);
      FUNC_3(&VAR_4, (i64)VAR_3->nWriteCounter);
    }

    for(VAR_5=0; VAR_5<VAR_3->nLevel; VAR_5++){
      int VAR_7;
      Fts5StructureLevel *VAR_8 = &VAR_3->aLevel[VAR_5];
      FUNC_1(&VAR_2->rc, &VAR_4, VAR_8->nMerge);
      FUNC_1(&VAR_2->rc, &VAR_4, VAR_8->nSeg);
      FUNC_0( VAR_8->nMerge<=VAR_8->nSeg );

      for(VAR_7=0; VAR_7<VAR_8->nSeg; VAR_7++){
        FUNC_1(&VAR_2->rc, &VAR_4, VAR_8->aSeg[VAR_7].iSegid);
        FUNC_1(&VAR_2->rc, &VAR_4, VAR_8->aSeg[VAR_7].pgnoFirst);
        FUNC_1(&VAR_2->rc, &VAR_4, VAR_8->aSeg[VAR_7].pgnoLast);
      }
    }

    FUNC_4(VAR_2, VAR_0, VAR_4.p, VAR_4.n);
    FUNC_2(&VAR_4);
  }
}
