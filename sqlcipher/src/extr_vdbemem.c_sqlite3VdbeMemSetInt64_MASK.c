
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int i64 ;
struct TYPE_6__ {int i; } ;
struct TYPE_7__ {int flags; TYPE_1__ u; } ;
typedef TYPE_2__ Mem ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ) ;

void FUNC_2(Mem *VAR_1, i64 VAR_2){
  if( FUNC_0(VAR_1) ){
    FUNC_1(VAR_1, VAR_2);
  }else{
    VAR_1->u.i = VAR_2;
    VAR_1->flags = VAR_0;
  }
}
