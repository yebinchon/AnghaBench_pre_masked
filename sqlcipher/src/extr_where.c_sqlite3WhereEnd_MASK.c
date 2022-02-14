
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_39__ TYPE_9__ ;
typedef struct TYPE_38__ TYPE_8__ ;
typedef struct TYPE_37__ TYPE_7__ ;
typedef struct TYPE_36__ TYPE_6__ ;
typedef struct TYPE_35__ TYPE_5__ ;
typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_1__ ;
typedef struct TYPE_30__ TYPE_14__ ;
typedef struct TYPE_29__ TYPE_13__ ;
typedef struct TYPE_28__ TYPE_12__ ;
typedef struct TYPE_27__ TYPE_11__ ;
typedef struct TYPE_26__ TYPE_10__ ;


struct TYPE_32__ {scalar_t__ viaCoroutine; } ;
struct SrcList_item {scalar_t__ iCursor; int regResult; TYPE_2__ fg; TYPE_11__* pTab; } ;
struct InLoop {int addrInTop; scalar_t__ eEndLoopOp; int nPrefix; int iBase; int iCur; } ;
struct TYPE_36__ {int flags; int mallocFailed; } ;
typedef TYPE_6__ sqlite3 ;
struct TYPE_33__ {int nIdxCol; TYPE_14__* pIndex; } ;
struct TYPE_34__ {TYPE_3__ btree; } ;
struct TYPE_37__ {int wsFlags; TYPE_4__ u; } ;
typedef TYPE_7__ WhereLoop ;
struct TYPE_31__ {scalar_t__ nIn; struct InLoop* aInLoop; } ;
struct TYPE_35__ {TYPE_14__* pCovidx; TYPE_1__ in; } ;
struct TYPE_38__ {scalar_t__ op; scalar_t__ iIdxCur; int p2; scalar_t__ p1; int p3; int addrSkip; int addrLikeRep; int iLikeRepCntr; scalar_t__ iLeftJoin; scalar_t__ iTabCur; size_t iFrom; int addrFirst; int addrBody; TYPE_5__ u; TYPE_7__* pWLoop; int addrBrk; int addrNxt; int addrCont; int p5; } ;
typedef TYPE_8__ WhereLevel ;
struct TYPE_39__ {int nLevel; scalar_t__ eDistinct; int wctrlFlags; scalar_t__ eOnePass; scalar_t__* aiCurOnePass; int savedNQueryLoop; TYPE_8__* a; int iBreak; TYPE_12__* pTabList; TYPE_13__* pParse; } ;
typedef TYPE_9__ WhereInfo ;
struct TYPE_26__ {scalar_t__ p1; scalar_t__ opcode; int p2; } ;
typedef TYPE_10__ VdbeOp ;
typedef int Vdbe ;
struct TYPE_27__ {int tabFlags; scalar_t__ pSelect; int zName; } ;
typedef TYPE_11__ Table ;
struct TYPE_30__ {int* aiRowLogEst; int* aiColumn; TYPE_11__* pTable; int zName; scalar_t__ hasStat1; } ;
struct TYPE_29__ {int nMem; int nQueryLoop; TYPE_6__* db; int * pVdbe; } ;
struct TYPE_28__ {int nSrc; struct SrcList_item* a; } ;
typedef TYPE_12__ SrcList ;
typedef TYPE_13__ Parse ;
typedef TYPE_14__ Index ;


 int FUNC_0 (TYPE_11__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_1 (TYPE_6__*,int,TYPE_10__*) ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (TYPE_14__*,int) ;
 TYPE_14__* FUNC_9 (TYPE_11__*) ;
 int FUNC_10 (int *,int ,scalar_t__) ;
 int FUNC_11 (int *,scalar_t__,int,int) ;
 int FUNC_12 (int *,scalar_t__,scalar_t__,int,int) ;
 int FUNC_13 (int *,int,scalar_t__,int,int,int) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *) ;
 TYPE_10__* FUNC_16 (int *,int) ;
 int FUNC_17 (int *,int) ;
 int FUNC_18 (int *,int) ;
 int FUNC_19 (int *,int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (TYPE_13__*,int,scalar_t__,int ,int ) ;
 int FUNC_22 (TYPE_6__*,TYPE_9__*) ;

void FUNC_23(WhereInfo *VAR_31){
  Parse *VAR_32 = VAR_31->pParse;
  Vdbe *VAR_33 = VAR_32->pVdbe;
  int VAR_34;
  WhereLevel *VAR_35;
  WhereLoop *VAR_36;
  SrcList *VAR_37 = VAR_31->pTabList;
  sqlite3 *VAR_38 = VAR_32->db;



  FUNC_5((VAR_33, "End WHERE-core"));
  for(VAR_34=VAR_31->nLevel-1; VAR_34>=0; VAR_34--){
    int VAR_39;
    VAR_35 = &VAR_31->a[VAR_34];
    VAR_36 = VAR_35->pWLoop;
    if( VAR_35->op!=VAR_11 ){

      int VAR_40 = 0;
      Index *VAR_41;
      int VAR_42;
      if( VAR_31->eDistinct==VAR_23
       && VAR_34==VAR_31->nLevel-1
       && (VAR_36->wsFlags & VAR_25)!=0
       && (VAR_41 = VAR_36->u.btree.pIndex)->hasStat1
       && (VAR_42 = VAR_36->u.btree.nIdxCol)>0
       && VAR_41->aiRowLogEst[VAR_42]>=36
      ){
        int VAR_43 = VAR_32->nMem+1;
        int VAR_44, VAR_45;
        for(VAR_44=0; VAR_44<VAR_42; VAR_44++){
          FUNC_12(VAR_33, VAR_2, VAR_35->iIdxCur, VAR_44, VAR_43+VAR_44);
        }
        VAR_32->nMem += VAR_42+1;
        VAR_45 = VAR_35->op==VAR_14 ? VAR_18 : VAR_17;
        VAR_40 = FUNC_13(VAR_33, VAR_45, VAR_35->iIdxCur, 0, VAR_43, VAR_42);
        FUNC_4(VAR_33, VAR_45==VAR_18);
        FUNC_4(VAR_33, VAR_45==VAR_17);
        FUNC_11(VAR_33, VAR_5, 1, VAR_35->p2);
      }


      FUNC_19(VAR_33, VAR_35->addrCont);
      FUNC_12(VAR_33, VAR_35->op, VAR_35->p1, VAR_35->p2, VAR_35->p3);
      FUNC_14(VAR_33, VAR_35->p5);
      FUNC_3(VAR_33);
      FUNC_4(VAR_33, VAR_35->op==VAR_10);
      FUNC_4(VAR_33, VAR_35->op==VAR_14);
      FUNC_4(VAR_33, VAR_35->op==VAR_19);

      if( VAR_40 ) FUNC_18(VAR_33, VAR_40);

    }else{
      FUNC_19(VAR_33, VAR_35->addrCont);
    }
    if( VAR_36->wsFlags & VAR_26 && VAR_35->u.in.nIn>0 ){
      struct InLoop *VAR_46;
      int VAR_47;
      FUNC_19(VAR_33, VAR_35->addrNxt);
      for(VAR_47=VAR_35->u.in.nIn, VAR_46=&VAR_35->u.in.aInLoop[VAR_47-1]; VAR_47>0; VAR_47--, VAR_46--){
        FUNC_18(VAR_33, VAR_46->addrInTop+1);
        if( VAR_46->eEndLoopOp!=VAR_11 ){
          if( VAR_46->nPrefix ){
            FUNC_6( VAR_36->wsFlags & VAR_27 );
            FUNC_13(VAR_33, VAR_7, VAR_35->iIdxCur,
                              FUNC_15(VAR_33)+2,
                              VAR_46->iBase, VAR_46->nPrefix);
            FUNC_3(VAR_33);
          }
          FUNC_11(VAR_33, VAR_46->eEndLoopOp, VAR_46->iCur, VAR_46->addrInTop);
          FUNC_3(VAR_33);
          FUNC_4(VAR_33, VAR_46->eEndLoopOp==VAR_14);
          FUNC_4(VAR_33, VAR_46->eEndLoopOp==VAR_10);
        }
        FUNC_18(VAR_33, VAR_46->addrInTop-1);
      }
    }
    FUNC_19(VAR_33, VAR_35->addrBrk);
    if( VAR_35->addrSkip ){
      FUNC_17(VAR_33, VAR_35->addrSkip);
      FUNC_2((VAR_33, "next skip-scan on %s", VAR_36->u.btree.pIndex->zName));
      FUNC_18(VAR_33, VAR_35->addrSkip);
      FUNC_18(VAR_33, VAR_35->addrSkip-2);
    }

    if( VAR_35->addrLikeRep ){
      FUNC_11(VAR_33, VAR_3, (int)(VAR_35->iLikeRepCntr>>1),
                        VAR_35->addrLikeRep);
      FUNC_3(VAR_33);
    }

    if( VAR_35->iLeftJoin ){
      int VAR_48 = VAR_36->wsFlags;
      VAR_39 = FUNC_10(VAR_33, VAR_9, VAR_35->iLeftJoin); FUNC_3(VAR_33);
      FUNC_6( (VAR_48 & VAR_24)==0 || (VAR_48 & VAR_25)!=0 );
      if( (VAR_48 & VAR_24)==0 ){
        FUNC_6( VAR_35->iTabCur==VAR_37->a[VAR_35->iFrom].iCursor );
        FUNC_10(VAR_33, VAR_12, VAR_35->iTabCur);
      }
      if( (VAR_48 & VAR_25)
       || ((VAR_48 & VAR_29) && VAR_35->u.pCovidx)
      ){
        FUNC_10(VAR_33, VAR_12, VAR_35->iIdxCur);
      }
      if( VAR_35->op==VAR_15 ){
        FUNC_11(VAR_33, VAR_4, VAR_35->p1, VAR_35->addrFirst);
      }else{
        FUNC_17(VAR_33, VAR_35->addrFirst);
      }
      FUNC_18(VAR_33, VAR_39);
    }
    FUNC_5((VAR_33, "End WHERE-loop%d: %s", VAR_34,
                     VAR_31->pTabList->a[VAR_35->iFrom].pTab->zName));
  }




  FUNC_19(VAR_33, VAR_31->iBreak);

  FUNC_6( VAR_31->nLevel<=VAR_37->nSrc );
  for(VAR_34=0, VAR_35=VAR_31->a; VAR_34<VAR_31->nLevel; VAR_34++, VAR_35++){
    int VAR_49, VAR_50;
    VdbeOp *VAR_51;
    Index *VAR_52 = 0;
    struct SrcList_item *VAR_53 = &VAR_37->a[VAR_35->iFrom];
    Table *VAR_54 = VAR_53->pTab;
    FUNC_6( VAR_54!=0 );
    VAR_36 = VAR_35->pWLoop;





    if( VAR_53->fg.viaCoroutine ){
      FUNC_20( VAR_32->db->mallocFailed );
      FUNC_21(VAR_32, VAR_35->addrBody, VAR_35->iTabCur,
                            VAR_53->regResult, 0);
      continue;
    }
    if( VAR_36->wsFlags & (VAR_25|VAR_24) ){
      VAR_52 = VAR_36->u.btree.pIndex;
    }else if( VAR_36->wsFlags & VAR_29 ){
      VAR_52 = VAR_35->u.pCovidx;
    }
    if( VAR_52
     && (VAR_31->eOnePass==VAR_0 || !FUNC_0(VAR_52->pTable))
     && !VAR_38->mallocFailed
    ){
      VAR_50 = FUNC_15(VAR_33);
      VAR_49 = VAR_35->addrBody;





      VAR_51 = FUNC_16(VAR_33, VAR_49);
      for(; VAR_49<VAR_50; VAR_49++, VAR_51++){
        if( VAR_51->p1!=VAR_35->iTabCur ) continue;
        if( VAR_51->opcode==VAR_2



        ){
          int VAR_55 = VAR_51->p2;
          FUNC_6( VAR_52->pTable==VAR_54 );
          if( !FUNC_0(VAR_54) ){
            Index *VAR_56 = FUNC_9(VAR_54);
            VAR_55 = VAR_56->aiColumn[VAR_55];
            FUNC_6( VAR_55>=0 );
          }
          VAR_55 = FUNC_8(VAR_52, VAR_55);
          if( VAR_55>=0 ){
            VAR_51->p2 = VAR_55;
            VAR_51->p1 = VAR_35->iIdxCur;
            FUNC_1(VAR_38, VAR_49, VAR_51);
          }
          FUNC_6( (VAR_36->wsFlags & VAR_24)==0 || VAR_55>=0
              || VAR_31->eOnePass );
        }else if( VAR_51->opcode==VAR_16 ){
          VAR_51->p1 = VAR_35->iIdxCur;
          VAR_51->opcode = VAR_6;
          FUNC_1(VAR_38, VAR_49, VAR_51);
        }else if( VAR_51->opcode==VAR_8 ){
          VAR_51->p1 = VAR_35->iIdxCur;
          FUNC_1(VAR_38, VAR_49, VAR_51);
        }
      }



    }
  }



  VAR_32->nQueryLoop = VAR_31->savedNQueryLoop;
  FUNC_22(VAR_38, VAR_31);
  return;
}
