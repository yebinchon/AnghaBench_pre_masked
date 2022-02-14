
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int Vdbe ;
typedef int Token ;
struct TYPE_7__ {int nMem; int db; } ;
typedef TYPE_1__ Parse ;
typedef int Expr ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *,int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int * FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ,int ,int *,int ) ;
 int FUNC_5 (TYPE_1__*,int *,int *,int **) ;
 int FUNC_6 (int *,int ,int,int) ;
 int FUNC_7 (int *,int) ;

void FUNC_8(Parse *VAR_1, Token *VAR_2, Expr *VAR_3){
  Vdbe *VAR_4 = FUNC_3(VAR_1);
  int VAR_5 = 0;
  if( VAR_4==0 ) goto build_vacuum_end;
  if( VAR_2 ){



    VAR_5 = FUNC_5(VAR_1, VAR_2, VAR_2, &VAR_2);
    if( VAR_5<0 ) goto build_vacuum_end;
  }
  if( VAR_5!=1 ){
    int VAR_6 = 0;
    if( VAR_3 && FUNC_4(VAR_1,0,0,VAR_3,0)==0 ){
      VAR_6 = ++VAR_1->nMem;
      FUNC_0(VAR_1, VAR_3, VAR_6);
    }
    FUNC_6(VAR_4, VAR_0, VAR_5, VAR_6);
    FUNC_7(VAR_4, VAR_5);
  }
build_vacuum_end:
  FUNC_1(VAR_1->db, VAR_3);
  return;
}
