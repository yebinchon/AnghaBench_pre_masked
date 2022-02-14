
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_rcvbuf; int sk_rmem_alloc; } ;
struct sk_buff {int dummy; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct sock*,struct sk_buff*,unsigned int) ;
 int FUNC_2 (struct sock*) ;
 scalar_t__ FUNC_3 (struct sock*) ;

__attribute__((used)) static int FUNC_4(struct sock *VAR_0, struct sk_buff *VAR_1,
     unsigned int VAR_2)
{
 if (FUNC_0(&VAR_0->sk_rmem_alloc) > VAR_0->sk_rcvbuf ||
     !FUNC_1(VAR_0, VAR_1, VAR_2)) {

  if (FUNC_3(VAR_0) < 0)
   return -1;

  while (!FUNC_1(VAR_0, VAR_1, VAR_2)) {
   if (!FUNC_2(VAR_0))
    return -1;
  }
 }
 return 0;
}
