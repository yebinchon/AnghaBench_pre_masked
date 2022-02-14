
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct rds_tcp_connection {TYPE_7__* t_sock; scalar_t__ t_last_expected_una; scalar_t__ t_last_sent_nxt; } ;
struct TYPE_15__ {int op_nents; TYPE_8__* op_sg; } ;
struct TYPE_12__ {int h_flags; int h_len; } ;
struct TYPE_13__ {TYPE_3__ i_hdr; struct rds_conn_path* i_conn_path; } ;
struct rds_message {TYPE_6__ data; TYPE_4__ m_inc; scalar_t__ m_ack_seq; int m_flags; } ;
struct rds_header {int dummy; } ;
struct rds_connection {int c_faddr; } ;
struct rds_conn_path {int cp_index; struct rds_tcp_connection* cp_transport_data; } ;
struct TYPE_17__ {unsigned int length; scalar_t__ offset; } ;
struct TYPE_16__ {TYPE_5__* ops; TYPE_2__* sk; } ;
struct TYPE_14__ {int (* sendpage ) (TYPE_7__*,scalar_t__,scalar_t__,unsigned int,int) ;} ;
struct TYPE_11__ {TYPE_1__* sk_socket; } ;
struct TYPE_10__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int *,int ,int) ;
 int FUNC_2 (struct rds_conn_path*,int) ;
 scalar_t__ FUNC_3 (struct rds_conn_path*) ;
 int FUNC_4 (TYPE_7__*,void*,int) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct rds_tcp_connection*) ;
 int FUNC_7 (char*,void*,scalar_t__,unsigned int,...) ;
 int VAR_9 ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (TYPE_8__*) ;
 int FUNC_10 () ;
 int FUNC_11 (TYPE_7__*,scalar_t__,scalar_t__,unsigned int,int) ;
 scalar_t__ FUNC_12 (int ,int *) ;

int FUNC_13(struct rds_connection *VAR_10, struct rds_message *VAR_11,
   unsigned int VAR_12, unsigned int VAR_13, unsigned int VAR_14)
{
 struct rds_conn_path *VAR_15 = VAR_11->m_inc.i_conn_path;
 struct rds_tcp_connection *VAR_16 = VAR_15->cp_transport_data;
 int VAR_17 = 0;
 int VAR_18 = 0;
 int VAR_19;

 if (VAR_12 == 0) {




  VAR_16->t_last_sent_nxt = FUNC_6(VAR_16);
  VAR_11->m_ack_seq = VAR_16->t_last_sent_nxt +
    sizeof(struct rds_header) +
    FUNC_0(VAR_11->m_inc.i_hdr.h_len) - 1;
  FUNC_10();
  FUNC_8(VAR_6, &VAR_11->m_flags);
  VAR_16->t_last_expected_una = VAR_11->m_ack_seq + 1;

  if (FUNC_12(VAR_7, &VAR_11->m_flags))
   VAR_11->m_inc.i_hdr.h_flags |= VAR_5;

  FUNC_7("rm %p tcp nxt %u ack_seq %llu\n",
    VAR_11, FUNC_6(VAR_16),
    (unsigned long long)VAR_11->m_ack_seq);
 }

 if (VAR_12 < sizeof(struct rds_header)) {

  FUNC_8(VAR_8, &VAR_16->t_sock->sk->sk_socket->flags);

  VAR_18 = FUNC_4(VAR_16->t_sock,
          (void *)&VAR_11->m_inc.i_hdr + VAR_12,
          sizeof(VAR_11->m_inc.i_hdr) - VAR_12);
  if (VAR_18 < 0)
   goto out;
  VAR_17 += VAR_18;
  if (VAR_12 + VAR_17 != sizeof(struct rds_header))
   goto out;
 }

 VAR_19 = VAR_11->data.op_nents > 1 ? (VAR_2 | VAR_4) : 0;
 while (VAR_13 < VAR_11->data.op_nents) {
  int VAR_20 = VAR_1 | VAR_3 | VAR_19;

  VAR_18 = VAR_16->t_sock->ops->sendpage(VAR_16->t_sock,
      FUNC_9(&VAR_11->data.op_sg[VAR_13]),
      VAR_11->data.op_sg[VAR_13].offset + VAR_14,
      VAR_11->data.op_sg[VAR_13].length - VAR_14,
      VAR_20);
  FUNC_7("tcp sendpage %p:%u:%u ret %d\n", (void *)FUNC_9(&VAR_11->data.op_sg[VAR_13]),
    VAR_11->data.op_sg[VAR_13].offset + VAR_14, VAR_11->data.op_sg[VAR_13].length - VAR_14,
    VAR_18);
  if (VAR_18 <= 0)
   break;

  VAR_14 += VAR_18;
  VAR_17 += VAR_18;
  if (VAR_14 == VAR_11->data.op_sg[VAR_13].length) {
   VAR_14 = 0;
   VAR_13++;
  }
  if (VAR_13 == VAR_11->data.op_nents - 1)
   VAR_19 = 0;
 }

out:
 if (VAR_18 <= 0) {

  if (VAR_18 == -VAR_0) {
   FUNC_5(VAR_9);
   VAR_18 = 0;
  } else {




   if (FUNC_3(VAR_15)) {
    FUNC_1("RDS/tcp: send to %pI6c on cp [%d]"
     "returned %d, "
     "disconnecting and reconnecting\n",
     &VAR_10->c_faddr, VAR_15->cp_index, VAR_18);
    FUNC_2(VAR_15, 0);
   }
  }
 }
 if (VAR_17 == 0)
  VAR_17 = VAR_18;
 return VAR_17;
}
