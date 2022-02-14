
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_15__ {scalar_t__ rc; } ;
struct TYPE_14__ {int iLeafOffset; int iTermLeafOffset; int iEndofDoclist; int iPgidxOff; TYPE_11__* pLeaf; int term; int iLeafPgno; int iTermLeafPgno; } ;
struct TYPE_13__ {scalar_t__* p; int szLeaf; int nn; } ;
typedef TYPE_1__ Fts5SegIter ;
typedef TYPE_2__ Fts5Index ;


 void* VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__*,int *,int,scalar_t__ const*) ;
 int FUNC_3 (scalar_t__*,int *,int,scalar_t__ const*) ;
 int FUNC_4 (TYPE_11__*) ;
 int FUNC_5 (scalar_t__ const*,int,int) ;
 scalar_t__ FUNC_6 (scalar_t__ const*,int) ;
 scalar_t__ FUNC_7 (TYPE_11__*) ;
 int FUNC_8 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_9 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_10 (TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_11(
  Fts5Index *VAR_2,
  int VAR_3,
  Fts5SegIter *VAR_4,
  const u8 *VAR_5, int VAR_6
){
  int VAR_7;
  const u8 *VAR_8 = VAR_4->pLeaf->p;
  int VAR_9 = VAR_4->pLeaf->szLeaf;
  int VAR_10 = VAR_4->pLeaf->nn;

  u32 VAR_11 = 0;
  u32 VAR_12 = 0;
  u32 VAR_13 = 0;
  u32 VAR_14;
  int VAR_15;
  int VAR_16 = 0;

  FUNC_1( VAR_2->rc==VAR_1 );

  VAR_15 = VAR_9;
  VAR_15 += FUNC_6(&VAR_8[VAR_15], VAR_14);
  VAR_7 = VAR_14;
  if( VAR_7>VAR_10 ){
    VAR_2->rc = VAR_0;
    return;
  }

  while( 1 ){


    FUNC_5(VAR_8, VAR_7, VAR_13);
    if( VAR_12<VAR_11 ){
      goto search_failed;
    }

    FUNC_1( VAR_12>=VAR_11 );
    if( VAR_12==VAR_11 ){
      u32 VAR_17;
      u32 VAR_18;
      VAR_17 = (u32)FUNC_0(VAR_13, VAR_6-VAR_11);
      for(VAR_18=0; VAR_18<VAR_17; VAR_18++){
        if( VAR_8[VAR_7+VAR_18]!=VAR_5[VAR_11+VAR_18] ) break;
      }
      VAR_11 += VAR_18;

      if( (u32)VAR_6==VAR_11 ){
        if( VAR_18==VAR_13 ){
          goto search_success;
        }else{
          goto search_failed;
        }
      }else if( VAR_18<VAR_13 && VAR_8[VAR_7+VAR_18]>VAR_5[VAR_11] ){
        goto search_failed;
      }
    }

    if( VAR_15>=VAR_10 ){
      VAR_16 = 1;
      break;
    }

    VAR_15 += FUNC_6(&VAR_8[VAR_15], VAR_12);
    VAR_14 += VAR_12;
    VAR_7 = VAR_14;

    if( VAR_7>=VAR_10 ){
      VAR_2->rc = VAR_0;
      return;
    }


    FUNC_5(VAR_8, VAR_7, VAR_12);
  }

 search_failed:
  if( VAR_3==0 ){
    FUNC_4(VAR_4->pLeaf);
    VAR_4->pLeaf = 0;
    return;
  }else if( VAR_16 ){
    do {
      FUNC_10(VAR_2, VAR_4);
      if( VAR_4->pLeaf==0 ) return;
      VAR_8 = VAR_4->pLeaf->p;
      if( FUNC_7(VAR_4->pLeaf)==0 ){
        VAR_15 = VAR_4->pLeaf->szLeaf;
        VAR_15 += FUNC_6(&VAR_4->pLeaf->p[VAR_15], VAR_7);
        if( VAR_7<4 || VAR_7>=VAR_4->pLeaf->szLeaf ){
          VAR_2->rc = VAR_0;
          return;
        }else{
          VAR_12 = 0;
          VAR_14 = VAR_7;
          VAR_10 = VAR_4->pLeaf->nn;
          VAR_7 += FUNC_6(&VAR_8[VAR_7], VAR_13);
          break;
        }
      }
    }while( 1 );
  }

 search_success:
  VAR_4->iLeafOffset = VAR_7 + VAR_13;
  if( VAR_4->iLeafOffset>VAR_10 || VAR_13<1 ){
    VAR_2->rc = VAR_0;
    return;
  }
  VAR_4->iTermLeafOffset = VAR_4->iLeafOffset;
  VAR_4->iTermLeafPgno = VAR_4->iLeafPgno;

  FUNC_3(&VAR_2->rc, &VAR_4->term, VAR_12, VAR_5);
  FUNC_2(&VAR_2->rc, &VAR_4->term, VAR_13, &VAR_8[VAR_7]);

  if( VAR_15>=VAR_10 ){
    VAR_4->iEndofDoclist = VAR_4->pLeaf->nn+1;
  }else{
    int VAR_19;
    VAR_15 += FUNC_6(&VAR_8[VAR_15], VAR_19);
    VAR_4->iEndofDoclist = VAR_14 + VAR_19;
  }
  VAR_4->iPgidxOff = VAR_15;

  FUNC_9(VAR_2, VAR_4);
  FUNC_8(VAR_2, VAR_4);
}
