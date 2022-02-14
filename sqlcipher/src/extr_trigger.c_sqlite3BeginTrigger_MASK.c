
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_54__ TYPE_9__ ;
typedef struct TYPE_53__ TYPE_8__ ;
typedef struct TYPE_52__ TYPE_7__ ;
typedef struct TYPE_51__ TYPE_6__ ;
typedef struct TYPE_50__ TYPE_5__ ;
typedef struct TYPE_49__ TYPE_4__ ;
typedef struct TYPE_48__ TYPE_3__ ;
typedef struct TYPE_47__ TYPE_2__ ;
typedef struct TYPE_46__ TYPE_20__ ;
typedef struct TYPE_45__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_45__ {scalar_t__ busy; int iDb; int orphanTrigger; } ;
struct TYPE_49__ {TYPE_3__* aDb; TYPE_1__ init; scalar_t__ mallocFailed; } ;
typedef TYPE_4__ sqlite3 ;
struct TYPE_50__ {char* zName; int * pColumns; int * pWhen; int table; int tr_tm; scalar_t__ op; TYPE_20__* pTabSchema; TYPE_20__* pSchema; } ;
typedef TYPE_5__ Trigger ;
struct TYPE_51__ {scalar_t__ n; } ;
typedef TYPE_6__ Token ;
struct TYPE_52__ {TYPE_20__* pSchema; int zName; scalar_t__ pSelect; } ;
typedef TYPE_7__ Table ;
struct TYPE_54__ {TYPE_5__* pNewTrigger; TYPE_4__* db; } ;
struct TYPE_53__ {int nSrc; TYPE_2__* a; } ;
struct TYPE_48__ {char* zDbSName; TYPE_20__* pSchema; } ;
struct TYPE_47__ {char* zDatabase; int zName; } ;
struct TYPE_46__ {int trigHash; } ;
typedef TYPE_8__ SrcList ;
typedef TYPE_9__ Parse ;
typedef int IdList ;
typedef int Expr ;
typedef int DbFixer ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_7__*) ;
 char* FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_9__*,int,char*,int ,char const*) ;
 scalar_t__ FUNC_4 (TYPE_9__*,char*) ;
 int FUNC_5 (TYPE_9__*,int) ;
 int FUNC_6 (TYPE_4__*,char*) ;
 scalar_t__ FUNC_7 (TYPE_4__*,int) ;
 int FUNC_8 (TYPE_4__*,int ) ;
 int FUNC_9 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_10 (TYPE_9__*,char*,...) ;
 int FUNC_11 (TYPE_4__*,int *) ;
 int * FUNC_12 (TYPE_4__*,int *,int ) ;
 int FUNC_13 (int *,TYPE_9__*,int,char*,TYPE_6__*) ;
 scalar_t__ FUNC_14 (int *,TYPE_8__*) ;
 scalar_t__ FUNC_15 (int *,char*) ;
 int FUNC_16 (TYPE_4__*,int *) ;
 char* FUNC_17 (TYPE_4__*,TYPE_6__*) ;
 int FUNC_18 (TYPE_9__*,int ,int ) ;
 int FUNC_19 (TYPE_4__*,int,int ) ;
 int FUNC_20 (TYPE_4__*,TYPE_20__*) ;
 int FUNC_21 (TYPE_4__*,TYPE_8__*) ;
 TYPE_7__* FUNC_22 (TYPE_9__*,TYPE_8__*) ;
 scalar_t__ FUNC_23 (int ,char*,int) ;
 int FUNC_24 (TYPE_9__*,TYPE_6__*,TYPE_6__*,TYPE_6__**) ;

