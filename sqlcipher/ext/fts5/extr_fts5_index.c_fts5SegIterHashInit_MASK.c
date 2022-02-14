
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct TYPE_16__ {int nn; int szLeaf; int * p; } ;
struct TYPE_15__ {int pHash; int rc; } ;
struct TYPE_14__ {int iEndofDoclist; int flags; int iRowid; int iLeafOffset; TYPE_3__* pLeaf; int term; } ;
typedef TYPE_1__ Fts5SegIter ;
typedef TYPE_2__ Fts5Index ;
typedef TYPE_3__ Fts5Data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 TYPE_3__* FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_6 (int *,int *,int,int const*) ;
 int FUNC_7 (int,int,char const*,int,void**,int*) ;
 int FUNC_8 (int,char const**,int const**,int*) ;
 int FUNC_9 (int,char const*,int) ;
 scalar_t__ FUNC_10 (char const*) ;

__attribute__((used)) static void FUNC_11(
  Fts5Index *VAR_5,
  const u8 *VAR_6, int VAR_7,
  int VAR_8,
  Fts5SegIter *VAR_9
){
  int VAR_10 = 0;
  const u8 *VAR_11 = 0;
  int VAR_12 = 0;
  Fts5Data *VAR_13 = 0;

  FUNC_0( VAR_5->pHash );
  FUNC_0( VAR_5->rc==VAR_4 );

  if( VAR_6==0 || (VAR_8 & VAR_1) ){
    const u8 *VAR_14 = 0;

    VAR_5->rc = FUNC_9(VAR_5->pHash, (const char*)VAR_6, VAR_7);
    FUNC_8(VAR_5->pHash, (const char**)&VAR_11, &VAR_14, &VAR_10);
    VAR_12 = (VAR_11 ? (int)FUNC_10((const char*)VAR_11) : 0);
    if( VAR_14 ){
      VAR_13 = FUNC_2(VAR_5, sizeof(Fts5Data));
      if( VAR_13 ){
        VAR_13->p = (u8*)VAR_14;
      }
    }
  }else{
    VAR_5->rc = FUNC_7(VAR_5->pHash, sizeof(Fts5Data),
        (const char*)VAR_6, VAR_7, (void**)&VAR_13, &VAR_10
    );
    if( VAR_13 ){
      VAR_13->p = (u8*)&VAR_13[1];
    }
    VAR_11 = VAR_6;
    VAR_12 = VAR_7;
    VAR_9->flags |= VAR_2;
  }

  if( VAR_13 ){
    FUNC_6(&VAR_5->rc, &VAR_9->term, VAR_12, VAR_11);
    VAR_13->nn = VAR_13->szLeaf = VAR_10;
    VAR_9->pLeaf = VAR_13;
    VAR_9->iLeafOffset = FUNC_1(VAR_13->p, (u64*)&VAR_9->iRowid);
    VAR_9->iEndofDoclist = VAR_13->nn;

    if( VAR_8 & VAR_0 ){
      VAR_9->flags |= VAR_3;
      FUNC_4(VAR_5, VAR_9);
    }else{
      FUNC_3(VAR_5, VAR_9);
    }
  }

  FUNC_5(VAR_5, VAR_9);
}
