
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_value ;
struct TYPE_3__ {int flags; scalar_t__ z; scalar_t__ n; } ;
typedef TYPE_1__ Mem ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int) ;
 void const* FUNC_2 (int *) ;

const void *FUNC_3(sqlite3_value *VAR_4){
  Mem *VAR_5 = (Mem*)VAR_4;
  if( VAR_5->flags & (VAR_0|VAR_2) ){
    if( FUNC_0(VAR_5)!=VAR_3 ){
      FUNC_1( VAR_5->flags==VAR_1 && VAR_5->z==0 );
      return 0;
    }
    VAR_5->flags |= VAR_0;
    return VAR_5->n ? VAR_5->z : 0;
  }else{
    return FUNC_2(VAR_4);
  }
}
