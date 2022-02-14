
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sock {int sk_rcvbuf; int sk_sndbuf; int sk_wmem_queued; int sk_wmem_alloc; int sk_state; } ;
struct seq_file {int dummy; } ;
struct sctp_transport {struct sctp_association* asoc; } ;
struct TYPE_5__ {int port; } ;
struct sctp_ep_common {TYPE_1__ bind_addr; struct sock* sk; } ;
struct TYPE_7__ {int outcnt; int incnt; } ;
struct TYPE_6__ {int port; } ;
struct sctp_association {int rtx_data_chunks; int shutdown_retries; int init_retries; int max_retrans; TYPE_3__ stream; int hbinterval; TYPE_2__ peer; int rmem_alloc; int sndbuf_used; int assoc_id; int state; struct sctp_ep_common base; } ;
struct TYPE_8__ {int type; } ;


 void* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct seq_file*,struct sctp_ep_common*) ;
 int FUNC_4 (struct seq_file*,struct sctp_association*) ;
 TYPE_4__* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sctp_transport*) ;
 int FUNC_7 (struct seq_file*,char*,...) ;
 int FUNC_8 (struct seq_file*) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sock*) ;

__attribute__((used)) static int FUNC_11(struct seq_file *VAR_1, void *VAR_2)
{
 struct sctp_transport *VAR_3;
 struct sctp_association *VAR_4;
 struct sctp_ep_common *VAR_5;
 struct sock *VAR_6;

 if (VAR_2 == VAR_0) {
  FUNC_7(VAR_1, " ASSOC     SOCK   STY SST ST HBKT "
    "ASSOC-ID TX_QUEUE RX_QUEUE UID INODE LPORT "
    "RPORT LADDRS <-> RADDRS "
    "HBINT INS OUTS MAXRT T1X T2X RTXC "
    "wmema wmemq sndbuf rcvbuf\n");
  return 0;
 }

 VAR_3 = (struct sctp_transport *)VAR_2;
 VAR_4 = VAR_3->asoc;
 VAR_5 = &VAR_4->base;
 VAR_6 = VAR_5->sk;

 FUNC_7(VAR_1,
     "%8pK %8pK %-3d %-3d %-2d %-4d "
     "%4d %8d %8d %7u %5lu %-5d %5d ",
     VAR_4, VAR_6, FUNC_5(VAR_6)->type, VAR_6->sk_state,
     VAR_4->state, 0,
     VAR_4->assoc_id,
     VAR_4->sndbuf_used,
     FUNC_0(&VAR_4->rmem_alloc),
     FUNC_1(FUNC_8(VAR_1), FUNC_10(VAR_6)),
     FUNC_9(VAR_6),
     VAR_5->bind_addr.port,
     VAR_4->peer.port);
 FUNC_7(VAR_1, " ");
 FUNC_3(VAR_1, VAR_5);
 FUNC_7(VAR_1, "<-> ");
 FUNC_4(VAR_1, VAR_4);
 FUNC_7(VAR_1, "\t%8lu %5d %5d %4d %4d %4d %8d "
     "%8d %8d %8d %8d",
  VAR_4->hbinterval, VAR_4->stream.incnt,
  VAR_4->stream.outcnt, VAR_4->max_retrans,
  VAR_4->init_retries, VAR_4->shutdown_retries,
  VAR_4->rtx_data_chunks,
  FUNC_2(&VAR_6->sk_wmem_alloc),
  VAR_6->sk_wmem_queued,
  VAR_6->sk_sndbuf,
  VAR_6->sk_rcvbuf);
 FUNC_7(VAR_1, "\n");

 FUNC_6(VAR_3);

 return 0;
}
