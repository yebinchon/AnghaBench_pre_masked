
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_56__ TYPE_9__ ;
typedef struct TYPE_55__ TYPE_8__ ;
typedef struct TYPE_54__ TYPE_7__ ;
typedef struct TYPE_53__ TYPE_6__ ;
typedef struct TYPE_52__ TYPE_5__ ;
typedef struct TYPE_51__ TYPE_4__ ;
typedef struct TYPE_50__ TYPE_3__ ;
typedef struct TYPE_49__ TYPE_2__ ;
typedef struct TYPE_48__ TYPE_1__ ;
typedef struct TYPE_47__ TYPE_11__ ;
typedef struct TYPE_46__ TYPE_10__ ;


typedef int u8 ;
struct TYPE_50__ {int newTnum; scalar_t__ busy; } ;
struct TYPE_51__ {int mDbFlags; TYPE_3__ init; TYPE_11__* aDb; int mallocFailed; } ;
typedef TYPE_4__ sqlite3 ;
typedef int Vdbe ;
struct TYPE_52__ {char* z; scalar_t__ n; } ;
typedef TYPE_5__ Token ;
struct TYPE_53__ {int tabFlags; int tnum; scalar_t__ iPKey; scalar_t__ pSelect; scalar_t__ addColOffset; int zName; TYPE_8__* pSchema; scalar_t__ aCol; scalar_t__ nCol; TYPE_10__* pIndex; scalar_t__ pCheck; } ;
typedef TYPE_6__ Table ;
struct TYPE_49__ {int z; } ;
struct TYPE_56__ {int nMem; int nTab; int regRoot; TYPE_2__ sNameToken; TYPE_6__* pNewTable; int regRowid; TYPE_5__ sLastToken; scalar_t__ nErr; TYPE_4__* db; } ;
struct TYPE_55__ {int tblHash; } ;
struct TYPE_54__ {int iSDParm; int iSdst; int nSdst; } ;
struct TYPE_48__ {scalar_t__ pSeqTab; } ;
struct TYPE_47__ {int zDbSName; TYPE_1__* pSchema; } ;
struct TYPE_46__ {struct TYPE_46__* pNext; } ;
typedef TYPE_7__ SelectDest ;
typedef int Select ;
typedef TYPE_8__ Schema ;
typedef TYPE_9__ Parse ;
typedef TYPE_10__ Index ;
typedef TYPE_11__ Db ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_9__*,TYPE_6__*) ;
 char* FUNC_4 (TYPE_4__*,TYPE_6__*) ;
 int FUNC_5 (TYPE_10__*) ;
 int FUNC_6 (TYPE_6__*) ;
 scalar_t__ FUNC_7 (TYPE_4__*,int ) ;
 int FUNC_8 (TYPE_9__*,int) ;
 int FUNC_9 (TYPE_4__*,char*) ;
 int FUNC_10 (TYPE_4__*,TYPE_6__*) ;
 int FUNC_11 (TYPE_9__*,char*,...) ;
 int * FUNC_12 (TYPE_9__*) ;
 TYPE_6__* FUNC_13 (int *,int ,TYPE_6__*) ;
 char* FUNC_14 (TYPE_4__*,char*,char*,...) ;
 int FUNC_15 (TYPE_9__*) ;
 int FUNC_16 (TYPE_9__*,char*,int ,...) ;
 int FUNC_17 (TYPE_4__*) ;
 scalar_t__ FUNC_18 (TYPE_6__*) ;
 int FUNC_19 (TYPE_9__*,TYPE_6__*,int ,int ,scalar_t__) ;
 TYPE_6__* FUNC_20 (TYPE_9__*,int *) ;
 int FUNC_21 (TYPE_4__*,int,int ) ;
 int FUNC_22 (TYPE_4__*,TYPE_8__*) ;
 int FUNC_23 (TYPE_9__*,int *,TYPE_7__*) ;
 int FUNC_24 (TYPE_7__*,int ,int) ;
 int FUNC_25 (int *,TYPE_6__*,int ) ;
 scalar_t__ FUNC_26 (char const*,int) ;
 int FUNC_27 (int *,int ,int) ;
 int FUNC_28 (int *,int ,int,int) ;
 int FUNC_29 (int *,int ,int,int,int) ;
 int FUNC_30 (int *,int,char*) ;
 int FUNC_31 (int *,int ) ;
 int FUNC_32 (int *) ;
 int FUNC_33 (int *,int) ;
 int FUNC_34 (int *,int) ;
 int FUNC_35 (int *,int) ;

