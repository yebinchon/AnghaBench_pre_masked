
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union ib_gid {int dummy; } ib_gid ;
struct rds_info_rdma_connection {int cache_allocs; int max_send_sge; int max_recv_wr; int max_send_wr; int dst_gid; int src_gid; int sl; int tos; int dst_addr; int src_addr; } ;
struct rds_ib_device {int max_sge; } ;
struct TYPE_8__ {int w_nr; } ;
struct TYPE_7__ {int w_nr; } ;
struct rds_ib_connection {int i_cache_allocs; TYPE_4__ i_recv_ring; TYPE_3__ i_send_ring; struct rds_ib_device* rds_ibdev; int i_cm_id; int i_sl; } ;
struct TYPE_6__ {int * s6_addr32; } ;
struct TYPE_5__ {int * s6_addr32; } ;
struct rds_connection {int c_tos; TYPE_2__ c_faddr; TYPE_1__ c_laddr; scalar_t__ c_isv6; int * c_trans; struct rds_ib_connection* c_transport_data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int ,union ib_gid*,union ib_gid*) ;
 scalar_t__ FUNC_3 (struct rds_connection*) ;
 int FUNC_4 (struct rds_ib_device*,struct rds_info_rdma_connection*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(struct rds_connection *VAR_2,
        void *VAR_3)
{
 struct rds_info_rdma_connection *VAR_4 = VAR_3;
 struct rds_ib_connection *VAR_5 = VAR_2->c_transport_data;


 if (VAR_2->c_trans != &VAR_1)
  return 0;
 if (VAR_2->c_isv6)
  return 0;

 VAR_4->src_addr = VAR_2->c_laddr.s6_addr32[3];
 VAR_4->dst_addr = VAR_2->c_faddr.s6_addr32[3];
 if (VAR_5) {
  VAR_4->tos = VAR_2->c_tos;
  VAR_4->sl = VAR_5->i_sl;
 }

 FUNC_1(&VAR_4->src_gid, 0, sizeof(VAR_4->src_gid));
 FUNC_1(&VAR_4->dst_gid, 0, sizeof(VAR_4->dst_gid));
 if (FUNC_3(VAR_2) == VAR_0) {
  struct rds_ib_device *VAR_6;

  FUNC_2(VAR_5->i_cm_id, (union ib_gid *)&VAR_4->src_gid,
          (union ib_gid *)&VAR_4->dst_gid);

  VAR_6 = VAR_5->rds_ibdev;
  VAR_4->max_send_wr = VAR_5->i_send_ring.w_nr;
  VAR_4->max_recv_wr = VAR_5->i_recv_ring.w_nr;
  VAR_4->max_send_sge = VAR_6->max_sge;
  FUNC_4(VAR_6, VAR_4);
  VAR_4->cache_allocs = FUNC_0(&VAR_5->i_cache_allocs);
 }
 return 1;
}
