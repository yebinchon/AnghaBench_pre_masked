
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct tls_prot_info {int rec_seq_size; } ;
struct tls_offload_context_rx {int resync_type; int resync_nh_do_now; int resync_req; } ;
struct TYPE_2__ {int rec_seq; } ;
struct tls_context {scalar_t__ rx_conf; TYPE_1__ rx; struct tls_prot_info prot_info; } ;
struct sock {int dummy; } ;
typedef int s64 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct tls_context*,struct sock*,int,int *) ;
 struct tls_context* FUNC_7 (struct sock*) ;
 struct tls_offload_context_rx* FUNC_8 (struct tls_context*) ;

void FUNC_9(struct sock *VAR_3, u32 VAR_4, u32 VAR_5)
{
 struct tls_context *VAR_6 = FUNC_7(VAR_3);
 struct tls_offload_context_rx *VAR_7;
 u8 VAR_8[VAR_2];
 struct tls_prot_info *VAR_9;
 u32 VAR_10;
 s64 VAR_11;
 u32 VAR_12;

 if (VAR_6->rx_conf != VAR_1)
  return;

 VAR_9 = &VAR_6->prot_info;
 VAR_7 = FUNC_8(VAR_6);
 FUNC_3(VAR_8, VAR_6->rx.rec_seq, VAR_9->rec_seq_size);

 switch (VAR_7->resync_type) {
 case 128:
  VAR_11 = FUNC_0(&VAR_7->resync_req);
  VAR_12 = VAR_11 >> 32;
  VAR_5 += VAR_0 - 1;
  VAR_10 = VAR_11;

  if (FUNC_2(!VAR_10) || VAR_12 != VAR_5 ||
      !FUNC_1(&VAR_7->resync_req, &VAR_11, 0))
   return;
  break;
 case 129:
  if (FUNC_2(!VAR_7->resync_nh_do_now))
   return;




  if (FUNC_4(VAR_3) > VAR_4)
   return;

  VAR_7->resync_nh_do_now = 0;
  VAR_5 += VAR_4;
  FUNC_5(VAR_8, VAR_9->rec_seq_size);
  break;
 }

 FUNC_6(VAR_6, VAR_3, VAR_5, VAR_8);
}
