
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct socket {int dummy; } ;
struct rds_info_rdma_connection {int dummy; } ;
struct rds_info_lengths {int dummy; } ;
struct rds_info_iterator {int dummy; } ;


 int FUNC_0 (struct socket*,unsigned int,struct rds_info_iterator*,struct rds_info_lengths*,int ,int *,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct socket *VAR_1, unsigned int VAR_2,
      struct rds_info_iterator *VAR_3,
      struct rds_info_lengths *VAR_4)
{
 u64 VAR_5[(sizeof(struct rds_info_rdma_connection) + 7) / 8];

 FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4,
    VAR_0,
    VAR_5,
    sizeof(struct rds_info_rdma_connection));
}
