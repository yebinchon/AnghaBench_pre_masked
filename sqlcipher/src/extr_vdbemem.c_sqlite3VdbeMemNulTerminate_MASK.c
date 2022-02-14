
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int flags; TYPE_1__* db; } ;
struct TYPE_5__ {int mutex; } ;
typedef TYPE_2__ Mem ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*) ;

int FUNC_4(Mem *VAR_3){
  FUNC_0( VAR_3->db==0 || FUNC_1(VAR_3->db->mutex) );
  FUNC_2( (VAR_3->flags & (VAR_1|VAR_0))==(VAR_1|VAR_0) );
  FUNC_2( (VAR_3->flags & (VAR_1|VAR_0))==0 );
  if( (VAR_3->flags & (VAR_1|VAR_0))!=VAR_0 ){
    return VAR_2;
  }else{
    return FUNC_3(VAR_3);
  }
}
