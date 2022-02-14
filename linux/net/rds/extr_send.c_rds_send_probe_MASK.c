
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_10__ {int h_flags; } ;
struct TYPE_9__ {TYPE_4__ i_hdr; struct rds_conn_path* i_conn_path; TYPE_6__* i_conn; } ;
struct TYPE_7__ {int op_active; } ;
struct rds_message {TYPE_3__ m_inc; int m_flags; int m_conn_item; TYPE_1__ data; int m_daddr; } ;
struct rds_conn_path {int cp_send_w; TYPE_6__* cp_conn; int cp_lock; int cp_next_tx_seq; int cp_send_queue; } ;
typedef int npaths ;
typedef int __be16 ;
struct TYPE_11__ {int c_my_gen_num; TYPE_2__* c_trans; int c_fcong; int c_faddr; } ;
struct TYPE_8__ {scalar_t__ t_mp_capable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ,int *,int) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int ,int,int *) ;
 int FUNC_9 (struct rds_conn_path*) ;
 int FUNC_10 (TYPE_6__*) ;
 int FUNC_11 (TYPE_4__*,int ,int *,int) ;
 int FUNC_12 (struct rds_message*) ;
 struct rds_message* FUNC_13 (int ,int ) ;
 int FUNC_14 (TYPE_4__*,int ,int ,int ) ;
 int FUNC_15 (struct rds_message*) ;
 int FUNC_16 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_17 (int ,int *) ;
 int FUNC_18 (int *,unsigned long) ;
 int FUNC_19 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_20(struct rds_conn_path *VAR_9, __be16 VAR_10,
        __be16 VAR_11, u8 VAR_12)
{
 struct rds_message *VAR_13;
 unsigned long VAR_14;
 int VAR_15 = 0;

 VAR_13 = FUNC_13(0, VAR_1);
 if (!VAR_13) {
  VAR_15 = -VAR_0;
  goto out;
 }

 VAR_13->m_daddr = VAR_9->cp_conn->c_faddr;
 VAR_13->data.op_active = 1;

 FUNC_9(VAR_9);

 VAR_15 = FUNC_8(VAR_9->cp_conn->c_fcong, VAR_11, 1, ((void*)0));
 if (VAR_15)
  goto out;

 FUNC_18(&VAR_9->cp_lock, VAR_14);
 FUNC_4(&VAR_13->m_conn_item, &VAR_9->cp_send_queue);
 FUNC_17(VAR_5, &VAR_13->m_flags);
 FUNC_12(VAR_13);
 VAR_13->m_inc.i_conn = VAR_9->cp_conn;
 VAR_13->m_inc.i_conn_path = VAR_9;

 FUNC_14(&VAR_13->m_inc.i_hdr, VAR_10, VAR_11,
        VAR_9->cp_next_tx_seq);
 VAR_13->m_inc.i_hdr.h_flags |= VAR_12;
 VAR_9->cp_next_tx_seq++;

 if (FUNC_0(FUNC_1(VAR_10), FUNC_1(VAR_11)) &&
     VAR_9->cp_conn->c_trans->t_mp_capable) {
  u16 VAR_16 = FUNC_2(VAR_4);
  u32 VAR_17 = FUNC_3(VAR_9->cp_conn->c_my_gen_num);

  FUNC_11(&VAR_13->m_inc.i_hdr,
       VAR_3, &VAR_16,
       sizeof(VAR_16));
  FUNC_11(&VAR_13->m_inc.i_hdr,
       VAR_2,
       &VAR_17,
       sizeof(u32));
 }
 FUNC_19(&VAR_9->cp_lock, VAR_14);

 FUNC_16(VAR_8);
 FUNC_16(VAR_7);


 FUNC_6();
 if (!FUNC_10(VAR_9->cp_conn))
  FUNC_5(VAR_6, &VAR_9->cp_send_w, 1);
 FUNC_7();

 FUNC_15(VAR_13);
 return 0;

out:
 if (VAR_13)
  FUNC_15(VAR_13);
 return VAR_15;
}
