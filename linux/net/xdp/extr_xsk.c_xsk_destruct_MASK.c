
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdp_sock {int umem; } ;
struct sock {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*,int ) ;
 int FUNC_2 (int ) ;
 struct xdp_sock* FUNC_3 (struct sock*) ;

__attribute__((used)) static void FUNC_4(struct sock *VAR_1)
{
 struct xdp_sock *VAR_2 = FUNC_3(VAR_1);

 if (!FUNC_1(VAR_1, VAR_0))
  return;

 FUNC_2(VAR_2->umem);

 FUNC_0(VAR_1);
}
