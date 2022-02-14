
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef int Vdbe ;
struct TYPE_25__ {int op; int op2; struct TYPE_25__* pLeft; struct TYPE_25__* pRight; } ;
struct TYPE_24__ {int * pVdbe; } ;
typedef TYPE_1__ Parse ;
typedef TYPE_2__ Expr ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*,TYPE_2__*,int,int,int,int,int) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_1__*,TYPE_2__*,int,void (*) (TYPE_1__*,TYPE_2__*,int,int),int) ;
 int FUNC_8 (TYPE_1__*,TYPE_2__*,int,int) ;
 int FUNC_9 (TYPE_1__*,TYPE_2__*,int*) ;
 int FUNC_10 (TYPE_1__*,TYPE_2__*,int,int) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_1__*,int) ;
 int FUNC_14 (int *,int,int,int) ;
 int FUNC_15 (int *,int ,int,int,int) ;
 int FUNC_16 (int *,int) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (int *,int) ;
 int FUNC_19 (int) ;

void FUNC_20(Parse *VAR_11, Expr *VAR_12, int VAR_13, int VAR_14){
  Vdbe *VAR_15 = VAR_11->pVdbe;
  int VAR_16 = 0;
  int VAR_17 = 0;
  int VAR_18 = 0;
  int VAR_19, VAR_20;

  FUNC_3( VAR_14==VAR_9 || VAR_14==0 );
  if( FUNC_0(VAR_15==0) ) return;
  if( VAR_12==0 ) return;
  VAR_16 = ((VAR_12->op+(135&1))^1)-(135&1);



  FUNC_3( VAR_12->op!=135 || VAR_16==VAR_8 );
  FUNC_3( VAR_12->op!=130 || VAR_16==VAR_4 );
  FUNC_3( VAR_12->op!=132 || VAR_16==VAR_0 );
  FUNC_3( VAR_12->op!=141 || VAR_16==VAR_7 );
  FUNC_3( VAR_12->op!=133 || VAR_16==VAR_1 );
  FUNC_3( VAR_12->op!=134 || VAR_16==VAR_2 );
  FUNC_3( VAR_12->op!=139 || VAR_16==VAR_5 );
  FUNC_3( VAR_12->op!=140 || VAR_16==VAR_6 );

  switch( VAR_12->op ){
    case 143: {
      FUNC_19( VAR_14==0 );
      FUNC_20(VAR_11, VAR_12->pLeft, VAR_13, VAR_14);
      FUNC_20(VAR_11, VAR_12->pRight, VAR_13, VAR_14);
      break;
    }
    case 129: {
      int VAR_21 = FUNC_17(VAR_11);
      FUNC_19( VAR_14==0 );
      FUNC_10(VAR_11, VAR_12->pLeft, VAR_21, VAR_14^VAR_9);
      FUNC_20(VAR_11, VAR_12->pRight, VAR_13, VAR_14);
      FUNC_18(VAR_15, VAR_21);
      break;
    }
    case 131: {
      FUNC_19( VAR_14==0 );
      FUNC_10(VAR_11, VAR_12->pLeft, VAR_13, VAR_14);
      break;
    }
    case 128: {
      int VAR_22;
      int VAR_23;
      FUNC_19( VAR_14==0 );
      VAR_22 = VAR_12->op2==136;
      VAR_23 = FUNC_12(VAR_12->pRight);
      FUNC_19( VAR_23 && VAR_22 );
      FUNC_19( !VAR_23 && VAR_22 );
      if( VAR_23 ^ VAR_22 ){

        FUNC_20(VAR_11, VAR_12->pLeft, VAR_13,
                           VAR_22 ? 0 : VAR_9);

      }else{

        FUNC_10(VAR_11, VAR_12->pLeft, VAR_13,
                          VAR_22 ? 0 : VAR_9);
      }
      break;
    }
    case 137:
    case 136:
      FUNC_19( VAR_12->op==137 );
      FUNC_19( VAR_12->op==136 );
      VAR_16 = (VAR_12->op==137) ? 132 : 141;
      VAR_14 = VAR_10;

    case 133:
    case 134:
    case 139:
    case 140:
    case 132:
    case 141: {
      if( FUNC_11(VAR_12->pLeft) ) goto default_expr;
      FUNC_19( VAR_14==0 );
      VAR_19 = FUNC_9(VAR_11, VAR_12->pLeft, &VAR_17);
      VAR_20 = FUNC_9(VAR_11, VAR_12->pRight, &VAR_18);
      FUNC_4(VAR_11, VAR_12->pLeft, VAR_12->pRight, VAR_16,
                  VAR_19, VAR_20, VAR_13, VAR_14);
      FUNC_3(133==VAR_6); FUNC_19(VAR_16==VAR_6); FUNC_2(VAR_15,VAR_16==VAR_6);
      FUNC_3(134==VAR_5); FUNC_19(VAR_16==VAR_5); FUNC_2(VAR_15,VAR_16==VAR_5);
      FUNC_3(139==VAR_2); FUNC_19(VAR_16==VAR_2); FUNC_2(VAR_15,VAR_16==VAR_2);
      FUNC_3(140==VAR_1); FUNC_19(VAR_16==VAR_1); FUNC_2(VAR_15,VAR_16==VAR_1);
      FUNC_3(141==VAR_0); FUNC_19(VAR_16==VAR_0);
      FUNC_2(VAR_15, VAR_16==VAR_0 && VAR_14!=VAR_10);
      FUNC_2(VAR_15, VAR_16==VAR_0 && VAR_14==VAR_10);
      FUNC_3(132==VAR_7); FUNC_19(VAR_16==VAR_7);
      FUNC_2(VAR_15, VAR_16==VAR_7 && VAR_14!=VAR_10);
      FUNC_2(VAR_15, VAR_16==VAR_7 && VAR_14==VAR_10);
      FUNC_19( VAR_17==0 );
      FUNC_19( VAR_18==0 );
      break;
    }
    case 135:
    case 130: {
      VAR_19 = FUNC_9(VAR_11, VAR_12->pLeft, &VAR_17);
      FUNC_14(VAR_15, VAR_16, VAR_19, VAR_13);
      FUNC_19( VAR_16==135 ); FUNC_2(VAR_15, VAR_16==135);
      FUNC_19( VAR_16==130 ); FUNC_2(VAR_15, VAR_16==130);
      FUNC_19( VAR_17==0 );
      break;
    }
    case 142: {
      FUNC_19( VAR_14==0 );
      FUNC_7(VAR_11, VAR_12, VAR_13, FUNC_20, VAR_14);
      break;
    }

    case 138: {
      if( VAR_14 ){
        FUNC_8(VAR_11, VAR_12, VAR_13, VAR_13);
      }else{
        int VAR_24 = FUNC_17(VAR_11);
        FUNC_8(VAR_11, VAR_12, VAR_13, VAR_24);
        FUNC_18(VAR_15, VAR_24);
      }
      break;
    }

    default: {
    default_expr:
      if( FUNC_5(VAR_12) ){
        FUNC_16(VAR_15, VAR_13);
      }else if( FUNC_6(VAR_12) ){

      }else{
        VAR_19 = FUNC_9(VAR_11, VAR_12, &VAR_17);
        FUNC_15(VAR_15, VAR_3, VAR_19, VAR_13, VAR_14!=0);
        FUNC_1(VAR_15);
        FUNC_19( VAR_17==0 );
        FUNC_19( VAR_14==0 );
      }
      break;
    }
  }
  FUNC_13(VAR_11, VAR_17);
  FUNC_13(VAR_11, VAR_18);
}
