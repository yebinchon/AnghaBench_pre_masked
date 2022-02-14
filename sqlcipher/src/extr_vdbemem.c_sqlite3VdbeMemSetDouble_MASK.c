
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {double r; } ;
struct TYPE_6__ {int flags; TYPE_1__ u; } ;
typedef TYPE_2__ Mem ;


 int VAR_0 ;
 int FUNC_0 (double) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(Mem *VAR_1, double VAR_2){
  FUNC_1(VAR_1);
  if( !FUNC_0(VAR_2) ){
    VAR_1->u.r = VAR_2;
    VAR_1->flags = VAR_0;
  }
}
