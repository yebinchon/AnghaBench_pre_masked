
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tls_sw_context_tx {struct tls_rec* open_rec; } ;
struct TYPE_2__ {int size; } ;
struct sk_msg {TYPE_1__ sg; } ;
struct tls_rec {struct sk_msg msg_encrypted; struct sk_msg msg_plaintext; } ;
struct tls_prot_info {int prepend_size; } ;
struct tls_context {struct tls_prot_info prot_info; } ;
struct sock {int dummy; } ;


 int FUNC_0 (struct sock*,struct sk_msg*,struct sk_msg*,int,int) ;
 struct tls_context* FUNC_1 (struct sock*) ;
 struct tls_sw_context_tx* FUNC_2 (struct tls_context*) ;

__attribute__((used)) static int FUNC_3(struct sock *VAR_0, int VAR_1)
{
 struct tls_context *VAR_2 = FUNC_1(VAR_0);
 struct tls_prot_info *VAR_3 = &VAR_2->prot_info;
 struct tls_sw_context_tx *VAR_4 = FUNC_2(VAR_2);
 struct tls_rec *VAR_5 = VAR_4->open_rec;
 struct sk_msg *VAR_6 = &VAR_5->msg_plaintext;
 struct sk_msg *VAR_7 = &VAR_5->msg_encrypted;
 int VAR_8, VAR_9;





 VAR_9 = VAR_1 - VAR_6->sg.size;




 VAR_8 = VAR_3->prepend_size + VAR_6->sg.size;

 return FUNC_0(VAR_0, VAR_6, VAR_7, VAR_8, VAR_9);
}
