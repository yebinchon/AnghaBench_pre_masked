
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef int u8 ;
struct ValueNewStat4Ctx {int dummy; } ;
struct TYPE_22__ {double r; scalar_t__ i; } ;
struct TYPE_24__ {int flags; TYPE_1__ u; } ;
typedef TYPE_3__ sqlite3_value ;
typedef int sqlite3 ;
typedef int i64 ;
struct TYPE_23__ {char* zToken; scalar_t__ iValue; } ;
struct TYPE_25__ {int op; int op2; int flags; TYPE_2__ u; struct TYPE_25__* pLeft; } ;
typedef TYPE_4__ Expr ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_4__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_3__*,int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ VAR_5 ;
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
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*,int) ;
 char* FUNC_7 (int *,char*,char const*,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (TYPE_3__*,int ,int ) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (int *,TYPE_4__*,int ,int ,TYPE_3__**) ;
 int FUNC_13 (TYPE_3__*,int,char*,int ,int ) ;
 int FUNC_14 (TYPE_3__*,int ) ;
 int FUNC_15 (TYPE_3__*,int ,int ) ;
 int FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (TYPE_3__*,int) ;
 int FUNC_18 (TYPE_3__*,int ,int,int ,int ) ;
 int FUNC_19 (int) ;
 int FUNC_20 (int *,TYPE_4__*,int ,int ,TYPE_3__**,struct ValueNewStat4Ctx*) ;
 TYPE_3__* FUNC_21 (int *,struct ValueNewStat4Ctx*) ;

__attribute__((used)) static int FUNC_22(
  sqlite3 *VAR_23,
  Expr *VAR_24,
  u8 VAR_25,
  u8 VAR_26,
  sqlite3_value **VAR_27,
  struct ValueNewStat4Ctx *VAR_28
){
  int VAR_29;
  char *VAR_30 = 0;
  sqlite3_value *VAR_31 = 0;
  int VAR_32 = 1;
  const char *VAR_33 = "";
  int VAR_34 = VAR_10;

  FUNC_3( VAR_24!=0 );
  while( (VAR_29 = VAR_24->op)==VAR_22 || VAR_29==VAR_19 ) VAR_24 = VAR_24->pLeft;
  if( FUNC_2(VAR_29==VAR_18) ) VAR_29 = VAR_24->op2;





  FUNC_3( (VAR_24->flags & VAR_1)==0 || VAR_28==0 );

  if( VAR_29==VAR_13 ){
    u8 VAR_35 = FUNC_4(VAR_24->u.zToken,0);
    VAR_34 = FUNC_22(VAR_23, VAR_24->pLeft, VAR_25, VAR_35, VAR_27, VAR_28);
    FUNC_19( VAR_34!=VAR_10 );
    if( *VAR_27 ){
      FUNC_15(*VAR_27, VAR_35, VAR_11);
      FUNC_10(*VAR_27, VAR_26, VAR_11);
    }
    return VAR_34;
  }




  if( VAR_29==VAR_21
   && (VAR_24->pLeft->op==VAR_16 || VAR_24->pLeft->op==VAR_14) ){
    VAR_24 = VAR_24->pLeft;
    VAR_29 = VAR_24->op;
    VAR_32 = -1;
    VAR_33 = "-";
  }

  if( VAR_29==VAR_20 || VAR_29==VAR_14 || VAR_29==VAR_16 ){
    VAR_31 = FUNC_21(VAR_23, VAR_28);
    if( VAR_31==0 ) goto no_mem;
    if( FUNC_0(VAR_24, VAR_0) ){
      FUNC_17(VAR_31, (i64)VAR_24->u.iValue*VAR_32);
    }else{
      VAR_30 = FUNC_7(VAR_23, "%s%s", VAR_33, VAR_24->u.zToken);
      if( VAR_30==0 ) goto no_mem;
      FUNC_13(VAR_31, -1, VAR_30, VAR_11, VAR_8);
    }
    if( (VAR_29==VAR_16 || VAR_29==VAR_14 ) && VAR_26==VAR_6 ){
      FUNC_10(VAR_31, VAR_7, VAR_11);
    }else{
      FUNC_10(VAR_31, VAR_26, VAR_11);
    }
    if( VAR_31->flags & (VAR_2|VAR_3) ) VAR_31->flags &= ~VAR_4;
    if( VAR_25!=VAR_11 ){
      VAR_34 = FUNC_14(VAR_31, VAR_25);
    }
  }else if( VAR_29==VAR_21 ) {

    if( VAR_10==FUNC_12(VAR_23,VAR_24->pLeft,VAR_25,VAR_26,&VAR_31)
     && VAR_31!=0
    ){
      FUNC_16(VAR_31);
      if( VAR_31->flags & VAR_3 ){
        VAR_31->u.r = -VAR_31->u.r;
      }else if( VAR_31->u.i==VAR_5 ){
        VAR_31->u.r = -(double)VAR_5;
        FUNC_1(VAR_31, VAR_3);
      }else{
        VAR_31->u.i = -VAR_31->u.i;
      }
      FUNC_10(VAR_31, VAR_26, VAR_25);
    }
  }else if( VAR_29==VAR_17 ){
    VAR_31 = FUNC_21(VAR_23, VAR_28);
    if( VAR_31==0 ) goto no_mem;
    FUNC_16(VAR_31);
  }

  else if( VAR_29==VAR_12 ){
    int VAR_36;
    FUNC_3( VAR_24->u.zToken[0]=='x' || VAR_24->u.zToken[0]=='X' );
    FUNC_3( VAR_24->u.zToken[1]=='\'' );
    VAR_31 = FUNC_21(VAR_23, VAR_28);
    if( !VAR_31 ) goto no_mem;
    VAR_30 = &VAR_24->u.zToken[2];
    VAR_36 = FUNC_9(VAR_30)-1;
    FUNC_3( VAR_30[VAR_36]=='\'' );
    FUNC_18(VAR_31, FUNC_6(VAR_23, VAR_30, VAR_36), VAR_36/2,
                         0, VAR_8);
  }
  *VAR_27 = VAR_31;
  return VAR_34;

no_mem:
  FUNC_8(VAR_23);
  FUNC_5(VAR_23, VAR_30);
  FUNC_3( *VAR_27==0 );



  FUNC_3( VAR_28==0 ); FUNC_11(VAR_31);

  return VAR_9;
}
