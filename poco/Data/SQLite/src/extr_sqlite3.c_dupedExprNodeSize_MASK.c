
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ zToken; } ;
struct TYPE_7__ {TYPE_1__ u; } ;
typedef TYPE_2__ Expr ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(Expr *VAR_1, int VAR_2){
  int VAR_3 = FUNC_2(VAR_1, VAR_2) & 0xfff;
  if( !FUNC_0(VAR_1, VAR_0) && VAR_1->u.zToken ){
    VAR_3 += FUNC_3(VAR_1->u.zToken)+1;
  }
  return FUNC_1(VAR_3);
}
