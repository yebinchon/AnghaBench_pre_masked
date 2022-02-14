
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


struct TYPE_28__ {TYPE_2__* aDb; scalar_t__ mallocFailed; } ;
typedef TYPE_3__ sqlite3 ;
typedef int Vdbe ;
struct TYPE_29__ {int zName; } ;
typedef TYPE_4__ Table ;
struct TYPE_32__ {scalar_t__ idxType; char const* zName; int tnum; TYPE_4__* pTable; int pSchema; } ;
struct TYPE_31__ {scalar_t__ nErr; int checkSchema; TYPE_3__* db; } ;
struct TYPE_30__ {int nSrc; TYPE_1__* a; } ;
struct TYPE_27__ {char* zDbSName; } ;
struct TYPE_26__ {int zDatabase; int zName; } ;
typedef TYPE_5__ SrcList ;
typedef TYPE_6__ Parse ;
typedef TYPE_7__ Index ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_6__*,int ,int) ;
 scalar_t__ FUNC_3 (TYPE_6__*,int,char const*,int ,char const*) ;
 int FUNC_4 (TYPE_6__*,int,int) ;
 int FUNC_5 (TYPE_6__*,int) ;
 int FUNC_6 (TYPE_6__*,int,char*,char const*) ;
 int FUNC_7 (TYPE_6__*,int ) ;
 int FUNC_8 (TYPE_6__*,char*,TYPE_5__*,...) ;
 TYPE_7__* FUNC_9 (TYPE_3__*,int ,int ) ;
 int * FUNC_10 (TYPE_6__*) ;
 int FUNC_11 (TYPE_6__*,char*,char*,int ,char const*) ;
 scalar_t__ FUNC_12 (TYPE_6__*) ;
 int FUNC_13 (TYPE_3__*,int ) ;
 int FUNC_14 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_15 (int *,int ,int,int ,int ,char const*,int ) ;

void FUNC_16(Parse *VAR_8, SrcList *VAR_9, int VAR_10){
  Index *VAR_11;
  Vdbe *VAR_12;
  sqlite3 *VAR_13 = VAR_8->db;
  int VAR_14;

  FUNC_1( VAR_8->nErr==0 );
  if( VAR_13->mallocFailed ){
    goto exit_drop_index;
  }
  FUNC_1( VAR_9->nSrc==1 );
  if( VAR_7!=FUNC_12(VAR_8) ){
    goto exit_drop_index;
  }
  VAR_11 = FUNC_9(VAR_13, VAR_9->a[0].zName, VAR_9->a[0].zDatabase);
  if( VAR_11==0 ){
    if( !VAR_10 ){
      FUNC_8(VAR_8, "no such index: %S", VAR_9, 0);
    }else{
      FUNC_7(VAR_8, VAR_9->a[0].zDatabase);
    }
    VAR_8->checkSchema = 1;
    goto exit_drop_index;
  }
  if( VAR_11->idxType!=VAR_6 ){
    FUNC_8(VAR_8, "index associated with UNIQUE "
      "or PRIMARY KEY constraint cannot be dropped", 0);
    goto exit_drop_index;
  }
  VAR_14 = FUNC_13(VAR_13, VAR_11->pSchema);

  {
    int VAR_15 = VAR_4;
    Table *VAR_16 = VAR_11->pTable;
    const char *VAR_17 = VAR_13->aDb[VAR_14].zDbSName;
    const char *VAR_18 = FUNC_0(VAR_14);
    if( FUNC_3(VAR_8, VAR_3, VAR_18, 0, VAR_17) ){
      goto exit_drop_index;
    }
    if( !VAR_1 && VAR_14 ) VAR_15 = VAR_5;
    if( FUNC_3(VAR_8, VAR_15, VAR_11->zName, VAR_16->zName, VAR_17) ){
      goto exit_drop_index;
    }
  }



  VAR_12 = FUNC_10(VAR_8);
  if( VAR_12 ){
    FUNC_4(VAR_8, 1, VAR_14);
    FUNC_11(VAR_8,
       "DELETE FROM %Q.%s WHERE name=%Q AND type='index'",
       VAR_13->aDb[VAR_14].zDbSName, VAR_0, VAR_11->zName
    );
    FUNC_6(VAR_8, VAR_14, "idx", VAR_11->zName);
    FUNC_5(VAR_8, VAR_14);
    FUNC_2(VAR_8, VAR_11->tnum, VAR_14);
    FUNC_15(VAR_12, VAR_2, VAR_14, 0, 0, VAR_11->zName, 0);
  }

exit_drop_index:
  FUNC_14(VAR_13, VAR_9);
}
