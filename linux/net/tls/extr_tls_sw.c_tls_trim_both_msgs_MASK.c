
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_sw_context_tx {struct tls_rec* open_rec; } ;
struct tls_rec {int msg_encrypted; int msg_plaintext; } ;
struct tls_prot_info {scalar_t__ overhead_size; } ;
struct tls_context {struct tls_prot_info prot_info; } ;
struct sock {int dummy; } ;


 int FUNC_0 (struct sock*,int *,int) ;
 struct tls_context* FUNC_1 (struct sock*) ;
 struct tls_sw_context_tx* FUNC_2 (struct tls_context*) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_0, int VAR_1)
{
 struct tls_context *VAR_2 = FUNC_1(VAR_0);
 struct tls_prot_info *VAR_3 = &VAR_2->prot_info;
 struct tls_sw_context_tx *VAR_4 = FUNC_2(VAR_2);
 struct tls_rec *VAR_5 = VAR_4->open_rec;

 FUNC_0(VAR_0, &VAR_5->msg_plaintext, VAR_1);
 if (VAR_1 > 0)
  VAR_1 += VAR_3->overhead_size;
 FUNC_0(VAR_0, &VAR_5->msg_encrypted, VAR_1);
}
