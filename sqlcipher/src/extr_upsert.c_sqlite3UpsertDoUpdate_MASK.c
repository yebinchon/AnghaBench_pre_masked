
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int sqlite3 ;
typedef int Vdbe ;
struct TYPE_19__ {int iDataCur; int pUpsertWhere; int pUpsertSet; int pUpsertSrc; } ;
typedef TYPE_2__ Upsert ;
struct TYPE_20__ {TYPE_1__* aCol; } ;
typedef TYPE_3__ Table ;
struct TYPE_22__ {int nKeyCol; size_t* aiColumn; int zName; } ;
struct TYPE_21__ {int nMem; int * db; int * pVdbe; } ;
struct TYPE_18__ {int zName; } ;
typedef int SrcList ;
typedef TYPE_4__ Parse ;
typedef TYPE_5__ Index ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_5__*,size_t) ;
 int FUNC_6 (TYPE_4__*) ;
 TYPE_5__* FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_4__*,int) ;
 int * FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (TYPE_4__*,int *,int ,int ,int ,int ,int ,TYPE_2__*) ;
 int FUNC_11 (int *,int ,int,int) ;
 int FUNC_12 (int *,int ,int,int,int) ;
 int FUNC_13 (int *,int ,int ,int ,int ,char*,int ) ;
 int FUNC_14 (int *,int ,int,int ,int,int) ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (int *,int ) ;

void FUNC_17(
  Parse *VAR_8,
  Upsert *VAR_9,
  Table *VAR_10,
  Index *VAR_11,
  int VAR_12
){
  Vdbe *VAR_13 = VAR_8->pVdbe;
  sqlite3 *VAR_14 = VAR_8->db;
  SrcList *VAR_15;
  int VAR_16;

  FUNC_4( VAR_13!=0 );
  FUNC_4( VAR_9!=0 );
  FUNC_3((VAR_13, "Begin DO UPDATE of UPSERT"));
  VAR_16 = VAR_9->iDataCur;
  if( VAR_11 && VAR_12!=VAR_16 ){
    if( FUNC_0(VAR_10) ){
      int VAR_17 = FUNC_6(VAR_8);
      FUNC_11(VAR_13, VAR_4, VAR_12, VAR_17);
      FUNC_12(VAR_13, VAR_5, VAR_16, 0, VAR_17);
      FUNC_2(VAR_13);
      FUNC_8(VAR_8, VAR_17);
    }else{
      Index *VAR_18 = FUNC_7(VAR_10);
      int VAR_19 = VAR_18->nKeyCol;
      int VAR_20 = VAR_8->nMem+1;
      int VAR_21;
      VAR_8->nMem += VAR_19;
      for(VAR_21=0; VAR_21<VAR_19; VAR_21++){
        int VAR_22;
        FUNC_4( VAR_18->aiColumn[VAR_21]>=0 );
        VAR_22 = FUNC_5(VAR_11, VAR_18->aiColumn[VAR_21]);
        FUNC_12(VAR_13, VAR_1, VAR_12, VAR_22, VAR_20+VAR_21);
        FUNC_1((VAR_13, "%s.%s", VAR_11->zName,
                    VAR_10->aCol[VAR_18->aiColumn[VAR_21]].zName));
      }
      FUNC_16(VAR_13, VAR_0);
      VAR_21 = FUNC_14(VAR_13, VAR_2, VAR_16, 0, VAR_20, VAR_19);
      FUNC_2(VAR_13);
      FUNC_13(VAR_13, VAR_3, VAR_7, VAR_0, 0,
            "corrupt database", VAR_6);
      FUNC_15(VAR_13, VAR_21);
    }
  }


  VAR_15 = FUNC_9(VAR_14, VAR_9->pUpsertSrc, 0);
  FUNC_10(VAR_8, VAR_15, VAR_9->pUpsertSet,
      VAR_9->pUpsertWhere, VAR_0, 0, 0, VAR_9);
  VAR_9->pUpsertSet = 0;
  VAR_9->pUpsertWhere = 0;
  FUNC_3((VAR_13, "End DO UPDATE of UPSERT"));
}
