
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct scatterlist {int dummy; } ;
struct rds_ib_frmr {scalar_t__ fr_state; TYPE_2__* mr; } ;
struct TYPE_3__ {struct rds_ib_frmr frmr; } ;
struct rds_ib_mr {int pool; struct rds_ib_device* device; struct rds_ib_connection* ic; TYPE_1__ u; } ;
struct rds_ib_device {int dummy; } ;
struct rds_ib_connection {int dummy; } ;
struct TYPE_4__ {int rkey; } ;


 int VAR_0 ;
 struct rds_ib_mr* FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct rds_ib_mr*) ;
 struct rds_ib_mr* FUNC_2 (struct rds_ib_device*,unsigned long) ;
 int FUNC_3 (struct rds_ib_mr*,int) ;
 int FUNC_4 (struct rds_ib_device*,int ,struct rds_ib_mr*,struct scatterlist*,unsigned long) ;

struct rds_ib_mr *FUNC_5(struct rds_ib_device *VAR_2,
      struct rds_ib_connection *VAR_3,
      struct scatterlist *VAR_4,
      unsigned long VAR_5, u32 *VAR_6)
{
 struct rds_ib_mr *VAR_7 = ((void*)0);
 struct rds_ib_frmr *VAR_8;
 int VAR_9;

 if (!VAR_3) {

  return FUNC_0(-VAR_0);
 }

 do {
  if (VAR_7)
   FUNC_3(VAR_7, 1);
  VAR_7 = FUNC_2(VAR_2, VAR_5);
  if (FUNC_1(VAR_7))
   return VAR_7;
  VAR_8 = &VAR_7->u.frmr;
 } while (VAR_8->fr_state != VAR_1);

 VAR_7->ic = VAR_3;
 VAR_7->device = VAR_2;
 VAR_9 = FUNC_4(VAR_2, VAR_7->pool, VAR_7, VAR_4, VAR_5);
 if (VAR_9 == 0) {
  *VAR_6 = VAR_8->mr->rkey;
 } else {
  FUNC_3(VAR_7, 0);
  VAR_7 = FUNC_0(VAR_9);
 }

 return VAR_7;
}
