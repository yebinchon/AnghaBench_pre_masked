
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef int u8 ;
struct ValueNewStat4Ctx {TYPE_1__* pParse; } ;
struct TYPE_23__ {double r; int i; } ;
struct TYPE_25__ {int flags; TYPE_2__ u; } ;
typedef TYPE_4__ sqlite3_value ;
typedef int sqlite3 ;
typedef int i64 ;
struct TYPE_24__ {char* zToken; scalar_t__ iValue; } ;
struct TYPE_26__ {int op; int op2; int flags; TYPE_3__ u; struct TYPE_26__* pLeft; } ;
struct TYPE_22__ {scalar_t__ nErr; } ;
typedef TYPE_5__ Expr ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_5__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_4__*,int) ;
 scalar_t__ FUNC_2 (int) ;
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
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*,int) ;
 char* FUNC_7 (int *,char*,char const*,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (TYPE_4__*,int ,int ) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (TYPE_4__*,int,char*,int ,int ) ;
 int FUNC_13 (TYPE_4__*,int ) ;
 int FUNC_14 (TYPE_4__*,int ,int ) ;
 int FUNC_15 (TYPE_4__*) ;
 int FUNC_16 (TYPE_4__*,int) ;
 int FUNC_17 (TYPE_4__*) ;
 int FUNC_18 (TYPE_4__*,int ,int,int ,int ) ;
 int FUNC_19 (int) ;
 int FUNC_20 (int *,TYPE_5__*,int ,int ,TYPE_4__**,struct ValueNewStat4Ctx*) ;
 TYPE_4__* FUNC_21 (int *,struct ValueNewStat4Ctx*) ;

__attribute__((used)) static int FUNC_22(
  sqlite3 *VAR_25,
  Expr *VAR_26,
  u8 VAR_27,
  u8 VAR_28,
  sqlite3_value **VAR_29,
  struct ValueNewStat4Ctx *VAR_30
){
  int VAR_31;
  char *VAR_32 = 0;
  sqlite3_value *VAR_33 = 0;
  int VAR_34 = 1;
  const char *VAR_35 = "";
  int VAR_36 = VAR_11;

  FUNC_3( VAR_26!=0 );
  while( (VAR_31 = VAR_26->op)==VAR_24 || VAR_31==VAR_20 ) VAR_26 = VAR_26->pLeft;



  if( FUNC_2(VAR_31==VAR_19) ) VAR_31 = VAR_26->op2;






  FUNC_3( (VAR_26->flags & VAR_1)==0 || VAR_30==0 );

  if( VAR_31==VAR_14 ){
    u8 VAR_37 = FUNC_4(VAR_26->u.zToken,0);
    VAR_36 = FUNC_22(VAR_25, VAR_26->pLeft, VAR_27, VAR_37, VAR_29, VAR_30);
    FUNC_19( VAR_36!=VAR_11 );
    if( *VAR_29 ){
      FUNC_14(*VAR_29, VAR_37, VAR_12);
      FUNC_10(*VAR_29, VAR_28, VAR_12);
    }
    return VAR_36;
  }




  if( VAR_31==VAR_23
   && (VAR_26->pLeft->op==VAR_17 || VAR_26->pLeft->op==VAR_15) ){
    VAR_26 = VAR_26->pLeft;
    VAR_31 = VAR_26->op;
    VAR_34 = -1;
    VAR_35 = "-";
  }

  if( VAR_31==VAR_21 || VAR_31==VAR_15 || VAR_31==VAR_17 ){
    VAR_33 = FUNC_21(VAR_25, VAR_30);
    if( VAR_33==0 ) goto no_mem;
    if( FUNC_0(VAR_26, VAR_0) ){
      FUNC_16(VAR_33, (i64)VAR_26->u.iValue*VAR_34);
    }else{
      VAR_32 = FUNC_7(VAR_25, "%s%s", VAR_35, VAR_26->u.zToken);
      if( VAR_32==0 ) goto no_mem;
      FUNC_12(VAR_33, -1, VAR_32, VAR_12, VAR_9);
    }
    if( (VAR_31==VAR_17 || VAR_31==VAR_15 ) && VAR_28==VAR_7 ){
      FUNC_10(VAR_33, VAR_8, VAR_12);
    }else{
      FUNC_10(VAR_33, VAR_28, VAR_12);
    }
    FUNC_3( (VAR_33->flags & VAR_3)==0 );
    if( VAR_33->flags & (VAR_2|VAR_3|VAR_4) ){
      FUNC_19( VAR_33->flags & VAR_2 );
      FUNC_19( VAR_33->flags & VAR_4 );
      VAR_33->flags &= ~VAR_5;
    }
    if( VAR_27!=VAR_12 ){
      VAR_36 = FUNC_13(VAR_33, VAR_27);
    }
  }else if( VAR_31==VAR_23 ) {

    if( VAR_11==FUNC_22(VAR_25,VAR_26->pLeft,VAR_27,VAR_28,&VAR_33,VAR_30)
     && VAR_33!=0
    ){
      FUNC_15(VAR_33);
      if( VAR_33->flags & VAR_4 ){
        VAR_33->u.r = -VAR_33->u.r;
      }else if( VAR_33->u.i==VAR_6 ){
        VAR_33->u.r = -(double)VAR_6;
        FUNC_1(VAR_33, VAR_4);
      }else{
        VAR_33->u.i = -VAR_33->u.i;
      }
      FUNC_10(VAR_33, VAR_28, VAR_27);
    }
  }else if( VAR_31==VAR_18 ){
    VAR_33 = FUNC_21(VAR_25, VAR_30);
    if( VAR_33==0 ) goto no_mem;
    FUNC_17(VAR_33);
  }

  else if( VAR_31==VAR_13 ){
    int VAR_38;
    FUNC_3( VAR_26->u.zToken[0]=='x' || VAR_26->u.zToken[0]=='X' );
    FUNC_3( VAR_26->u.zToken[1]=='\'' );
    VAR_33 = FUNC_21(VAR_25, VAR_30);
    if( !VAR_33 ) goto no_mem;
    VAR_32 = &VAR_26->u.zToken[2];
    VAR_38 = FUNC_9(VAR_32)-1;
    FUNC_3( VAR_32[VAR_38]=='\'' );
    FUNC_18(VAR_33, FUNC_6(VAR_25, VAR_32, VAR_38), VAR_38/2,
                         0, VAR_9);
  }






  else if( VAR_31==VAR_22 ){
    VAR_33 = FUNC_21(VAR_25, VAR_30);
    if( VAR_33 ){
      VAR_33->flags = VAR_2;
      VAR_33->u.i = VAR_26->u.zToken[4]==0;
    }
  }

  *VAR_29 = VAR_33;
  return VAR_36;

no_mem:



    FUNC_8(VAR_25);
  FUNC_5(VAR_25, VAR_32);
  FUNC_3( *VAR_29==0 );



  FUNC_3( VAR_30==0 ); FUNC_11(VAR_33);

  return VAR_10;
}
