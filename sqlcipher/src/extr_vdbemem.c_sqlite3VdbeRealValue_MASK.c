
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {double r; scalar_t__ i; } ;
struct TYPE_9__ {int flags; TYPE_2__ u; TYPE_1__* db; } ;
struct TYPE_7__ {int mutex; } ;
typedef TYPE_3__ Mem ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 double FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (int ) ;

double FUNC_4(Mem *VAR_4){
  FUNC_1( VAR_4->db==0 || FUNC_3(VAR_4->db->mutex) );
  FUNC_1( FUNC_0(VAR_4) );
  if( VAR_4->flags & VAR_2 ){
    return VAR_4->u.r;
  }else if( VAR_4->flags & VAR_1 ){
    return (double)VAR_4->u.i;
  }else if( VAR_4->flags & (VAR_3|VAR_0) ){
    return FUNC_2(VAR_4);
  }else{

    return (double)0;
  }
}
