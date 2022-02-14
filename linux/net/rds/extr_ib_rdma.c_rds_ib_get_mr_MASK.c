
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct scatterlist {int dummy; } ;
struct TYPE_2__ {int * s6_addr32; } ;
struct rds_sock {TYPE_1__ rs_bound_addr; } ;
typedef void rds_ib_mr ;
struct rds_ib_device {scalar_t__ use_fastreg; int mr_1m_pool; int mr_8k_pool; } ;
struct rds_ib_connection {int dummy; } ;
struct rds_connection {struct rds_ib_connection* c_transport_data; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct rds_ib_device*) ;
 struct rds_ib_device* FUNC_5 (int ) ;
 void* FUNC_6 (struct rds_ib_device*,struct scatterlist*,unsigned long,int *) ;
 void* FUNC_7 (struct rds_ib_device*,struct rds_ib_connection*,struct scatterlist*,unsigned long,int *) ;

void *FUNC_8(struct scatterlist *VAR_1, unsigned long VAR_2,
      struct rds_sock *VAR_3, u32 *VAR_4,
      struct rds_connection *VAR_5)
{
 struct rds_ib_device *VAR_6;
 struct rds_ib_mr *VAR_7 = ((void*)0);
 struct rds_ib_connection *VAR_8 = ((void*)0);
 int VAR_9;

 VAR_6 = FUNC_5(VAR_3->rs_bound_addr.s6_addr32[3]);
 if (!VAR_6) {
  VAR_9 = -VAR_0;
  goto out;
 }

 if (VAR_5)
  VAR_8 = VAR_5->c_transport_data;

 if (!VAR_6->mr_8k_pool || !VAR_6->mr_1m_pool) {
  VAR_9 = -VAR_0;
  goto out;
 }

 if (VAR_6->use_fastreg)
  VAR_7 = FUNC_7(VAR_6, VAR_8, VAR_1, VAR_2, VAR_4);
 else
  VAR_7 = FUNC_6(VAR_6, VAR_1, VAR_2, VAR_4);
 if (FUNC_1(VAR_7)) {
  VAR_9 = FUNC_2(VAR_7);
  FUNC_3("RDS/IB: rds_ib_get_mr failed (errno=%d)\n", VAR_9);
 } else {
  return VAR_7;
 }

 out:
 if (VAR_6)
  FUNC_4(VAR_6);

 return FUNC_0(VAR_9);
}
