
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_46__ TYPE_9__ ;
typedef struct TYPE_45__ TYPE_8__ ;
typedef struct TYPE_44__ TYPE_7__ ;
typedef struct TYPE_43__ TYPE_6__ ;
typedef struct TYPE_42__ TYPE_5__ ;
typedef struct TYPE_41__ TYPE_4__ ;
typedef struct TYPE_40__ TYPE_3__ ;
typedef struct TYPE_39__ TYPE_2__ ;
typedef struct TYPE_38__ TYPE_1__ ;
typedef struct TYPE_37__ TYPE_19__ ;
typedef struct TYPE_36__ TYPE_12__ ;
typedef struct TYPE_35__ TYPE_11__ ;
typedef struct TYPE_34__ TYPE_10__ ;


typedef int u8 ;
struct SrcList_item {scalar_t__ iCursor; int pTab; } ;
struct TYPE_42__ {TYPE_9__* pNC; } ;
struct TYPE_43__ {TYPE_8__* pParse; TYPE_5__ u; } ;
typedef TYPE_6__ Walker ;
struct TYPE_46__ {int ncFlags; int nRef; struct TYPE_46__* pNext; TYPE_7__* pSrcList; int nErr; TYPE_8__* pParse; } ;
struct TYPE_45__ {scalar_t__ nTab; TYPE_19__* db; scalar_t__ nErr; int explain; } ;
struct TYPE_44__ {scalar_t__ nAlloc; int nSrc; struct SrcList_item* a; } ;
struct TYPE_41__ {TYPE_11__* pList; int pSelect; } ;
struct TYPE_40__ {TYPE_12__* pExpr; } ;
struct TYPE_39__ {int busy; } ;
struct TYPE_38__ {char* zToken; } ;
struct TYPE_37__ {scalar_t__ mallocFailed; TYPE_2__ init; } ;
struct TYPE_36__ {int op; int iTable; int iColumn; struct TYPE_36__* pRight; TYPE_4__ x; struct TYPE_36__* pLeft; int op2; TYPE_1__ u; int affinity; int pTab; } ;
struct TYPE_35__ {int nExpr; TYPE_3__* a; } ;
struct TYPE_34__ {int funcFlags; unsigned char* zName; int xFinalize; } ;
typedef TYPE_7__ SrcList ;
typedef TYPE_8__ Parse ;
typedef TYPE_9__ NameContext ;
typedef TYPE_10__ FuncDef ;
typedef TYPE_11__ ExprList ;
typedef TYPE_12__ Expr ;


 int FUNC_0 (TYPE_19__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (TYPE_12__*,int) ;
 int FUNC_2 (TYPE_12__*,int) ;
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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int const VAR_21 ;

 int VAR_22 ;
 int const VAR_23 ;



 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_12__*) ;
 int FUNC_5 (TYPE_8__*,char const*,char const*,char const*,TYPE_9__*,TYPE_12__*) ;
 int FUNC_6 (TYPE_8__*,TYPE_9__*,char*,int) ;
 int FUNC_7 (TYPE_8__*,int ,int ,unsigned char*,int ) ;
 int FUNC_8 (TYPE_8__*,char*,...) ;
 int FUNC_9 (TYPE_12__*) ;
 TYPE_10__* FUNC_10 (TYPE_19__*,char const*,int,int ,int ) ;
 int FUNC_11 (TYPE_12__*,TYPE_7__*) ;
 int FUNC_12 (char const*) ;
 int FUNC_13 (TYPE_6__*,TYPE_11__*) ;
 int FUNC_14 (TYPE_6__*,int ) ;
 int FUNC_15 (int) ;

