
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_24__ {scalar_t__ mallocFailed; } ;
typedef TYPE_2__ sqlite3 ;
typedef int Vdbe ;
struct TYPE_23__ {char* zToken; } ;
struct TYPE_28__ {scalar_t__ op; TYPE_1__ u; } ;
struct TYPE_27__ {int nArg; } ;
struct TYPE_26__ {TYPE_3__* pParse; } ;
struct TYPE_25__ {int nErr; TYPE_2__* db; } ;
typedef TYPE_3__ Parse ;
typedef TYPE_4__ NameContext ;
typedef TYPE_5__ FuncDef ;
typedef TYPE_6__ Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*,int ,int) ;
 int FUNC_2 (TYPE_4__*,TYPE_6__*) ;
 int FUNC_3 (TYPE_3__*,int,char*,int ,int ) ;
 int FUNC_4 (TYPE_3__*,TYPE_6__*,int) ;
 int FUNC_5 (TYPE_2__*,TYPE_6__*) ;
 int FUNC_6 (TYPE_3__*,int) ;
 int * FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int *,int ,int) ;
 int FUNC_9 (int *,int ,int ,int,int) ;
 int FUNC_10 (int *,int,char*,int ) ;
 int FUNC_11 (int *,int ) ;

__attribute__((used)) static void FUNC_12(
  Parse *VAR_6,
  int VAR_7,
  FuncDef const *VAR_8,
  Expr *VAR_9,
  Expr *VAR_10,
  Expr *VAR_11,
  Expr *VAR_12
){
  int VAR_13;
  NameContext VAR_14;
  Vdbe *VAR_15;
  sqlite3* VAR_16 = VAR_6->db;
  int VAR_17;

  FUNC_1(&VAR_14, 0, sizeof(NameContext));
  VAR_14.pParse = VAR_6;

  if(
      VAR_4!=(VAR_13 = FUNC_2(&VAR_14, VAR_10)) ||
      VAR_4!=(VAR_13 = FUNC_2(&VAR_14, VAR_11)) ||
      VAR_4!=(VAR_13 = FUNC_2(&VAR_14, VAR_12))
  ){
    VAR_6->nErr++;
    goto attach_end;
  }


  if( VAR_9 ){
    char *VAR_18;
    if( VAR_9->op==VAR_5 ){
      VAR_18 = VAR_9->u.zToken;
    }else{
      VAR_18 = 0;
    }
    VAR_13 = FUNC_3(VAR_6, VAR_7, VAR_18, 0, 0);
    if(VAR_13!=VAR_4 ){
      goto attach_end;
    }
  }



  VAR_15 = FUNC_7(VAR_6);
  VAR_17 = FUNC_6(VAR_6, 4);
  FUNC_4(VAR_6, VAR_10, VAR_17);
  FUNC_4(VAR_6, VAR_11, VAR_17+1);
  FUNC_4(VAR_6, VAR_12, VAR_17+2);

  FUNC_0( VAR_15 || VAR_16->mallocFailed );
  if( VAR_15 ){
    FUNC_9(VAR_15, VAR_1, 0, VAR_17+3-VAR_8->nArg, VAR_17+3);
    FUNC_0( VAR_8->nArg==-1 || (VAR_8->nArg&0xff)==VAR_8->nArg );
    FUNC_11(VAR_15, (u8)(VAR_8->nArg));
    FUNC_10(VAR_15, -1, (char *)VAR_8, VAR_2);





    FUNC_8(VAR_15, VAR_0, (VAR_7==VAR_3));
  }

attach_end:
  FUNC_5(VAR_16, VAR_10);
  FUNC_5(VAR_16, VAR_11);
  FUNC_5(VAR_16, VAR_12);
}