void FUNC_36(
  Parse *VAR_18,
  Token *VAR_19,
  Token *VAR_20,
  u8 VAR_21,
  Select *VAR_22
){
  Table *VAR_23;
  sqlite3 *VAR_24 = VAR_18->db;
  int VAR_25;
  Index *VAR_26;

  if( VAR_20==0 && VAR_22==0 ){
    return;
  }
  FUNC_2( !VAR_24->mallocFailed );
  VAR_23 = VAR_18->pNewTable;
  if( VAR_23==0 ) return;

  if( VAR_22==0 && FUNC_7(VAR_24, VAR_23->zName) ){
    VAR_23->tabFlags |= VAR_16;
  }
  if( VAR_24->init.busy ){
    if( VAR_22 ){
      FUNC_11(VAR_18, "");
      return;
    }
    VAR_23->tnum = VAR_24->init.newTnum;
    if( VAR_23->tnum==1 ) VAR_23->tabFlags |= VAR_15;
  }

  FUNC_2( (VAR_23->tabFlags & VAR_13)==0
       || VAR_23->iPKey>=0 || FUNC_18(VAR_23)!=0 );
  FUNC_2( (VAR_23->tabFlags & VAR_13)!=0
       || (VAR_23->iPKey<0 && FUNC_18(VAR_23)==0) );


  if( VAR_21 & VAR_17 ){
    if( (VAR_23->tabFlags & VAR_12) ){
      FUNC_11(VAR_18,
          "AUTOINCREMENT not allowed on WITHOUT ROWID tables");
      return;
    }
    if( (VAR_23->tabFlags & VAR_13)==0 ){
      FUNC_11(VAR_18, "PRIMARY KEY missing on table %s", VAR_23->zName);
    }else{
      VAR_23->tabFlags |= VAR_17 | VAR_14;
      FUNC_3(VAR_18, VAR_23);
    }
  }

  VAR_25 = FUNC_22(VAR_24, VAR_23->pSchema);




  if( VAR_23->pCheck ){
    FUNC_19(VAR_18, VAR_23, VAR_2, 0, VAR_23->pCheck);
  }



  FUNC_6(VAR_23);
  for(VAR_26=VAR_23->pIndex; VAR_26; VAR_26=VAR_26->pNext){
    FUNC_5(VAR_26);
  }







  if( !VAR_24->init.busy ){
    int VAR_27;
    Vdbe *VAR_28;
    char *VAR_29;
    char *VAR_30;
    char *VAR_31;

    VAR_28 = FUNC_12(VAR_18);
    if( FUNC_0(VAR_28==0) ) return;

    FUNC_27(VAR_28, VAR_4, 0);




    if( VAR_23->pSelect==0 ){

      VAR_29 = "table";
      VAR_30 = "TABLE";

    }else{

      VAR_29 = "view";
      VAR_30 = "VIEW";

    }
    if( VAR_22 ){
      SelectDest VAR_32;
      int VAR_33;
      int VAR_34;
      int VAR_35;
      int VAR_36;
      int VAR_37;
      Table *VAR_38;

      VAR_33 = ++VAR_18->nMem;
      VAR_35 = ++VAR_18->nMem;
      VAR_36 = ++VAR_18->nMem;
      FUNC_2(VAR_18->nTab==1);
      FUNC_15(VAR_18);
      FUNC_29(VAR_28, VAR_9, 1, VAR_18->regRoot, VAR_25);
      FUNC_31(VAR_28, VAR_3);
      VAR_18->nTab = 2;
      VAR_34 = FUNC_32(VAR_28) + 1;
      FUNC_29(VAR_28, VAR_5, VAR_33, 0, VAR_34);
      if( VAR_18->nErr ) return;
      VAR_38 = FUNC_20(VAR_18, VAR_22);
      if( VAR_38==0 ) return;
      FUNC_2( VAR_23->aCol==0 );
      VAR_23->nCol = VAR_38->nCol;
      VAR_23->aCol = VAR_38->aCol;
      VAR_38->nCol = 0;
      VAR_38->aCol = 0;
      FUNC_10(VAR_24, VAR_38);
      FUNC_24(&VAR_32, VAR_11, VAR_33);
      FUNC_23(VAR_18, VAR_22, &VAR_32);
      if( VAR_18->nErr ) return;
      FUNC_33(VAR_28, VAR_33);
      FUNC_35(VAR_28, VAR_34 - 1);
      VAR_37 = FUNC_27(VAR_28, VAR_10, VAR_32.iSDParm);
      FUNC_1(VAR_28);
      FUNC_29(VAR_28, VAR_7, VAR_32.iSdst, VAR_32.nSdst, VAR_35);
      FUNC_25(VAR_28, VAR_23, 0);
      FUNC_28(VAR_28, VAR_8, 1, VAR_36);
      FUNC_29(VAR_28, VAR_6, 1, VAR_35, VAR_36);
      FUNC_34(VAR_28, VAR_37);
      FUNC_35(VAR_28, VAR_37);
      FUNC_27(VAR_28, VAR_4, 1);
    }


    if( VAR_22 ){
      VAR_31 = FUNC_4(VAR_24, VAR_23);
    }else{
      Token *VAR_39 = VAR_21 ? &VAR_18->sLastToken : VAR_20;
      VAR_27 = (int)(VAR_39->z - VAR_18->sNameToken.z);
      if( VAR_39->z[0]!=';' ) VAR_27 += VAR_39->n;
      VAR_31 = FUNC_14(VAR_24,
          "CREATE %s %.*s", VAR_30, VAR_27, VAR_18->sNameToken.z
      );
    }





    FUNC_16(VAR_18,
      "UPDATE %Q.%s "
         "SET type='%s', name=%Q, tbl_name=%Q, rootpage=#%d, sql=%Q "
       "WHERE rowid=#%d",
      VAR_24->aDb[VAR_25].zDbSName, VAR_1,
      VAR_29,
      VAR_23->zName,
      VAR_23->zName,
      VAR_18->regRoot,
      VAR_31,
      VAR_18->regRowid
    );
    FUNC_9(VAR_24, VAR_31);
    FUNC_8(VAR_18, VAR_25);





    if( (VAR_23->tabFlags & VAR_12)!=0 ){
      Db *VAR_40 = &VAR_24->aDb[VAR_25];
      FUNC_2( FUNC_21(VAR_24, VAR_25, 0) );
      if( VAR_40->pSchema->pSeqTab==0 ){
        FUNC_16(VAR_18,
          "CREATE TABLE %Q.sqlite_sequence(name,seq)",
          VAR_40->zDbSName
        );
      }
    }



    FUNC_30(VAR_28, VAR_25,
           FUNC_14(VAR_24, "tbl_name='%q' AND type!='trigger'", VAR_23->zName));
  }




  if( VAR_24->init.busy ){
    Table *VAR_41;
    Schema *VAR_42 = VAR_23->pSchema;
    FUNC_2( FUNC_21(VAR_24, VAR_25, 0) );
    VAR_41 = FUNC_13(&VAR_42->tblHash, VAR_23->zName, VAR_23);
    if( VAR_41 ){
      FUNC_2( VAR_23==VAR_41 );
      FUNC_17(VAR_24);
      return;
    }
    VAR_18->pNewTable = 0;
    VAR_24->mDbFlags |= VAR_0;


    if( !VAR_23->pSelect ){
      const char *VAR_43 = (const char *)VAR_18->sNameToken.z;
      int VAR_44;
      FUNC_2( !VAR_22 && VAR_19 && VAR_20 );
      if( VAR_19->z==0 ){
        VAR_19 = VAR_20;
      }
      VAR_44 = (int)((const char *)VAR_19->z - VAR_43);
      VAR_23->addColOffset = 13 + FUNC_26(VAR_43, VAR_44);
    }

  }
}
