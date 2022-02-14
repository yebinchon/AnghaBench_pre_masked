
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct rds_sock {int rs_snd_bytes; int rs_lock; int rs_send_queue; } ;
struct TYPE_4__ {int h_sequence; int h_len; } ;
struct TYPE_3__ {TYPE_2__ i_hdr; struct rds_conn_path* i_conn_path; struct rds_connection* i_conn; } ;
struct rds_message {TYPE_1__ m_inc; int m_flags; int m_conn_item; struct rds_sock* m_rs; int m_sock_item; } ;
struct rds_connection {int dummy; } ;
struct rds_conn_path {int cp_lock; int cp_send_queue; int cp_next_tx_seq; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct rds_message*) ;
 int FUNC_5 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_6 (struct rds_sock*) ;
 int FUNC_7 (struct rds_sock*) ;
 int FUNC_8 (char*,struct rds_message*,int,struct rds_sock*,int,unsigned long long) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_15(struct rds_sock *VAR_3, struct rds_connection *VAR_4,
        struct rds_conn_path *VAR_5,
        struct rds_message *VAR_6, __be16 VAR_7,
        __be16 VAR_8, int *VAR_9)
{
 unsigned long VAR_10;
 u32 VAR_11;

 if (*VAR_9)
  goto out;

 VAR_11 = FUNC_0(VAR_6->m_inc.i_hdr.h_len);



 FUNC_12(&VAR_3->rs_lock, VAR_10);
 if (VAR_3->rs_snd_bytes < FUNC_7(VAR_3)) {
  VAR_3->rs_snd_bytes += VAR_11;






  if (VAR_3->rs_snd_bytes >= FUNC_7(VAR_3) / 2)
   FUNC_9(VAR_0, &VAR_6->m_flags);

  FUNC_3(&VAR_6->m_sock_item, &VAR_3->rs_send_queue);
  FUNC_9(VAR_2, &VAR_6->m_flags);
  FUNC_4(VAR_6);
  FUNC_10(FUNC_6(VAR_3));
  VAR_6->m_rs = VAR_3;



  FUNC_5(&VAR_6->m_inc.i_hdr, VAR_7, VAR_8, 0);
  VAR_6->m_inc.i_conn = VAR_4;
  VAR_6->m_inc.i_conn_path = VAR_5;
  FUNC_4(VAR_6);

  FUNC_11(&VAR_5->cp_lock);
  VAR_6->m_inc.i_hdr.h_sequence = FUNC_2(VAR_5->cp_next_tx_seq++);
  FUNC_3(&VAR_6->m_conn_item, &VAR_5->cp_send_queue);
  FUNC_9(VAR_1, &VAR_6->m_flags);
  FUNC_13(&VAR_5->cp_lock);

  FUNC_8("queued msg %p len %d, rs %p bytes %d seq %llu\n",
    VAR_6, VAR_11, VAR_3, VAR_3->rs_snd_bytes,
    (unsigned long long)FUNC_1(VAR_6->m_inc.i_hdr.h_sequence));

  *VAR_9 = 1;
 }

 FUNC_14(&VAR_3->rs_lock, VAR_10);
out:
 return *VAR_9;
}
