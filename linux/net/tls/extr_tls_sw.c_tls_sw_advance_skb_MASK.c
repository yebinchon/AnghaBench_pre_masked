
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_sw_context_rx {int strp; int * recv_pkt; } ;
struct tls_context {int dummy; } ;
struct strp_msg {unsigned int full_len; unsigned int offset; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct sk_buff*) ;
 struct strp_msg* FUNC_2 (struct sk_buff*) ;
 struct tls_context* FUNC_3 (struct sock*) ;
 struct tls_sw_context_rx* FUNC_4 (struct tls_context*) ;

__attribute__((used)) static bool FUNC_5(struct sock *VAR_0, struct sk_buff *VAR_1,
          unsigned int VAR_2)
{
 struct tls_context *VAR_3 = FUNC_3(VAR_0);
 struct tls_sw_context_rx *VAR_4 = FUNC_4(VAR_3);

 if (VAR_1) {
  struct strp_msg *VAR_5 = FUNC_2(VAR_1);

  if (VAR_2 < VAR_5->full_len) {
   VAR_5->offset += VAR_2;
   VAR_5->full_len -= VAR_2;
   return 0;
  }
  FUNC_1(VAR_1);
 }


 VAR_4->recv_pkt = ((void*)0);
 FUNC_0(&VAR_4->strp);

 return 1;
}
