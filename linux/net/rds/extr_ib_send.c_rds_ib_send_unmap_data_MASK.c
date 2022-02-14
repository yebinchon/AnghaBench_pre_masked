
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rm_data_op {scalar_t__ op_nents; int op_sg; } ;
struct rds_ib_connection {TYPE_1__* i_cm_id; } ;
struct TYPE_2__ {int device; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct rds_ib_connection *VAR_1,
       struct rm_data_op *VAR_2,
       int VAR_3)
{
 if (VAR_2->op_nents)
  FUNC_0(VAR_1->i_cm_id->device,
    VAR_2->op_sg, VAR_2->op_nents,
    VAR_0);
}