__attribute__((used)) static int FUNC_16(Walker *VAR_27, Expr *VAR_28){
  NameContext *VAR_29;
  Parse *VAR_30;

  VAR_29 = VAR_27->u.pNC;
  FUNC_3( VAR_29!=0 );
  VAR_30 = VAR_29->pParse;
  FUNC_3( VAR_30==VAR_27->pParse );

  if( FUNC_1(VAR_28, VAR_1) ) return VAR_26;
  FUNC_2(VAR_28, VAR_1);

  if( VAR_29->pSrcList && VAR_29->pSrcList->nAlloc>0 ){
    SrcList *VAR_31 = VAR_29->pSrcList;
    int VAR_32;
    for(VAR_32=0; VAR_32<VAR_29->pSrcList->nSrc; VAR_32++){
      FUNC_3( VAR_31->a[VAR_32].iCursor>=0 && VAR_31->a[VAR_32].iCursor<VAR_30->nTab);
    }
  }

  switch( VAR_28->op ){
    case 137:
    case 143: {
      const char *VAR_33;
      const char *VAR_34;
      const char *VAR_35;
      Expr *VAR_36;

      if( VAR_28->op==137 ){
        VAR_35 = 0;
        VAR_34 = 0;
        VAR_33 = VAR_28->u.zToken;
      }else{
        FUNC_6(VAR_30, VAR_29, "the \".\" operator", VAR_8);
        VAR_36 = VAR_28->pRight;
        if( VAR_36->op==137 ){
          VAR_35 = 0;
          VAR_34 = VAR_28->pLeft->u.zToken;
          VAR_33 = VAR_36->u.zToken;
        }else{
          FUNC_3( VAR_36->op==143 );
          VAR_35 = VAR_28->pLeft->u.zToken;
          VAR_34 = VAR_36->pLeft->u.zToken;
          VAR_33 = VAR_36->pRight->u.zToken;
        }
      }
      return FUNC_5(VAR_30, VAR_35, VAR_34, VAR_33, VAR_29, VAR_28);
    }



    case 140: {
      ExprList *VAR_37 = VAR_28->x.pList;
      int VAR_38 = VAR_37 ? VAR_37->nExpr : 0;
      int VAR_39 = 0;
      int VAR_40 = 0;
      int VAR_41 = 0;
      int VAR_42;
      const char *VAR_43;
      FuncDef *VAR_44;
      u8 VAR_45 = FUNC_0(VAR_30->db);

      FUNC_3( !FUNC_1(VAR_28, VAR_5) );
      VAR_43 = VAR_28->u.zToken;
      VAR_42 = FUNC_12(VAR_43);
      VAR_44 = FUNC_10(VAR_30->db, VAR_43, VAR_38, VAR_45, 0);
      if( VAR_44==0 ){
        VAR_44 = FUNC_10(VAR_30->db, VAR_43, -2, VAR_45, 0);
        if( VAR_44==0 ){
          VAR_39 = 1;
        }else{
          VAR_40 = 1;
        }
      }else{
        VAR_41 = VAR_44->xFinalize!=0;
        if( VAR_44->funcFlags & VAR_19 ){
          FUNC_2(VAR_28, VAR_3|VAR_2);
          if( VAR_38==2 ){
            VAR_28->iTable = FUNC_4(VAR_37->a[1].pExpr);
            if( VAR_28->iTable<0 ){
              FUNC_8(VAR_30,
                "second argument to likelihood() must be a "
                "constant between 0.0 and 1.0");
              VAR_29->nErr++;
            }
          }else{
            VAR_28->iTable = VAR_44->zName[0]=='u' ? 8388608 : 125829120;
          }
        }

        {
          int VAR_46 = FUNC_7(VAR_30, VAR_15, 0,VAR_44->zName,0);
          if( VAR_46!=VAR_20 ){
            if( VAR_46==VAR_14 ){
              FUNC_8(VAR_30, "not authorized to use function: %s",
                                      VAR_44->zName);
              VAR_29->nErr++;
            }
            VAR_28->op = VAR_23;
            return VAR_26;
          }
        }

        if( VAR_44->funcFlags & (VAR_16|VAR_18) ){



          FUNC_2(VAR_28,VAR_0);
        }
        if( (VAR_44->funcFlags & VAR_16)==0 ){



          FUNC_6(VAR_30, VAR_29, "non-deterministic functions",
                   VAR_8|VAR_11);
        }
      }
      if( VAR_41 && (VAR_29->ncFlags & VAR_6)==0 ){
        FUNC_8(VAR_30, "misuse of aggregate function %.*s()", VAR_42,VAR_43);
        VAR_29->nErr++;
        VAR_41 = 0;
      }else if( VAR_39 && VAR_30->db->init.busy==0



      ){
        FUNC_8(VAR_30, "no such function: %.*s", VAR_42, VAR_43);
        VAR_29->nErr++;
      }else if( VAR_40 ){
        FUNC_8(VAR_30,"wrong number of arguments to function %.*s()",
             VAR_42, VAR_43);
        VAR_29->nErr++;
      }
      if( VAR_41 ) VAR_29->ncFlags &= ~VAR_6;
      FUNC_13(VAR_27, VAR_37);
      if( VAR_41 ){
        NameContext *VAR_47 = VAR_29;
        VAR_28->op = VAR_21;
        VAR_28->op2 = 0;
        while( VAR_47 && !FUNC_11(VAR_28, VAR_47->pSrcList) ){
          VAR_28->op2++;
          VAR_47 = VAR_47->pNext;
        }
        FUNC_3( VAR_44!=0 );
        if( VAR_47 ){
          FUNC_3( VAR_17==VAR_10 );
          FUNC_15( (VAR_44->funcFlags & VAR_17)!=0 );
          VAR_47->ncFlags |= VAR_7 | (VAR_44->funcFlags & VAR_17);

        }
        VAR_29->ncFlags |= VAR_6;
      }



      return VAR_26;
    }

    case 129:
    case 141: FUNC_15( VAR_28->op==141 );

    case 136: {
      FUNC_15( VAR_28->op==136 );
      if( FUNC_1(VAR_28, VAR_5) ){
        int VAR_48 = VAR_29->nRef;
        FUNC_6(VAR_30, VAR_29, "subqueries", VAR_9|VAR_11|VAR_8);
        FUNC_14(VAR_27, VAR_28->x.pSelect);
        FUNC_3( VAR_29->nRef>=VAR_48 );
        if( VAR_48!=VAR_29->nRef ){
          FUNC_2(VAR_28, VAR_4);
          VAR_29->ncFlags |= VAR_12;
        }
      }
      break;
    }
    case 128: {
      FUNC_6(VAR_30, VAR_29, "parameters", VAR_9|VAR_11|VAR_8);
      break;
    }
    case 144:
    case 142:
    case 131:
    case 132:
    case 133:
    case 138:
    case 139:
    case 135:
    case 134: {
      int VAR_49, VAR_50;
      if( VAR_30->db->mallocFailed ) break;
      FUNC_3( VAR_28->pLeft!=0 );
      VAR_49 = FUNC_9(VAR_28->pLeft);
      if( VAR_28->op==144 ){
        VAR_50 = FUNC_9(VAR_28->x.pList->a[0].pExpr);
        if( VAR_50==VAR_49 ){
          VAR_50 = FUNC_9(VAR_28->x.pList->a[1].pExpr);
        }
      }else{
        FUNC_3( VAR_28->pRight!=0 );
        VAR_50 = FUNC_9(VAR_28->pRight);
      }
      if( VAR_49!=VAR_50 ){
        FUNC_15( VAR_28->op==142 );
        FUNC_15( VAR_28->op==131 );
        FUNC_15( VAR_28->op==132 );
        FUNC_15( VAR_28->op==133 );
        FUNC_15( VAR_28->op==138 );
        FUNC_15( VAR_28->op==139 );
        FUNC_15( VAR_28->op==135 );
        FUNC_15( VAR_28->op==134 );
        FUNC_15( VAR_28->op==144 );
        FUNC_8(VAR_30, "row value misused");
      }
      break;
    }
  }
  return (VAR_30->nErr || VAR_30->db->mallocFailed) ? VAR_24 : VAR_25;
}
