
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_55__ TYPE_9__ ;
typedef struct TYPE_54__ TYPE_8__ ;
typedef struct TYPE_53__ TYPE_7__ ;
typedef struct TYPE_52__ TYPE_6__ ;
typedef struct TYPE_51__ TYPE_5__ ;
typedef struct TYPE_50__ TYPE_4__ ;
typedef struct TYPE_49__ TYPE_3__ ;
typedef struct TYPE_48__ TYPE_2__ ;
typedef struct TYPE_47__ TYPE_1__ ;
typedef struct TYPE_46__ TYPE_10__ ;


typedef int u8 ;
struct TYPE_55__ {TYPE_3__* aFirst; TYPE_8__* aSeg; } ;
struct TYPE_54__ {int nPos; int bDel; } ;
struct TYPE_48__ {scalar_t__ pgno; int buf; } ;
struct TYPE_53__ {int n; int nLeafWritten; TYPE_2__ writer; int p; scalar_t__ iBtPage; } ;
struct TYPE_52__ {int nLevel; scalar_t__ nSegment; TYPE_5__* aLevel; } ;
struct TYPE_51__ {int nMerge; int nSeg; TYPE_4__* aSeg; } ;
struct TYPE_50__ {int iSegid; scalar_t__ pgnoLast; int pgnoFirst; } ;
struct TYPE_49__ {size_t iFirst; } ;
struct TYPE_47__ {int eDetail; } ;
struct TYPE_46__ {scalar_t__ rc; TYPE_1__* pConfig; } ;
typedef TYPE_4__ Fts5StructureSegment ;
typedef TYPE_5__ Fts5StructureLevel ;
typedef TYPE_6__ Fts5Structure ;
typedef TYPE_7__ Fts5SegWriter ;
typedef TYPE_8__ Fts5SegIter ;
typedef TYPE_9__ Fts5Iter ;
typedef TYPE_10__ Fts5Index ;
typedef TYPE_7__ Fts5Buffer ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_10__*,TYPE_6__*) ;
 int FUNC_2 (scalar_t__*,int *,int) ;
 int FUNC_3 (TYPE_7__*) ;
 int FUNC_4 (scalar_t__*,TYPE_7__*,int,int const*) ;
 int FUNC_5 (TYPE_10__*,TYPE_8__*,void*,int ) ;
 int FUNC_6 (TYPE_10__*,int) ;
 scalar_t__ FUNC_7 (int const*,int ,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_8 (TYPE_10__*,TYPE_9__*) ;
 int FUNC_9 (TYPE_9__*) ;
 int FUNC_10 (TYPE_10__*,TYPE_6__*,int const,int ,int ,int ,int,int,TYPE_9__**) ;
 int FUNC_11 (TYPE_10__*,TYPE_9__*,int ,int ) ;
 int FUNC_12 (TYPE_9__*) ;
 int * FUNC_13 (TYPE_9__*,int*) ;
 int FUNC_14 (scalar_t__*,TYPE_6__**) ;
 int FUNC_15 (scalar_t__*,TYPE_6__*,int,int,int ) ;
 int FUNC_16 (TYPE_10__*,TYPE_9__*) ;
 int FUNC_17 (TYPE_10__*,TYPE_7__*,int ) ;
 int FUNC_18 (TYPE_10__*,TYPE_7__*,int,int const*) ;
 int FUNC_19 (TYPE_10__*,TYPE_7__*,scalar_t__*) ;
 int FUNC_20 (TYPE_10__*,TYPE_7__*,int) ;
 int FUNC_21 (TYPE_4__*,TYPE_4__*,int) ;
 int FUNC_22 (TYPE_7__*,int ,int) ;

__attribute__((used)) static void FUNC_23(
  Fts5Index *VAR_4,
  Fts5Structure **VAR_5,
  int VAR_6,
  int *VAR_7
){
  Fts5Structure *VAR_8 = *VAR_5;
  Fts5StructureLevel *VAR_9 = &VAR_8->aLevel[VAR_6];
  Fts5StructureLevel *VAR_10;
  Fts5Iter *VAR_11 = 0;
  int VAR_12 = VAR_7 ? *VAR_7 : 0;
  int VAR_13;
  Fts5SegWriter VAR_14;
  Fts5StructureSegment *VAR_15;
  Fts5Buffer VAR_16;
  int VAR_17;
  int VAR_18 = VAR_4->pConfig->eDetail;
  const int VAR_19 = VAR_0;
  int VAR_20 = 0;

  FUNC_0( VAR_6<VAR_8->nLevel );
  FUNC_0( VAR_9->nMerge<=VAR_9->nSeg );

  FUNC_22(&VAR_14, 0, sizeof(Fts5SegWriter));
  FUNC_22(&VAR_16, 0, sizeof(Fts5Buffer));
  if( VAR_9->nMerge ){
    VAR_10 = &VAR_8->aLevel[VAR_6+1];
    FUNC_0( VAR_10->nSeg>0 );
    VAR_13 = VAR_9->nMerge;
    VAR_15 = &VAR_10->aSeg[VAR_10->nSeg-1];

    FUNC_20(VAR_4, &VAR_14, VAR_15->iSegid);
    VAR_14.writer.pgno = VAR_15->pgnoLast+1;
    VAR_14.iBtPage = 0;
  }else{
    int VAR_21 = FUNC_1(VAR_4, VAR_8);



    if( VAR_6==VAR_8->nLevel-1 ){
      FUNC_14(&VAR_4->rc, VAR_5);
      VAR_8 = *VAR_5;
    }
    FUNC_15(&VAR_4->rc, VAR_8, VAR_6+1, 1, 0);
    if( VAR_4->rc ) return;
    VAR_9 = &VAR_8->aLevel[VAR_6];
    VAR_10 = &VAR_8->aLevel[VAR_6+1];

    FUNC_20(VAR_4, &VAR_14, VAR_21);


    VAR_15 = &VAR_10->aSeg[VAR_10->nSeg];
    VAR_10->nSeg++;
    VAR_15->pgnoFirst = 1;
    VAR_15->iSegid = VAR_21;
    VAR_8->nSegment++;


    VAR_13 = VAR_9->nSeg;
  }
  VAR_17 = (VAR_10->nSeg==1 && VAR_8->nLevel==VAR_6+2);

  FUNC_0( VAR_6>=0 );
  for(FUNC_10(VAR_4, VAR_8, VAR_19, 0, 0, 0, VAR_6, VAR_13, &VAR_11);
      FUNC_8(VAR_4, VAR_11)==0;
      FUNC_11(VAR_4, VAR_11, 0, 0)
  ){
    Fts5SegIter *VAR_22 = &VAR_11->aSeg[ VAR_11->aFirst[1].iFirst ];
    int VAR_23;
    int VAR_24;
    const u8 *VAR_25;

    VAR_25 = FUNC_13(VAR_11, &VAR_24);
    if( VAR_24!=VAR_16.n || FUNC_7(VAR_25, VAR_16.p, VAR_24) ){
      if( VAR_7 && VAR_14.nLeafWritten>VAR_12 ){
        break;
      }
      FUNC_4(&VAR_4->rc, &VAR_16, VAR_24, VAR_25);
      VAR_20 =0;
    }


    if( VAR_22->nPos==0 && (VAR_17 || VAR_22->bDel==0) ) continue;

    if( VAR_4->rc==VAR_2 && VAR_20==0 ){

      FUNC_18(VAR_4, &VAR_14, VAR_24, VAR_25);
      VAR_20 = 1;
    }



    FUNC_17(VAR_4, &VAR_14, FUNC_12(VAR_11));

    if( VAR_18==VAR_1 ){
      if( VAR_22->bDel ){
        FUNC_2(&VAR_4->rc, &VAR_14.writer.buf, 0);
        if( VAR_22->nPos>0 ){
          FUNC_2(&VAR_4->rc, &VAR_14.writer.buf, 0);
        }
      }
    }else{

      VAR_23 = VAR_22->nPos*2 + VAR_22->bDel;
      FUNC_2(&VAR_4->rc, &VAR_14.writer.buf, VAR_23);
      FUNC_5(VAR_4, VAR_22, (void*)&VAR_14, VAR_3);
    }
  }



  FUNC_19(VAR_4, &VAR_14, &VAR_15->pgnoLast);

  if( FUNC_8(VAR_4, VAR_11) ){
    int VAR_26;


    for(VAR_26=0; VAR_26<VAR_13; VAR_26++){
      FUNC_6(VAR_4, VAR_9->aSeg[VAR_26].iSegid);
    }


    if( VAR_9->nSeg!=VAR_13 ){
      int VAR_27 = (VAR_9->nSeg - VAR_13) * sizeof(Fts5StructureSegment);
      FUNC_21(VAR_9->aSeg, &VAR_9->aSeg[VAR_13], VAR_27);
    }
    VAR_8->nSegment -= VAR_13;
    VAR_9->nSeg -= VAR_13;
    VAR_9->nMerge = 0;
    if( VAR_15->pgnoLast==0 ){
      VAR_10->nSeg--;
      VAR_8->nSegment--;
    }
  }else{
    FUNC_0( VAR_15->pgnoLast>0 );
    FUNC_16(VAR_4, VAR_11);
    VAR_9->nMerge = VAR_13;
  }

  FUNC_9(VAR_11);
  FUNC_3(&VAR_16);
  if( VAR_7 ) *VAR_7 -= VAR_14.nLeafWritten;
}
