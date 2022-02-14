
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;


typedef int u8 ;
typedef int u64 ;
typedef scalar_t__ i64 ;
struct TYPE_18__ {scalar_t__ rc; int pHash; TYPE_1__* pConfig; } ;
struct TYPE_17__ {int flags; int iLeafOffset; int iEndofDoclist; TYPE_12__* pLeaf; scalar_t__ iRowid; int term; scalar_t__ pSeg; } ;
struct TYPE_16__ {scalar_t__ eDetail; } ;
struct TYPE_15__ {int szLeaf; int nn; int * p; } ;
typedef TYPE_2__ Fts5SegIter ;
typedef TYPE_3__ Fts5Index ;


 int FUNC_0 (TYPE_12__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_12__*) ;
 int FUNC_3 (int const*,int *) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (TYPE_12__*) ;
 int FUNC_6 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_7 (TYPE_3__*,TYPE_2__*,int) ;
 int FUNC_8 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_9 (scalar_t__*,int *,int,int *) ;
 scalar_t__ FUNC_10 (int *,int *) ;
 int FUNC_11 (int ,char const**,int const**,int*) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (char const*) ;

__attribute__((used)) static void FUNC_14(
  Fts5Index *VAR_4,
  Fts5SegIter *VAR_5,
  int *VAR_6
){
  int VAR_7;

  FUNC_1( VAR_4->rc==VAR_3 );
  FUNC_1( (VAR_5->flags & VAR_2)==0 );
  FUNC_1( VAR_4->pConfig->eDetail==VAR_0 );

  FUNC_0(VAR_5->pLeaf);
  VAR_7 = VAR_5->iLeafOffset;


  if( VAR_5->pSeg && VAR_7>=VAR_5->pLeaf->szLeaf ){
    FUNC_8(VAR_4, VAR_5);
    if( VAR_4->rc || VAR_5->pLeaf==0 ) return;
    VAR_5->iRowid = 0;
    VAR_7 = 4;
  }

  if( VAR_7<VAR_5->iEndofDoclist ){

    i64 VAR_8;
    VAR_7 += FUNC_10(&VAR_5->pLeaf->p[VAR_7], (u64*)&VAR_8);
    VAR_5->iLeafOffset = VAR_7;
    VAR_5->iRowid += VAR_8;
  }else if( (VAR_5->flags & VAR_1)==0 ){
    if( VAR_5->pSeg ){
      int VAR_9 = 0;
      if( VAR_7!=FUNC_5(VAR_5->pLeaf) ){
        VAR_7 += FUNC_4(&VAR_5->pLeaf->p[VAR_7], VAR_9);
      }
      VAR_5->iLeafOffset = VAR_7;
      FUNC_7(VAR_4, VAR_5, VAR_9);
    }else{
      const u8 *VAR_10 = 0;
      const char *VAR_11 = 0;
      int VAR_12;
      FUNC_12(VAR_4->pHash);
      FUNC_11(VAR_4->pHash, &VAR_11, &VAR_10, &VAR_12);
      if( VAR_10==0 ) goto next_none_eof;
      VAR_5->pLeaf->p = (u8*)VAR_10;
      VAR_5->pLeaf->nn = VAR_12;
      VAR_5->pLeaf->szLeaf = VAR_12;
      VAR_5->iEndofDoclist = VAR_12;
      FUNC_9(&VAR_4->rc,&VAR_5->term, (int)FUNC_13(VAR_11), (u8*)VAR_11);
      VAR_5->iLeafOffset = FUNC_3(VAR_10, (u64*)&VAR_5->iRowid);
    }

    if( VAR_6 ) *VAR_6 = 1;
  }else{
    goto next_none_eof;
  }

  FUNC_6(VAR_4, VAR_5);

  return;
 next_none_eof:
  FUNC_2(VAR_5->pLeaf);
  VAR_5->pLeaf = 0;
}
