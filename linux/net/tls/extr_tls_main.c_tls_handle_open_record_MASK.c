
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_context {int (* push_pending_record ) (struct sock*,int) ;} ;
struct sock {int dummy; } ;


 int FUNC_0 (struct sock*,int) ;
 struct tls_context* FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (struct tls_context*) ;

__attribute__((used)) static int FUNC_3(struct sock *VAR_0, int VAR_1)
{
 struct tls_context *VAR_2 = FUNC_1(VAR_0);

 if (FUNC_2(VAR_2))
  return VAR_2->push_pending_record(VAR_0, VAR_1);

 return 0;
}
