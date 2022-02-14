
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rds_ib_recv_work {TYPE_3__* r_frag; TYPE_1__* r_ibinc; } ;
struct rds_ib_connection {TYPE_2__* i_cm_id; } ;
struct TYPE_6__ {int f_sg; } ;
struct TYPE_5__ {int device; } ;
struct TYPE_4__ {int ii_inc; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int,int ) ;
 int FUNC_1 (struct rds_ib_connection*,TYPE_3__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct rds_ib_connection *VAR_1,
      struct rds_ib_recv_work *VAR_2)
{
 if (VAR_2->r_ibinc) {
  FUNC_2(&VAR_2->r_ibinc->ii_inc);
  VAR_2->r_ibinc = ((void*)0);
 }
 if (VAR_2->r_frag) {
  FUNC_0(VAR_1->i_cm_id->device, &VAR_2->r_frag->f_sg, 1, VAR_0);
  FUNC_1(VAR_1, VAR_2->r_frag);
  VAR_2->r_frag = ((void*)0);
 }
}
