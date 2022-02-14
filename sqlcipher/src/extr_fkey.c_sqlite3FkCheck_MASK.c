
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_57__ TYPE_9__ ;
typedef struct TYPE_56__ TYPE_8__ ;
typedef struct TYPE_55__ TYPE_7__ ;
typedef struct TYPE_54__ TYPE_6__ ;
typedef struct TYPE_53__ TYPE_5__ ;
typedef struct TYPE_52__ TYPE_4__ ;
typedef struct TYPE_51__ TYPE_3__ ;
typedef struct TYPE_50__ TYPE_2__ ;
typedef struct TYPE_49__ TYPE_1__ ;
typedef struct TYPE_48__ TYPE_10__ ;


struct SrcList_item {scalar_t__ zName; scalar_t__ iCursor; TYPE_1__* pTab; } ;
struct TYPE_53__ {int flags; scalar_t__ mallocFailed; scalar_t__ xAuth; TYPE_2__* aDb; } ;
typedef TYPE_5__ sqlite3 ;
typedef int Vdbe ;
struct TYPE_54__ {int iPKey; int zName; int tnum; TYPE_4__* aCol; TYPE_10__* pFKey; int pSchema; } ;
typedef TYPE_6__ Table ;
struct TYPE_57__ {size_t* aiColumn; } ;
struct TYPE_56__ {int disableTriggers; int nTab; int isMultiWrite; int pToplevel; TYPE_5__* db; } ;
struct TYPE_55__ {struct SrcList_item* a; } ;
struct TYPE_52__ {char* zName; } ;
struct TYPE_51__ {int iFrom; } ;
struct TYPE_50__ {char* zDbSName; } ;
struct TYPE_49__ {int nTabRef; scalar_t__ zName; } ;
struct TYPE_48__ {int nCol; int isDeferred; int* aAction; TYPE_1__* pFrom; struct TYPE_48__* pNextTo; TYPE_3__* aCol; int zTo; struct TYPE_48__* pNextFrom; } ;
typedef TYPE_7__ SrcList ;
typedef TYPE_8__ Parse ;
typedef TYPE_9__ Index ;
typedef TYPE_10__ FKey ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_6__*,TYPE_10__*,int*,int) ;
 int FUNC_3 (TYPE_8__*,int,TYPE_6__*,TYPE_9__*,TYPE_10__*,int*,int,int,int) ;
 scalar_t__ FUNC_4 (TYPE_6__*,TYPE_10__*,int*,int) ;
 int FUNC_5 (TYPE_8__*,TYPE_7__*,TYPE_6__*,TYPE_9__*,TYPE_10__*,int*,int,int) ;
 int FUNC_6 (TYPE_8__*,TYPE_10__*) ;
 int FUNC_7 (TYPE_8__*,int ,char*,int) ;
 int FUNC_8 (TYPE_5__*,int*) ;
 TYPE_6__* FUNC_9 (TYPE_5__*,int ,char const*) ;
 scalar_t__ FUNC_10 (TYPE_8__*,TYPE_6__*,TYPE_10__*,TYPE_9__**,int**) ;
 TYPE_10__* FUNC_11 (TYPE_6__*) ;
 int * FUNC_12 (TYPE_8__*) ;
 TYPE_6__* FUNC_13 (TYPE_8__*,int ,int ,char const*) ;
 int FUNC_14 (TYPE_8__*) ;
 int FUNC_15 (TYPE_5__*,int ) ;
 TYPE_7__* FUNC_16 (TYPE_8__*,int ,int ,int ) ;
 int FUNC_17 (TYPE_5__*,TYPE_7__*) ;
 int FUNC_18 (TYPE_8__*,int,int ,int ,int ) ;
 int FUNC_19 (int *,int ,int,int) ;
 int FUNC_20 (int *) ;
 scalar_t__ FUNC_21 (int ,int ) ;

