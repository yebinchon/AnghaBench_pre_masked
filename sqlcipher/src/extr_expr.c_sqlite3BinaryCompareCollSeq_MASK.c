
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int flags; } ;
typedef int Parse ;
typedef TYPE_1__ Expr ;
typedef int CollSeq ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (int *,TYPE_1__*) ;

CollSeq *FUNC_2(
  Parse *VAR_1,
  Expr *VAR_2,
  Expr *VAR_3
){
  CollSeq *VAR_4;
  FUNC_0( VAR_2 );
  if( VAR_2->flags & VAR_0 ){
    VAR_4 = FUNC_1(VAR_1, VAR_2);
  }else if( VAR_3 && (VAR_3->flags & VAR_0)!=0 ){
    VAR_4 = FUNC_1(VAR_1, VAR_3);
  }else{
    VAR_4 = FUNC_1(VAR_1, VAR_2);
    if( !VAR_4 ){
      VAR_4 = FUNC_1(VAR_1, VAR_3);
    }
  }
  return VAR_4;
}
