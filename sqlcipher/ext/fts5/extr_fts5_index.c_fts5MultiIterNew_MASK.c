
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_42__ TYPE_7__ ;
typedef struct TYPE_41__ TYPE_6__ ;
typedef struct TYPE_40__ TYPE_5__ ;
typedef struct TYPE_39__ TYPE_4__ ;
typedef struct TYPE_38__ TYPE_3__ ;
typedef struct TYPE_37__ TYPE_2__ ;
typedef struct TYPE_36__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_42__ {scalar_t__ rc; scalar_t__ pHash; } ;
struct TYPE_36__ {scalar_t__ bEof; } ;
struct TYPE_41__ {int bRev; int bSkipEmpty; int nSeg; int (* xSetOutputs ) (TYPE_6__*,TYPE_5__*) ;TYPE_2__* aFirst; TYPE_5__* aSeg; TYPE_1__ base; int * pColset; } ;
struct TYPE_40__ {int (* xNext ) (TYPE_7__*,TYPE_5__*,int ) ;} ;
struct TYPE_39__ {int nSegment; size_t nLevel; TYPE_3__* aLevel; } ;
struct TYPE_38__ {int nSeg; int * aSeg; } ;
struct TYPE_37__ {size_t iFirst; } ;
typedef int Fts5StructureSegment ;
typedef TYPE_3__ Fts5StructureLevel ;
typedef TYPE_4__ Fts5Structure ;
typedef TYPE_5__ Fts5SegIter ;
typedef TYPE_6__ Fts5Iter ;
typedef TYPE_7__ Fts5Index ;
typedef int Fts5Colset ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_7__*,TYPE_6__*) ;
 int FUNC_3 (scalar_t__*,TYPE_6__*) ;
 int FUNC_4 (TYPE_7__*,TYPE_6__*,int,int) ;
 TYPE_6__* FUNC_5 (TYPE_7__*,int) ;
 int FUNC_6 (TYPE_6__*,int) ;
 int FUNC_7 (TYPE_6__*) ;
 scalar_t__ FUNC_8 (TYPE_7__*,TYPE_6__*) ;
 int FUNC_9 (TYPE_7__*,TYPE_6__*,int ,int ) ;
 int FUNC_10 (TYPE_6__*) ;
 int FUNC_11 (TYPE_7__*,int const*,int,int,TYPE_5__*) ;
 int FUNC_12 (TYPE_7__*,int *,TYPE_5__*) ;
 int FUNC_13 (TYPE_7__*,int const*,int,int,int *,TYPE_5__*) ;
 int FUNC_14 (TYPE_4__*) ;
 int FUNC_15 (TYPE_7__*,TYPE_5__*,int ) ;
 int FUNC_16 (TYPE_6__*,TYPE_5__*) ;

__attribute__((used)) static void FUNC_17(
  Fts5Index *VAR_4,
  Fts5Structure *VAR_5,
  int VAR_6,
  Fts5Colset *VAR_7,
  const u8 *VAR_8, int VAR_9,
  int VAR_10,
  int VAR_11,
  Fts5Iter **VAR_12
){
  int VAR_13 = 0;
  int VAR_14 = 0;
  int VAR_15;
  Fts5StructureLevel *VAR_16;
  Fts5Iter *VAR_17;

  FUNC_1( (VAR_8==0 && VAR_9==0) || VAR_10<0 );


  if( VAR_4->rc==VAR_3 ){
    if( VAR_10<0 ){
      FUNC_1( VAR_5->nSegment==FUNC_14(VAR_5) );
      VAR_13 = VAR_5->nSegment;
      VAR_13 += (VAR_4->pHash ? 1 : 0);
    }else{
      VAR_13 = FUNC_0(VAR_5->aLevel[VAR_10].nSeg, VAR_11);
    }
  }
  *VAR_12 = VAR_17 = FUNC_5(VAR_4, VAR_13);
  if( VAR_17==0 ) return;
  VAR_17->bRev = (0!=(VAR_6 & VAR_0));
  VAR_17->bSkipEmpty = (0!=(VAR_6 & VAR_2));
  VAR_17->pColset = VAR_7;
  if( (VAR_6 & VAR_1)==0 ){
    FUNC_3(&VAR_4->rc, VAR_17);
  }


  if( VAR_4->rc==VAR_3 ){
    if( VAR_10<0 ){
      Fts5StructureLevel *VAR_18 = &VAR_5->aLevel[VAR_5->nLevel];
      if( VAR_4->pHash ){

        Fts5SegIter *VAR_19 = &VAR_17->aSeg[VAR_14++];
        FUNC_11(VAR_4, VAR_8, VAR_9, VAR_6, VAR_19);
      }
      for(VAR_16=&VAR_5->aLevel[0]; VAR_16<VAR_18; VAR_16++){
        for(VAR_15=VAR_16->nSeg-1; VAR_15>=0; VAR_15--){
          Fts5StructureSegment *VAR_20 = &VAR_16->aSeg[VAR_15];
          Fts5SegIter *VAR_21 = &VAR_17->aSeg[VAR_14++];
          if( VAR_8==0 ){
            FUNC_12(VAR_4, VAR_20, VAR_21);
          }else{
            FUNC_13(VAR_4, VAR_8, VAR_9, VAR_6, VAR_20, VAR_21);
          }
        }
      }
    }else{
      VAR_16 = &VAR_5->aLevel[VAR_10];
      for(VAR_15=VAR_13-1; VAR_15>=0; VAR_15--){
        FUNC_12(VAR_4, &VAR_16->aSeg[VAR_15], &VAR_17->aSeg[VAR_14++]);
      }
    }
    FUNC_1( VAR_14==VAR_13 );
  }





  if( VAR_4->rc==VAR_3 ){
    for(VAR_14=VAR_17->nSeg-1; VAR_14>0; VAR_14--){
      int VAR_22;
      if( (VAR_22 = FUNC_6(VAR_17, VAR_14)) ){
        Fts5SegIter *VAR_23 = &VAR_17->aSeg[VAR_22];
        if( VAR_4->rc==VAR_3 ) VAR_23->xNext(VAR_4, VAR_23, 0);
        FUNC_4(VAR_4, VAR_17, VAR_22, VAR_14);
      }
    }
    FUNC_10(VAR_17);
    FUNC_2(VAR_4, VAR_17);

    if( VAR_17->bSkipEmpty && FUNC_8(VAR_4, VAR_17) ){
      FUNC_9(VAR_4, VAR_17, 0, 0);
    }else if( VAR_17->base.bEof==0 ){
      Fts5SegIter *VAR_24 = &VAR_17->aSeg[VAR_17->aFirst[1].iFirst];
      VAR_17->xSetOutputs(VAR_17, VAR_24);
    }

  }else{
    FUNC_7(VAR_17);
    *VAR_12 = 0;
  }
}
