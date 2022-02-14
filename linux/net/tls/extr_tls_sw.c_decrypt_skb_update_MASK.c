
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_sw_context_rx {int decrypted; int (* saved_data_ready ) (struct sock*) ;} ;
struct tls_prot_info {scalar_t__ overhead_size; scalar_t__ prepend_size; } ;
struct tls_context {scalar_t__ rx_conf; int rx; struct tls_prot_info prot_info; } ;
struct strp_msg {int full_len; int offset; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct iov_iter {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sock*,struct sk_buff*,struct iov_iter*,int *,int*,int*,int) ;
 int FUNC_1 (struct tls_sw_context_rx*,struct tls_prot_info*,struct sk_buff*) ;
 struct strp_msg* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*,struct tls_prot_info*,int *) ;
 int FUNC_5 (struct sock*,struct sk_buff*) ;
 struct tls_context* FUNC_6 (struct sock*) ;
 struct tls_sw_context_rx* FUNC_7 (struct tls_context*) ;

__attribute__((used)) static int FUNC_8(struct sock *VAR_2, struct sk_buff *VAR_3,
         struct iov_iter *VAR_4, int *VAR_5, bool *VAR_6,
         bool VAR_7)
{
 struct tls_context *VAR_8 = FUNC_6(VAR_2);
 struct tls_sw_context_rx *VAR_9 = FUNC_7(VAR_8);
 struct tls_prot_info *VAR_10 = &VAR_8->prot_info;
 struct strp_msg *VAR_11 = FUNC_2(VAR_3);
 int VAR_12, VAR_13 = 0;

 if (!VAR_9->decrypted) {
  if (VAR_8->rx_conf == VAR_1) {
   VAR_13 = FUNC_5(VAR_2, VAR_3);
   if (VAR_13 < 0)
    return VAR_13;
  }


  if (!VAR_9->decrypted) {
   VAR_13 = FUNC_0(VAR_2, VAR_3, VAR_4, ((void*)0), VAR_5, VAR_6,
            VAR_7);
   if (VAR_13 < 0) {
    if (VAR_13 == -VAR_0)
     FUNC_4(VAR_2, VAR_10,
             &VAR_8->rx);

    return VAR_13;
   }
  } else {
   *VAR_6 = 0;
  }

  VAR_12 = FUNC_1(VAR_9, VAR_10, VAR_3);
  if (VAR_12 < 0)
   return VAR_12;

  VAR_11->full_len -= VAR_12;
  VAR_11->offset += VAR_10->prepend_size;
  VAR_11->full_len -= VAR_10->overhead_size;
  FUNC_4(VAR_2, VAR_10, &VAR_8->rx);
  VAR_9->decrypted = 1;
  VAR_9->saved_data_ready(VAR_2);
 } else {
  *VAR_6 = 0;
 }

 return VAR_13;
}
