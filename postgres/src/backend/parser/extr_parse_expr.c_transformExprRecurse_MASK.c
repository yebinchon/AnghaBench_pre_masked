
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int XmlSerialize ;
typedef int XmlExpr ;
typedef int Value ;
typedef int TypeCast ;
struct TYPE_18__ {int location; int val; } ;
struct TYPE_17__ {int kind; int * lexpr; } ;
struct TYPE_16__ {int * arg; } ;
struct TYPE_15__ {int * arg; int argisrow; int location; } ;
struct TYPE_14__ {int location; } ;
typedef int SubLink ;
typedef TYPE_1__ SetToDefault ;
typedef int SQLValueFunction ;
typedef int RowExpr ;
typedef int ParseState ;
typedef int ParamRef ;
typedef TYPE_2__ NullTest ;
typedef int Node ;
typedef TYPE_3__ NamedArgExpr ;
typedef int MultiAssignRef ;
typedef int MinMaxExpr ;
typedef int GroupingFunc ;
typedef int FuncCall ;
typedef int Expr ;
typedef int CurrentOfExpr ;
typedef int ColumnRef ;
typedef int CollateClause ;
typedef int CoalesceExpr ;
typedef int CaseExpr ;
typedef int BooleanTest ;
typedef int BoolExpr ;
typedef int A_Indirection ;
typedef TYPE_4__ A_Expr ;
typedef TYPE_5__ A_Const ;
typedef int A_ArrayExpr ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *,int ,char*,int *,int *,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int *,int ) ;
 int FUNC_8 (int *) ;
 int VAR_4 ;
 int FUNC_9 (int *,int ) ;
 int * FUNC_10 (int *,TYPE_4__*) ;
 int * FUNC_11 (int *,TYPE_4__*) ;
 int * FUNC_12 (int *,TYPE_4__*) ;
 int * FUNC_13 (int *,TYPE_4__*) ;
 int * FUNC_14 (int *,TYPE_4__*) ;
 int * FUNC_15 (int *,TYPE_4__*) ;
 int * FUNC_16 (int *,TYPE_4__*) ;
 int * FUNC_17 (int *,TYPE_4__*) ;
 int * FUNC_18 (int *,int *,int ,int ,int) ;
 int * FUNC_19 (int *,int *) ;
 int * FUNC_20 (int *,int *) ;
 int * FUNC_21 (int *,int *) ;
 int * FUNC_22 (int *,int *) ;
 int * FUNC_23 (int *,int *) ;
 int * FUNC_24 (int *,int *) ;
 int * FUNC_25 (int *,int *) ;
 int * FUNC_26 (int *,int *) ;
 int * FUNC_27 (int *,int *) ;
 int * FUNC_28 (int *,int *) ;
 int * FUNC_29 (int *,int *) ;
 int * FUNC_30 (int *,int *) ;
 int * FUNC_31 (int *,int *) ;
 int * FUNC_32 (int *,int *,int) ;
 int * FUNC_33 (int *,int *) ;
 int * FUNC_34 (int *,int *) ;
 int * FUNC_35 (int *,int *) ;
 int * FUNC_36 (int *,int *) ;
 int * FUNC_37 (int *,int *) ;
 int FUNC_38 (int ) ;