void FUNC_22(
  Parse *VAR_7,
  Table *VAR_8,
  int VAR_9,
  int VAR_10,
  int *VAR_11,
  int VAR_12
){
  sqlite3 *VAR_13 = VAR_7->db;
  FKey *VAR_14;
  int VAR_15;
  const char *VAR_16;
  int VAR_17 = VAR_7->disableTriggers;


  FUNC_1( (VAR_9==0)!=(VAR_10==0) );


  if( (VAR_13->flags&VAR_5)==0 ) return;

  VAR_15 = FUNC_15(VAR_13, VAR_8->pSchema);
  VAR_16 = VAR_13->aDb[VAR_15].zDbSName;



  for(VAR_14=VAR_8->pFKey; VAR_14; VAR_14=VAR_14->pNextFrom){
    Table *VAR_18;
    Index *VAR_19 = 0;
    int *VAR_20 = 0;
    int *VAR_21;
    int VAR_22;
    int VAR_23;
    int VAR_24 = 0;

    if( VAR_11
     && FUNC_21(VAR_8->zName, VAR_14->zTo)!=0
     && FUNC_2(VAR_8, VAR_14, VAR_11, VAR_12)==0
    ){
      continue;
    }





    if( VAR_7->disableTriggers ){
      VAR_18 = FUNC_9(VAR_13, VAR_14->zTo, VAR_16);
    }else{
      VAR_18 = FUNC_13(VAR_7, 0, VAR_14->zTo, VAR_16);
    }
    if( !VAR_18 || FUNC_10(VAR_7, VAR_18, VAR_14, &VAR_19, &VAR_20) ){
      FUNC_1( VAR_17==0 || (VAR_9!=0 && VAR_10==0) );
      if( !VAR_17 || VAR_13->mallocFailed ) return;
      if( VAR_18==0 ){







        Vdbe *VAR_25 = FUNC_12(VAR_7);
        int VAR_26 = FUNC_20(VAR_25) + VAR_14->nCol + 1;
        for(VAR_23=0; VAR_23<VAR_14->nCol; VAR_23++){
          int VAR_27 = VAR_14->aCol[VAR_23].iFrom + VAR_9 + 1;
          FUNC_19(VAR_25, VAR_3, VAR_27, VAR_26); FUNC_0(VAR_25);
        }
        FUNC_19(VAR_25, VAR_2, VAR_14->isDeferred, -1);
      }
      continue;
    }
    FUNC_1( VAR_14->nCol==1 || (VAR_20 && VAR_19) );

    if( VAR_20 ){
      VAR_21 = VAR_20;
    }else{
      VAR_22 = VAR_14->aCol[0].iFrom;
      VAR_21 = &VAR_22;
    }
    for(VAR_23=0; VAR_23<VAR_14->nCol; VAR_23++){
      if( VAR_21[VAR_23]==VAR_8->iPKey ){
        VAR_21[VAR_23] = -1;
      }
      FUNC_1( VAR_19==0 || VAR_19->aiColumn[VAR_23]>=0 );




      if( VAR_13->xAuth ){
        int VAR_28;
        char *VAR_29 = VAR_18->aCol[VAR_19 ? VAR_19->aiColumn[VAR_23] : VAR_18->iPKey].zName;
        VAR_28 = FUNC_7(VAR_7, VAR_18->zName, VAR_29, VAR_15);
        VAR_24 = (VAR_28==VAR_6);
      }

    }




    FUNC_18(VAR_7, VAR_15, VAR_18->tnum, 0, VAR_18->zName);
    VAR_7->nTab++;

    if( VAR_9!=0 ){



      FUNC_3(VAR_7, VAR_15, VAR_18, VAR_19, VAR_14, VAR_21, VAR_9, -1, VAR_24);
    }
    if( VAR_10!=0 && !FUNC_6(VAR_7, VAR_14) ){
      FUNC_3(VAR_7, VAR_15, VAR_18, VAR_19, VAR_14, VAR_21, VAR_10, +1, VAR_24);
    }

    FUNC_8(VAR_13, VAR_20);
  }



  for(VAR_14 = FUNC_11(VAR_8); VAR_14; VAR_14=VAR_14->pNextTo){
    Index *VAR_30 = 0;
    SrcList *VAR_31;
    int *VAR_32 = 0;

    if( VAR_11 && FUNC_4(VAR_8, VAR_14, VAR_11, VAR_12)==0 ){
      continue;
    }

    if( !VAR_14->isDeferred && !(VAR_13->flags & VAR_4)
     && !VAR_7->pToplevel && !VAR_7->isMultiWrite
    ){
      FUNC_1( VAR_9==0 && VAR_10!=0 );


      continue;
    }

    if( FUNC_10(VAR_7, VAR_8, VAR_14, &VAR_30, &VAR_32) ){
      if( !VAR_17 || VAR_13->mallocFailed ) return;
      continue;
    }
    FUNC_1( VAR_32 || VAR_14->nCol==1 );



    VAR_31 = FUNC_16(VAR_7, 0, 0, 0);
    if( VAR_31 ){
      struct SrcList_item *VAR_33 = VAR_31->a;
      VAR_33->pTab = VAR_14->pFrom;
      VAR_33->zName = VAR_14->pFrom->zName;
      VAR_33->pTab->nTabRef++;
      VAR_33->iCursor = VAR_7->nTab++;

      if( VAR_10!=0 ){
        FUNC_5(VAR_7, VAR_31, VAR_8, VAR_30, VAR_14, VAR_32, VAR_10, -1);
      }
      if( VAR_9!=0 ){
        int VAR_34 = VAR_14->aAction[VAR_11!=0];
        FUNC_5(VAR_7, VAR_31, VAR_8, VAR_30, VAR_14, VAR_32, VAR_9, 1);
        if( !VAR_14->isDeferred && VAR_34!=VAR_0 && VAR_34!=VAR_1 ){
          FUNC_14(VAR_7);
        }
      }
      VAR_33->zName = 0;
      FUNC_17(VAR_13, VAR_31);
    }
    FUNC_8(VAR_13, VAR_32);
  }
}
