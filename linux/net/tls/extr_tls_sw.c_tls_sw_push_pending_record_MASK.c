
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tls_sw_context_tx {struct tls_rec* open_rec; } ;
struct TYPE_2__ {size_t size; } ;
struct sk_msg {TYPE_1__ sg; } ;
struct tls_rec {struct sk_msg msg_plaintext; } ;
struct tls_context {int dummy; } ;
struct sock {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_msg*,struct sock*,int,int ,size_t*,int) ;
 struct tls_context* FUNC_1 (struct sock*) ;
 struct tls_sw_context_tx* FUNC_2 (struct tls_context*) ;

__attribute__((used)) static int FUNC_3(struct sock *VAR_1, int VAR_2)
{
 struct tls_context *VAR_3 = FUNC_1(VAR_1);
 struct tls_sw_context_tx *VAR_4 = FUNC_2(VAR_3);
 struct tls_rec *VAR_5 = VAR_4->open_rec;
 struct sk_msg *VAR_6;
 size_t VAR_7;

 if (!VAR_5)
  return 0;

 VAR_6 = &VAR_5->msg_plaintext;
 VAR_7 = VAR_6->sg.size;
 if (!VAR_7)
  return 0;

 return FUNC_0(VAR_6, VAR_1, 1, VAR_0,
       &VAR_7, VAR_2);
}
