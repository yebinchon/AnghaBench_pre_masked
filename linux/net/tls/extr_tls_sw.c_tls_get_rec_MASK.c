
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_sw_context_tx {int aead_send; } ;
struct sk_msg {int dummy; } ;
struct tls_rec {int * sg_aead_out; int aad_space; int * sg_aead_in; struct sk_msg msg_encrypted; struct sk_msg msg_plaintext; } ;
struct tls_prot_info {int aad_size; } ;
struct tls_context {struct tls_prot_info prot_info; } ;
struct sock {int sk_allocation; } ;


 int FUNC_0 (int ) ;
 struct tls_rec* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct sk_msg*) ;
 struct tls_context* FUNC_6 (struct sock*) ;
 struct tls_sw_context_tx* FUNC_7 (struct tls_context*) ;

__attribute__((used)) static struct tls_rec *FUNC_8(struct sock *VAR_0)
{
 struct tls_context *VAR_1 = FUNC_6(VAR_0);
 struct tls_prot_info *VAR_2 = &VAR_1->prot_info;
 struct tls_sw_context_tx *VAR_3 = FUNC_7(VAR_1);
 struct sk_msg *VAR_4, *VAR_5;
 struct tls_rec *VAR_6;
 int VAR_7;

 VAR_7 = sizeof(struct tls_rec) + FUNC_0(VAR_3->aead_send);

 VAR_6 = FUNC_1(VAR_7, VAR_0->sk_allocation);
 if (!VAR_6)
  return ((void*)0);

 VAR_4 = &VAR_6->msg_plaintext;
 VAR_5 = &VAR_6->msg_encrypted;

 FUNC_5(VAR_4);
 FUNC_5(VAR_5);

 FUNC_2(VAR_6->sg_aead_in, 2);
 FUNC_3(&VAR_6->sg_aead_in[0], VAR_6->aad_space, VAR_2->aad_size);
 FUNC_4(&VAR_6->sg_aead_in[1]);

 FUNC_2(VAR_6->sg_aead_out, 2);
 FUNC_3(&VAR_6->sg_aead_out[0], VAR_6->aad_space, VAR_2->aad_size);
 FUNC_4(&VAR_6->sg_aead_out[1]);

 return VAR_6;
}
