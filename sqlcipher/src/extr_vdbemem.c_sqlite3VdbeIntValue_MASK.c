
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int i64 ;
struct TYPE_8__ {int r; int i; } ;
struct TYPE_9__ {int flags; scalar_t__ n; scalar_t__ z; TYPE_2__ u; TYPE_1__* db; } ;
struct TYPE_7__ {int mutex; } ;
typedef TYPE_3__ Mem ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (int ) ;

i64 FUNC_5(Mem *VAR_4){
  int VAR_5;
  FUNC_1( VAR_4->db==0 || FUNC_4(VAR_4->db->mutex) );
  FUNC_1( FUNC_0(VAR_4) );
  VAR_5 = VAR_4->flags;
  if( VAR_5 & VAR_1 ){
    return VAR_4->u.i;
  }else if( VAR_5 & VAR_2 ){
    return FUNC_2(VAR_4->u.r);
  }else if( VAR_5 & (VAR_3|VAR_0) ){
    FUNC_1( VAR_4->z || VAR_4->n==0 );
    return FUNC_3(VAR_4);
  }else{
    return 0;
  }
}
