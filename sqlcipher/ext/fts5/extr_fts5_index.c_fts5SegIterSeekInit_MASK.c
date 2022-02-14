
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int u8 ;
typedef int sqlite3_stmt ;
typedef int i64 ;
struct TYPE_21__ {int rc; } ;
struct TYPE_20__ {int iLeafPgno; scalar_t__ pLeaf; int term; int flags; TYPE_1__* pSeg; } ;
struct TYPE_19__ {int pgnoFirst; int iSegid; } ;
typedef TYPE_1__ Fts5StructureSegment ;
typedef TYPE_2__ Fts5SegIter ;
typedef TYPE_3__ Fts5Index ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int const*,int) ;
 int * FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int,TYPE_2__*,int const*,int) ;
 int FUNC_5 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_6 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_7 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_8 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,int ,int) ;
 int FUNC_10 (int *,int,int const*,int,int ) ;
 int FUNC_11 (int *,int,int ) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *) ;

__attribute__((used)) static void FUNC_16(
  Fts5Index *VAR_7,
  const u8 *VAR_8, int VAR_9,
  int VAR_10,
  Fts5StructureSegment *VAR_11,
  Fts5SegIter *VAR_12
){
  int VAR_13 = 1;
  int VAR_14 = (VAR_10 & VAR_1);
  int VAR_15 = 0;
  sqlite3_stmt *VAR_16 = 0;

  FUNC_0( VAR_14==0 || (VAR_10 & VAR_0)==0 );
  FUNC_0( VAR_8 && VAR_9 );
  FUNC_9(VAR_12, 0, sizeof(*VAR_12));
  VAR_12->pSeg = VAR_11;



  VAR_16 = FUNC_3(VAR_7);
  if( VAR_7->rc ) return;
  FUNC_11(VAR_16, 1, VAR_11->iSegid);
  FUNC_10(VAR_16, 2, VAR_8, VAR_9, VAR_6);
  if( VAR_5==FUNC_15(VAR_16) ){
    i64 VAR_17 = FUNC_13(VAR_16, 0);
    VAR_13 = (int)(VAR_17>>1);
    VAR_15 = (VAR_17 & 0x0001);
  }
  VAR_7->rc = FUNC_14(VAR_16);
  FUNC_12(VAR_16, 2);

  if( VAR_13<VAR_11->pgnoFirst ){
    VAR_13 = VAR_11->pgnoFirst;
    VAR_15 = 0;
  }

  VAR_12->iLeafPgno = VAR_13 - 1;
  FUNC_6(VAR_7, VAR_12);

  if( VAR_12->pLeaf ){
    FUNC_4(VAR_7, VAR_14, VAR_12, VAR_8, VAR_9);
  }

  if( VAR_7->rc==VAR_4 && VAR_14==0 ){
    VAR_12->flags |= VAR_2;
    if( VAR_12->pLeaf ){
      if( VAR_10 & VAR_0 ){
        VAR_12->flags |= VAR_3;
      }
      if( VAR_15 ){
        FUNC_5(VAR_7, VAR_12);
      }
      if( VAR_10 & VAR_0 ){
        FUNC_7(VAR_7, VAR_12);
      }
    }
  }

  FUNC_8(VAR_7, VAR_12);
  FUNC_1( VAR_7->rc!=VAR_4
   || VAR_12->pLeaf==0
   || FUNC_2(&VAR_12->term, VAR_8, VAR_9)==0
   || (VAR_14 && FUNC_2(&VAR_12->term, VAR_8, VAR_9)>0)
  );
}
