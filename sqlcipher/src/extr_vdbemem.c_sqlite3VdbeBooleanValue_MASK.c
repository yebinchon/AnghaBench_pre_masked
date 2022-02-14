
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ i; } ;
struct TYPE_6__ {int flags; TYPE_1__ u; } ;
typedef TYPE_2__ Mem ;


 int VAR_0 ;
 int VAR_1 ;
 double FUNC_0 (TYPE_2__*) ;

int FUNC_1(Mem *VAR_2, int VAR_3){
  if( VAR_2->flags & VAR_0 ) return VAR_2->u.i!=0;
  if( VAR_2->flags & VAR_1 ) return VAR_3;
  return FUNC_0(VAR_2)!=0.0;
}
