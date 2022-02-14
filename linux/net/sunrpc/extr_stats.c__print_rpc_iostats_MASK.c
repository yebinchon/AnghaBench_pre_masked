
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct rpc_procinfo {int dummy; } ;
struct rpc_iostats {int om_error_status; int om_execute; int om_rtt; int om_queue; int om_bytes_recv; int om_bytes_sent; int om_timeouts; int om_ntrans; int om_ops; } ;


 int FUNC_0 (struct seq_file*,int,struct rpc_procinfo const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct seq_file*,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct seq_file *VAR_0, struct rpc_iostats *VAR_1,
          int VAR_2, const struct rpc_procinfo *VAR_3)
{
 FUNC_0(VAR_0, VAR_2, VAR_3);
 FUNC_2(VAR_0, "%lu %lu %lu %llu %llu %llu %llu %llu %lu\n",
     VAR_1->om_ops,
     VAR_1->om_ntrans,
     VAR_1->om_timeouts,
     VAR_1->om_bytes_sent,
     VAR_1->om_bytes_recv,
     FUNC_1(VAR_1->om_queue),
     FUNC_1(VAR_1->om_rtt),
     FUNC_1(VAR_1->om_execute),
     VAR_1->om_error_status);
}
