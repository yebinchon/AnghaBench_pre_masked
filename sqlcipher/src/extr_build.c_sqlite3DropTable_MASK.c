
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_40__ TYPE_6__ ;
typedef struct TYPE_39__ TYPE_5__ ;
typedef struct TYPE_38__ TYPE_4__ ;
typedef struct TYPE_37__ TYPE_3__ ;
typedef struct TYPE_36__ TYPE_2__ ;
typedef struct TYPE_35__ TYPE_1__ ;
typedef struct TYPE_34__ TYPE_17__ ;
typedef struct TYPE_33__ TYPE_15__ ;


struct TYPE_37__ {int nDb; TYPE_1__* aDb; int suppressErr; scalar_t__ mallocFailed; } ;
typedef TYPE_3__ sqlite3 ;
typedef int Vdbe ;
struct TYPE_38__ {char const* zName; scalar_t__ pSelect; int pSchema; } ;
typedef TYPE_4__ Table ;
struct TYPE_40__ {scalar_t__ nErr; TYPE_3__* db; } ;
struct TYPE_39__ {int nSrc; TYPE_15__* a; } ;
struct TYPE_36__ {char* zName; } ;
struct TYPE_35__ {char* zDbSName; } ;
struct TYPE_34__ {TYPE_2__* pMod; } ;
struct TYPE_33__ {int zDatabase; } ;
typedef TYPE_5__ SrcList ;
typedef TYPE_6__ Parse ;


 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_6__*,int,char const*,char const*,char const*) ;
 int FUNC_4 (TYPE_6__*,int,int) ;
 int FUNC_5 (TYPE_6__*,int,char*,char const*) ;
 int FUNC_6 (TYPE_6__*,TYPE_4__*,int,int) ;
 int FUNC_7 (TYPE_6__*,int ) ;
 int FUNC_8 (TYPE_6__*,char*,char const*) ;
 int FUNC_9 (TYPE_6__*,TYPE_5__*,TYPE_4__*) ;
 TYPE_17__* FUNC_10 (TYPE_3__*,TYPE_4__*) ;
 int * FUNC_11 (TYPE_6__*) ;
 TYPE_4__* FUNC_12 (TYPE_6__*,int,TYPE_15__*) ;
 scalar_t__ FUNC_13 (TYPE_6__*) ;
 int FUNC_14 (TYPE_3__*,int ) ;
 int FUNC_15 (TYPE_3__*,TYPE_5__*) ;
 scalar_t__ FUNC_16 (char const*,char*,int) ;
 scalar_t__ FUNC_17 (TYPE_6__*,TYPE_4__*) ;

void FUNC_18(Parse *VAR_8, SrcList *VAR_9, int VAR_10, int VAR_11){
  Table *VAR_12;
  Vdbe *VAR_13;
  sqlite3 *VAR_14 = VAR_8->db;
  int VAR_15;

  if( VAR_14->mallocFailed ){
    goto exit_drop_table;
  }
  FUNC_2( VAR_8->nErr==0 );
  FUNC_2( VAR_9->nSrc==1 );
  if( FUNC_13(VAR_8) ) goto exit_drop_table;
  if( VAR_11 ) VAR_14->suppressErr++;
  FUNC_2( VAR_10==0 || VAR_10==VAR_0 );
  VAR_12 = FUNC_12(VAR_8, VAR_10, &VAR_9->a[0]);
  if( VAR_11 ) VAR_14->suppressErr--;

  if( VAR_12==0 ){
    if( VAR_11 ) FUNC_7(VAR_8, VAR_9->a[0].zDatabase);
    goto exit_drop_table;
  }
  VAR_15 = FUNC_14(VAR_14, VAR_12->pSchema);
  FUNC_2( VAR_15>=0 && VAR_15<VAR_14->nDb );




  if( FUNC_0(VAR_12) && FUNC_17(VAR_8, VAR_12) ){
    goto exit_drop_table;
  }

  {
    int VAR_16;
    const char *VAR_17 = FUNC_1(VAR_15);
    const char *VAR_18 = VAR_14->aDb[VAR_15].zDbSName;
    const char *VAR_19 = 0;
    if( FUNC_3(VAR_8, VAR_2, VAR_17, 0, VAR_18)){
      goto exit_drop_table;
    }
    if( VAR_10 ){
      if( !VAR_1 && VAR_15==1 ){
        VAR_16 = VAR_5;
      }else{
        VAR_16 = VAR_6;
      }

    }else if( FUNC_0(VAR_12) ){
      VAR_16 = VAR_7;
      VAR_19 = FUNC_10(VAR_14, VAR_12)->pMod->zName;

    }else{
      if( !VAR_1 && VAR_15==1 ){
        VAR_16 = VAR_4;
      }else{
        VAR_16 = VAR_3;
      }
    }
    if( FUNC_3(VAR_8, VAR_16, VAR_12->zName, VAR_19, VAR_18) ){
      goto exit_drop_table;
    }
    if( FUNC_3(VAR_8, VAR_2, VAR_12->zName, 0, VAR_18) ){
      goto exit_drop_table;
    }
  }

  if( FUNC_16(VAR_12->zName, "sqlite_", 7)==0
    && FUNC_16(VAR_12->zName, "sqlite_stat", 11)!=0 ){
    FUNC_8(VAR_8, "table %s may not be dropped", VAR_12->zName);
    goto exit_drop_table;
  }





  if( VAR_10 && VAR_12->pSelect==0 ){
    FUNC_8(VAR_8, "use DROP TABLE to delete table %s", VAR_12->zName);
    goto exit_drop_table;
  }
  if( !VAR_10 && VAR_12->pSelect ){
    FUNC_8(VAR_8, "use DROP VIEW to delete view %s", VAR_12->zName);
    goto exit_drop_table;
  }





  VAR_13 = FUNC_11(VAR_8);
  if( VAR_13 ){
    FUNC_4(VAR_8, 1, VAR_15);
    if( !VAR_10 ){
      FUNC_5(VAR_8, VAR_15, "tbl", VAR_12->zName);
      FUNC_9(VAR_8, VAR_9, VAR_12);
    }
    FUNC_6(VAR_8, VAR_12, VAR_15, VAR_10);
  }

exit_drop_table:
  FUNC_15(VAR_14, VAR_9);
}
