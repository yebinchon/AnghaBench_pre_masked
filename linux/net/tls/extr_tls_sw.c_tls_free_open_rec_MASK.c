
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_sw_context_tx {struct tls_rec* open_rec; } ;
struct tls_rec {int dummy; } ;
struct tls_context {int dummy; } ;
struct sock {int dummy; } ;


 int FUNC_0 (struct sock*,struct tls_rec*) ;
 struct tls_context* FUNC_1 (struct sock*) ;
 struct tls_sw_context_tx* FUNC_2 (struct tls_context*) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_0)
{
 struct tls_context *VAR_1 = FUNC_1(VAR_0);
 struct tls_sw_context_tx *VAR_2 = FUNC_2(VAR_1);
 struct tls_rec *VAR_3 = VAR_2->open_rec;

 if (VAR_3) {
  FUNC_0(VAR_0, VAR_3);
  VAR_2->open_rec = ((void*)0);
 }
}
