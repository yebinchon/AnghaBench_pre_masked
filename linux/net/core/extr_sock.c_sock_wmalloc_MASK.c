
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_sndbuf; int sk_wmem_alloc; } ;
struct sk_buff {int dummy; } ;
typedef int gfp_t ;


 scalar_t__ FUNC_0 (int ) ;
 struct sk_buff* FUNC_1 (unsigned long,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct sk_buff*,struct sock*) ;

struct sk_buff *FUNC_4(struct sock *VAR_0, unsigned long VAR_1, int VAR_2,
        gfp_t VAR_3)
{
 if (VAR_2 ||
     FUNC_2(&VAR_0->sk_wmem_alloc) < FUNC_0(VAR_0->sk_sndbuf)) {
  struct sk_buff *VAR_4 = FUNC_1(VAR_1, VAR_3);

  if (VAR_4) {
   FUNC_3(VAR_4, VAR_0);
   return VAR_4;
  }
 }
 return ((void*)0);
}
