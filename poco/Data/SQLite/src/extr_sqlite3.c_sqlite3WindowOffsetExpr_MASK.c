
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int db; } ;
typedef TYPE_1__ Parse ;
typedef int Expr ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;

__attribute__((used)) static Expr *FUNC_4(Parse *VAR_2, Expr *VAR_3){
  if( 0==FUNC_2(VAR_3) ){
    if( VAR_0 ) FUNC_3(VAR_2, VAR_3);
    FUNC_1(VAR_2->db, VAR_3);
    VAR_3 = FUNC_0(VAR_2->db, VAR_1, 0, 0);
  }
  return VAR_3;
}
