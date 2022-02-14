
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int r; } ;
struct TYPE_10__ {TYPE_2__ u; TYPE_1__* db; } ;
struct TYPE_8__ {int mutex; } ;
typedef TYPE_3__ Mem ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (int ) ;

int FUNC_5(Mem *VAR_2){
  FUNC_2( VAR_2->db==0 || FUNC_4(VAR_2->db->mutex) );
  FUNC_2( FUNC_0(VAR_2) );

  VAR_2->u.r = FUNC_3(VAR_2);
  FUNC_1(VAR_2, VAR_0);
  return VAR_1;
}