__attribute__((used)) static Node *
FUNC_39(ParseState *VAR_5, Node *VAR_6)
{
 Node *VAR_7;

 if (VAR_6 == ((void*)0))
  return ((void*)0);


 FUNC_0();

 switch (FUNC_8(VAR_6))
 {
  case 144:
   VAR_7 = FUNC_24(VAR_5, (ColumnRef *) VAR_6);
   break;

  case 136:
   VAR_7 = FUNC_31(VAR_5, (ParamRef *) VAR_6);
   break;

  case 153:
   {
    A_Const *VAR_8 = (A_Const *) VAR_6;
    Value *VAR_9 = &VAR_8->val;

    VAR_7 = (Node *) FUNC_7(VAR_5, VAR_9, VAR_8->location);
    break;
   }

  case 151:
   VAR_7 = FUNC_28(VAR_5, (A_Indirection *) VAR_6);
   break;

  case 154:
   VAR_7 = FUNC_18(VAR_5, (A_ArrayExpr *) VAR_6,
          VAR_2, VAR_2, -1);
   break;

  case 131:
   VAR_7 = FUNC_35(VAR_5, (TypeCast *) VAR_6);
   break;

  case 145:
   VAR_7 = FUNC_23(VAR_5, (CollateClause *) VAR_6);
   break;

  case 152:
   {
    A_Expr *VAR_10 = (A_Expr *) VAR_6;

    switch (VAR_10->kind)
    {
     case 159:
      VAR_7 = FUNC_15(VAR_5, VAR_10);
      break;
     case 157:
      VAR_7 = FUNC_17(VAR_5, VAR_10);
      break;
     case 158:
      VAR_7 = FUNC_16(VAR_5, VAR_10);
      break;
     case 168:
     case 162:
      VAR_7 = FUNC_11(VAR_5, VAR_10);
      break;
     case 161:
      VAR_7 = FUNC_13(VAR_5, VAR_10);
      break;
     case 160:
      VAR_7 = FUNC_14(VAR_5, VAR_10);
      break;
     case 166:
      VAR_7 = FUNC_12(VAR_5, VAR_10);
      break;
     case 165:
     case 167:
     case 155:

      VAR_7 = FUNC_15(VAR_5, VAR_10);
      break;
     case 170:
     case 164:
     case 169:
     case 163:
      VAR_7 = FUNC_10(VAR_5, VAR_10);
      break;
     case 156:
      VAR_7 = FUNC_39(VAR_5, VAR_10->lexpr);
      break;
     default:
      FUNC_1(VAR_1, "unrecognized A_Expr kind: %d", VAR_10->kind);
      VAR_7 = ((void*)0);
      break;
    }
    break;
   }

  case 150:
   VAR_7 = FUNC_19(VAR_5, (BoolExpr *) VAR_6);
   break;

  case 142:
   VAR_7 = FUNC_26(VAR_5, (FuncCall *) VAR_6);
   break;

  case 139:
   VAR_7 = FUNC_30(VAR_5, (MultiAssignRef *) VAR_6);
   break;

  case 141:
   VAR_7 = FUNC_27(VAR_5, (GroupingFunc *) VAR_6);
   break;

  case 138:
   {
    NamedArgExpr *VAR_11 = (NamedArgExpr *) VAR_6;

    VAR_11->arg = (Expr *) FUNC_39(VAR_5, (Node *) VAR_11->arg);
    VAR_7 = VAR_6;
    break;
   }

  case 132:
   VAR_7 = FUNC_34(VAR_5, (SubLink *) VAR_6);
   break;

  case 148:
   VAR_7 = FUNC_21(VAR_5, (CaseExpr *) VAR_6);
   break;

  case 135:
   VAR_7 = FUNC_32(VAR_5, (RowExpr *) VAR_6, 0);
   break;

  case 146:
   VAR_7 = FUNC_22(VAR_5, (CoalesceExpr *) VAR_6);
   break;

  case 140:
   VAR_7 = FUNC_29(VAR_5, (MinMaxExpr *) VAR_6);
   break;

  case 134:
   VAR_7 = FUNC_33(VAR_5,
              (SQLValueFunction *) VAR_6);
   break;

  case 129:
   VAR_7 = FUNC_36(VAR_5, (XmlExpr *) VAR_6);
   break;

  case 128:
   VAR_7 = FUNC_37(VAR_5, (XmlSerialize *) VAR_6);
   break;

  case 137:
   {
    NullTest *VAR_12 = (NullTest *) VAR_6;

    if (VAR_4)
     FUNC_2(VAR_5, VAR_3, "IS",
            (Node *) VAR_12->arg, ((void*)0),
            VAR_12->location);

    VAR_12->arg = (Expr *) FUNC_39(VAR_5, (Node *) VAR_12->arg);

    VAR_12->argisrow = FUNC_38(FUNC_6((Node *) VAR_12->arg));
    VAR_7 = VAR_6;
    break;
   }

  case 149:
   VAR_7 = FUNC_20(VAR_5, (BooleanTest *) VAR_6);
   break;

  case 143:
   VAR_7 = FUNC_25(VAR_5, (CurrentOfExpr *) VAR_6);
   break;





  case 133:
   FUNC_3(VAR_1,
     (FUNC_4(VAR_0),
      FUNC_5("DEFAULT is not allowed in this context"),
      FUNC_9(VAR_5,
          ((SetToDefault *) VAR_6)->location)));
   break;
  case 147:
  case 130:
   {
    VAR_7 = (Node *) VAR_6;
    break;
   }

  default:

   FUNC_1(VAR_1, "unrecognized node type: %d", (int) FUNC_8(VAR_6));
   VAR_7 = ((void*)0);
   break;
 }

 return VAR_7;
}
