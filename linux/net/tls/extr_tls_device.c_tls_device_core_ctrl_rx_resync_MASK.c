
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct tls_prot_info {int rec_seq_size; } ;
struct TYPE_4__ {int decrypted_failed; int decrypted_tgt; } ;
struct tls_offload_context_rx {scalar_t__ resync_type; int resync_nh_do_now; TYPE_1__ resync_nh; scalar_t__ resync_nh_reset; } ;
struct TYPE_5__ {int rec_seq; } ;
struct tls_context {TYPE_2__ rx; struct tls_prot_info prot_info; } ;
struct strp_msg {scalar_t__ full_len; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_6__ {int copied_seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int ,int ) ;
 struct strp_msg* FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct sock*) ;
 TYPE_3__* FUNC_3 (struct sock*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct tls_context*,struct sock*,int ,int *) ;

__attribute__((used)) static void FUNC_6(struct tls_context *VAR_4,
        struct tls_offload_context_rx *VAR_5,
        struct sock *VAR_6, struct sk_buff *VAR_7)
{
 struct strp_msg *VAR_8;


 if (VAR_5->resync_type != VAR_3)
  return;

 if (VAR_5->resync_nh_do_now)
  return;

 if (VAR_5->resync_nh_reset) {
  VAR_5->resync_nh_reset = 0;
  VAR_5->resync_nh.decrypted_failed = 1;
  VAR_5->resync_nh.decrypted_tgt = VAR_1;
  return;
 }

 if (++VAR_5->resync_nh.decrypted_failed <= VAR_5->resync_nh.decrypted_tgt)
  return;


 if (VAR_5->resync_nh.decrypted_tgt < VAR_0)
  VAR_5->resync_nh.decrypted_tgt *= 2;
 else
  VAR_5->resync_nh.decrypted_tgt += VAR_0;

 VAR_8 = FUNC_1(VAR_7);


 if (FUNC_2(VAR_6) > VAR_8->full_len) {
  VAR_5->resync_nh_do_now = 1;
 } else {
  struct tls_prot_info *VAR_9 = &VAR_4->prot_info;
  u8 VAR_10[VAR_2];

  FUNC_0(VAR_10, VAR_4->rx.rec_seq, VAR_9->rec_seq_size);
  FUNC_4(VAR_10, VAR_9->rec_seq_size);

  FUNC_5(VAR_4, VAR_6, FUNC_3(VAR_6)->copied_seq,
         VAR_10);
 }
}
