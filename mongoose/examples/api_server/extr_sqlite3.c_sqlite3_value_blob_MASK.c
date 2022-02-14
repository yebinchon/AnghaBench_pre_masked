
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_value ;
struct TYPE_3__ {int flags; void const* z; scalar_t__ n; } ;
typedef TYPE_1__ Mem ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 void const* FUNC_1 (int *) ;

const void *FUNC_2(sqlite3_value *VAR_2){
  Mem *VAR_3 = (Mem*)VAR_2;
  if( VAR_3->flags & (VAR_0|VAR_1) ){
    FUNC_0(VAR_3);
    VAR_3->flags &= ~VAR_1;
    VAR_3->flags |= VAR_0;
    return VAR_3->n ? VAR_3->z : 0;
  }else{
    return FUNC_1(VAR_2);
  }
}
