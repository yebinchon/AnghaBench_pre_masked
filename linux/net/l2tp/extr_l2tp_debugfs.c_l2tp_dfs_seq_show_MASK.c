
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct l2tp_dfs_seq_data {int session; int tunnel; } ;


 void* VAR_0 ;
 int FUNC_0 (struct seq_file*,int ) ;
 int FUNC_1 (struct seq_file*,int ) ;
 int FUNC_2 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_1, void *VAR_2)
{
 struct l2tp_dfs_seq_data *VAR_3 = VAR_2;


 if (VAR_2 == VAR_0) {
  FUNC_2(VAR_1, "TUNNEL ID, peer ID from IP to IP\n");
  FUNC_2(VAR_1, " L2TPv2/L2TPv3, UDP/IP\n");
  FUNC_2(VAR_1, " sessions session-count, refcnt refcnt/sk->refcnt\n");
  FUNC_2(VAR_1, " debug tx-pkts/bytes/errs rx-pkts/bytes/errs\n");
  FUNC_2(VAR_1, "  SESSION ID, peer ID, PWTYPE\n");
  FUNC_2(VAR_1, "   refcnt cnt\n");
  FUNC_2(VAR_1, "   offset OFFSET l2specific TYPE/LEN\n");
  FUNC_2(VAR_1, "   [ cookie ]\n");
  FUNC_2(VAR_1, "   [ peer cookie ]\n");
  FUNC_2(VAR_1, "   config mtu/mru/rcvseq/sendseq/dataseq/lns debug reorderto\n");
  FUNC_2(VAR_1, "   nr/ns tx-pkts/bytes/errs rx-pkts/bytes/errs\n");
  goto out;
 }

 if (!VAR_3->session)
  FUNC_1(VAR_1, VAR_3->tunnel);
 else
  FUNC_0(VAR_1, VAR_3->session);

out:
 return 0;
}
