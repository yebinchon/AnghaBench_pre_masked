
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sock {int dummy; } ;
struct rds_sock {int rs_recv_lock; int rs_recv_queue; } ;
struct TYPE_7__ {int rx_tstamp; } ;
struct TYPE_9__ {scalar_t__ h_sport; scalar_t__ h_dport; int h_flags; int h_len; int h_sequence; } ;
struct rds_incoming {int i_item; int * i_rx_lat_trace; TYPE_2__ i_usercopy; TYPE_4__ i_hdr; struct rds_connection* i_conn; int i_rx_jiffies; struct rds_conn_path* i_conn_path; } ;
struct rds_connection {int c_lcong; int c_bound_if; struct rds_conn_path* c_path; TYPE_1__* c_trans; } ;
struct rds_conn_path {scalar_t__ cp_next_rx_seq; TYPE_3__* cp_conn; } ;
struct in6_addr {int dummy; } ;
typedef int gfp_t ;
struct TYPE_8__ {int c_hs_waitq; } ;
struct TYPE_6__ {scalar_t__ t_mp_capable; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_5 ;
 int FUNC_5 () ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 () ;
 struct rds_sock* FUNC_8 (struct in6_addr*,scalar_t__,int ) ;
 int FUNC_9 (struct rds_incoming*) ;
 int FUNC_10 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_11 (struct rds_incoming*,struct rds_sock*) ;
 int FUNC_12 (struct rds_sock*,struct sock*,int ,int ,scalar_t__) ;
 struct sock* FUNC_13 (struct rds_sock*) ;
 int FUNC_14 (struct rds_conn_path*,scalar_t__) ;
 int FUNC_15 (struct rds_sock*) ;
 int FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_18 (char*,...) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_19 (struct sock*,int ) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *,unsigned long) ;
 int FUNC_22 (int *,unsigned long) ;

void FUNC_23(struct rds_connection *VAR_12, struct in6_addr *VAR_13,
         struct in6_addr *VAR_14,
         struct rds_incoming *VAR_15, gfp_t VAR_16)
{
 struct rds_sock *VAR_17 = ((void*)0);
 struct sock *VAR_18;
 unsigned long VAR_19;
 struct rds_conn_path *VAR_20;

 VAR_15->i_conn = VAR_12;
 VAR_15->i_rx_jiffies = VAR_5;
 if (VAR_12->c_trans->t_mp_capable)
  VAR_20 = VAR_15->i_conn_path;
 else
  VAR_20 = &VAR_12->c_path[0];

 FUNC_18("conn %p next %llu inc %p seq %llu len %u sport %u dport %u "
   "flags 0x%x rx_jiffies %lu\n", VAR_12,
   (unsigned long long)VAR_20->cp_next_rx_seq,
   VAR_15,
   (unsigned long long)FUNC_4(VAR_15->i_hdr.h_sequence),
   FUNC_3(VAR_15->i_hdr.h_len),
   FUNC_2(VAR_15->i_hdr.h_sport),
   FUNC_2(VAR_15->i_hdr.h_dport),
   VAR_15->i_hdr.h_flags,
   VAR_15->i_rx_jiffies);
 if (FUNC_4(VAR_15->i_hdr.h_sequence) < VAR_20->cp_next_rx_seq &&
     (VAR_15->i_hdr.h_flags & VAR_1)) {
  FUNC_17(VAR_9);
  goto out;
 }
 VAR_20->cp_next_rx_seq = FUNC_4(VAR_15->i_hdr.h_sequence) + 1;

 if (VAR_6 && VAR_15->i_hdr.h_dport == 0) {
  if (VAR_15->i_hdr.h_sport == 0) {
   FUNC_18("ignore ping with 0 sport from %pI6c\n",
     VAR_13);
   goto out;
  }
  FUNC_17(VAR_10);
  FUNC_14(VAR_20, VAR_15->i_hdr.h_sport);

  if (FUNC_0(FUNC_2(VAR_15->i_hdr.h_sport),
     FUNC_2(VAR_15->i_hdr.h_dport))) {
   FUNC_10(&VAR_15->i_hdr, VAR_20->cp_conn);
   FUNC_16(VAR_20->cp_conn);
  }
  goto out;
 }

 if (FUNC_2(VAR_15->i_hdr.h_dport) == VAR_0 &&
     VAR_15->i_hdr.h_sport == 0) {
  FUNC_10(&VAR_15->i_hdr, VAR_20->cp_conn);

  FUNC_16(VAR_20->cp_conn);
  FUNC_20(&VAR_20->cp_conn->c_hs_waitq);
  goto out;
 }

 VAR_17 = FUNC_8(VAR_14, VAR_15->i_hdr.h_dport, VAR_12->c_bound_if);
 if (!VAR_17) {
  FUNC_17(VAR_8);
  goto out;
 }


 FUNC_11(VAR_15, VAR_17);


 VAR_18 = FUNC_13(VAR_17);


 FUNC_21(&VAR_17->rs_recv_lock, VAR_19);
 if (!FUNC_19(VAR_18, VAR_3)) {
  FUNC_18("adding inc %p to rs %p's recv queue\n", VAR_15, VAR_17);
  FUNC_17(VAR_11);
  FUNC_12(VAR_17, VAR_18, VAR_15->i_conn->c_lcong,
          FUNC_3(VAR_15->i_hdr.h_len),
          VAR_15->i_hdr.h_dport);
  if (FUNC_19(VAR_18, VAR_4))
   VAR_15->i_usercopy.rx_tstamp = FUNC_5();
  FUNC_9(VAR_15);
  VAR_15->i_rx_lat_trace[VAR_2] = FUNC_7();
  FUNC_6(&VAR_15->i_item, &VAR_17->rs_recv_queue);
  FUNC_1(VAR_18);
 } else {
  FUNC_17(VAR_7);
 }
 FUNC_22(&VAR_17->rs_recv_lock, VAR_19);

out:
 if (VAR_17)
  FUNC_15(VAR_17);
}
