
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_context {int dummy; } ;
struct sock {int sk_allocation; int sk_write_pending; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct tls_context*) ;
 int FUNC_2 (struct sock*,struct tls_context*,int) ;

void FUNC_3(struct sock *VAR_4, struct tls_context *VAR_5)
{
 if (FUNC_1(VAR_5)) {
  gfp_t VAR_6 = VAR_4->sk_allocation;

  FUNC_0(VAR_4->sk_write_pending);

  VAR_4->sk_allocation = VAR_0;
  FUNC_2(VAR_4, VAR_5,
     VAR_1 | VAR_2 |
     VAR_3);
  VAR_4->sk_allocation = VAR_6;
 }
}
