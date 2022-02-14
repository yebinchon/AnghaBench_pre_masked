
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct scatterlist {int dummy; } ;
struct rds_ib_fmr {TYPE_1__* fmr; } ;
struct TYPE_4__ {struct rds_ib_fmr fmr; } ;
struct rds_ib_mr {TYPE_2__ u; struct rds_ib_device* device; } ;
struct rds_ib_device {int dummy; } ;
struct TYPE_3__ {int rkey; } ;


 scalar_t__ FUNC_0 (struct rds_ib_mr*) ;
 struct rds_ib_mr* FUNC_1 (struct rds_ib_device*,unsigned long) ;
 int FUNC_2 (struct rds_ib_mr*,int ) ;
 int FUNC_3 (struct rds_ib_device*,struct rds_ib_mr*,struct scatterlist*,unsigned long) ;

struct rds_ib_mr *FUNC_4(struct rds_ib_device *VAR_0,
     struct scatterlist *VAR_1,
     unsigned long VAR_2,
     u32 *VAR_3)
{
 struct rds_ib_mr *VAR_4 = ((void*)0);
 struct rds_ib_fmr *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_1(VAR_0, VAR_2);
 if (FUNC_0(VAR_4))
  return VAR_4;

 VAR_4->device = VAR_0;
 VAR_5 = &VAR_4->u.fmr;
 VAR_6 = FUNC_3(VAR_0, VAR_4, VAR_1, VAR_2);
 if (VAR_6 == 0)
  *VAR_3 = VAR_5->fmr->rkey;
 else
  FUNC_2(VAR_4, 0);

 return VAR_4;
}