void FUNC_25(
  Parse *VAR_13,
  Token *VAR_14,
  Token *VAR_15,
  int VAR_16,
  int VAR_17,
  IdList *VAR_18,
  SrcList *VAR_19,
  Expr *VAR_20,
  int VAR_21,
  int VAR_22
){
  Trigger *VAR_23 = 0;
  Table *VAR_24;
  char *VAR_25 = 0;
  sqlite3 *VAR_26 = VAR_13->db;
  int VAR_27;
  Token *VAR_28;
  DbFixer VAR_29;

  FUNC_2( VAR_14!=0 );
  FUNC_2( VAR_15!=0 );
  FUNC_2( VAR_17==VAR_8 || VAR_17==VAR_10 || VAR_17==VAR_7 );
  FUNC_2( VAR_17>0 && VAR_17<0xff );
  if( VAR_21 ){

    if( VAR_15->n>0 ){
      FUNC_10(VAR_13, "temporary trigger may not have qualified name");
      goto trigger_cleanup;
    }
    VAR_27 = 1;
    VAR_28 = VAR_14;
  }else{

    VAR_27 = FUNC_24(VAR_13, VAR_14, VAR_15, &VAR_28);
    if( VAR_27<0 ){
      goto trigger_cleanup;
    }
  }
  if( !VAR_19 || VAR_26->mallocFailed ){
    goto trigger_cleanup;
  }
  if( VAR_26->init.busy && VAR_27!=1 ){
    FUNC_6(VAR_26, VAR_19->a[0].zDatabase);
    VAR_19->a[0].zDatabase = 0;
  }






  VAR_24 = FUNC_22(VAR_13, VAR_19);
  if( VAR_26->init.busy==0 && VAR_15->n==0 && VAR_24
        && VAR_24->pSchema==VAR_26->aDb[1].pSchema ){
    VAR_27 = 1;
  }


  if( VAR_26->mallocFailed ) goto trigger_cleanup;
  FUNC_2( VAR_19->nSrc==1 );
  FUNC_13(&VAR_29, VAR_13, VAR_27, "trigger", VAR_28);
  if( FUNC_14(&VAR_29, VAR_19) ){
    goto trigger_cleanup;
  }
  VAR_24 = FUNC_22(VAR_13, VAR_19);
  if( !VAR_24 ){

    if( VAR_26->init.iDb==1 ){
      VAR_26->init.orphanTrigger = 1;
    }
    goto trigger_cleanup;
  }
  if( FUNC_0(VAR_24) ){
    FUNC_10(VAR_13, "cannot create triggers on virtual tables");
    goto trigger_cleanup;
  }



  VAR_25 = FUNC_17(VAR_26, VAR_28);
  if( !VAR_25 || VAR_5!=FUNC_4(VAR_13, VAR_25) ){
    goto trigger_cleanup;
  }
  FUNC_2( FUNC_19(VAR_26, VAR_27, 0) );
  if( !VAR_1 ){
    if( FUNC_15(&(VAR_26->aDb[VAR_27].pSchema->trigHash),VAR_25) ){
      if( !VAR_22 ){
        FUNC_10(VAR_13, "trigger %T already exists", VAR_28);
      }else{
        FUNC_2( !VAR_26->init.busy );
        FUNC_5(VAR_13, VAR_27);
      }
      goto trigger_cleanup;
    }
  }


  if( FUNC_23(VAR_24->zName, "sqlite_", 7)==0 ){
    FUNC_10(VAR_13, "cannot create trigger on system table");
    goto trigger_cleanup;
  }




  if( VAR_24->pSelect && VAR_16!=VAR_9 ){
    FUNC_10(VAR_13, "cannot create %s trigger on view: %S",
        (VAR_16 == VAR_6)?"BEFORE":"AFTER", VAR_19, 0);
    goto trigger_cleanup;
  }
  if( !VAR_24->pSelect && VAR_16==VAR_9 ){
    FUNC_10(VAR_13, "cannot create INSTEAD OF"
        " trigger on table: %S", VAR_19, 0);
    goto trigger_cleanup;
  }


  if( !VAR_1 ){
    int VAR_30 = FUNC_20(VAR_26, VAR_24->pSchema);
    int VAR_31 = VAR_3;
    const char *VAR_32 = VAR_26->aDb[VAR_30].zDbSName;
    const char *VAR_33 = VAR_21 ? VAR_26->aDb[1].zDbSName : VAR_32;
    if( VAR_30==1 || VAR_21 ) VAR_31 = VAR_2;
    if( FUNC_3(VAR_13, VAR_31, VAR_25, VAR_24->zName, VAR_33) ){
      goto trigger_cleanup;
    }
    if( FUNC_3(VAR_13, VAR_4, FUNC_1(VAR_30),0,VAR_32)){
      goto trigger_cleanup;
    }
  }







  if (VAR_16 == VAR_9){
    VAR_16 = VAR_6;
  }


  VAR_23 = (Trigger*)FUNC_7(VAR_26, sizeof(Trigger));
  if( VAR_23==0 ) goto trigger_cleanup;
  VAR_23->zName = VAR_25;
  VAR_25 = 0;
  VAR_23->table = FUNC_8(VAR_26, VAR_19->a[0].zName);
  VAR_23->pSchema = VAR_26->aDb[VAR_27].pSchema;
  VAR_23->pTabSchema = VAR_24->pSchema;
  VAR_23->op = (u8)VAR_17;
  VAR_23->tr_tm = VAR_16==VAR_6 ? VAR_12 : VAR_11;
  if( VAR_1 ){
    FUNC_18(VAR_13, VAR_23->table, VAR_19->a[0].zName);
    VAR_23->pWhen = VAR_20;
    VAR_20 = 0;
  }else{
    VAR_23->pWhen = FUNC_12(VAR_26, VAR_20, VAR_0);
  }
  VAR_23->pColumns = VAR_18;
  VAR_18 = 0;
  FUNC_2( VAR_13->pNewTrigger==0 );
  VAR_13->pNewTrigger = VAR_23;

trigger_cleanup:
  FUNC_6(VAR_26, VAR_25);
  FUNC_21(VAR_26, VAR_19);
  FUNC_16(VAR_26, VAR_18);
  FUNC_11(VAR_26, VAR_20);
  if( !VAR_13->pNewTrigger ){
    FUNC_9(VAR_26, VAR_23);
  }else{
    FUNC_2( VAR_13->pNewTrigger==VAR_23 );
  }
}
