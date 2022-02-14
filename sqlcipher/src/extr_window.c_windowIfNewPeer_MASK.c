
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int Vdbe ;
struct TYPE_4__ {int nExpr; } ;
typedef int Parse ;
typedef int KeyInfo ;
typedef TYPE_1__ ExprList ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *,TYPE_1__*,int ,int ) ;
 int FUNC_3 (int *,int ,int ,int) ;
 int FUNC_4 (int *,int ,int,int,int) ;
 int FUNC_5 (int *,void*,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(
  Parse *VAR_5,
  ExprList *VAR_6,
  int VAR_7,
  int VAR_8,
  int VAR_9
){
  Vdbe *VAR_10 = FUNC_1(VAR_5);
  if( VAR_6 ){
    int VAR_11 = VAR_6->nExpr;
    KeyInfo *VAR_12 = FUNC_2(VAR_5, VAR_6, 0, 0);
    FUNC_4(VAR_10, VAR_0, VAR_8, VAR_7, VAR_11);
    FUNC_5(VAR_10, (void*)VAR_12, VAR_4);
    FUNC_4(VAR_10, VAR_3,
      FUNC_6(VAR_10)+1, VAR_9, FUNC_6(VAR_10)+1
    );
    FUNC_0(VAR_10);
    FUNC_4(VAR_10, VAR_1, VAR_7, VAR_8, VAR_11-1);
  }else{
    FUNC_3(VAR_10, VAR_2, 0, VAR_9);
  }
}
