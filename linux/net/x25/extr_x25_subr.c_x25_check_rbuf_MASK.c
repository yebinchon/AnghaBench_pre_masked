
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x25_sock {int condition; int vr; int vl; } ;
struct sock {int sk_rcvbuf; int sk_rmem_alloc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 struct x25_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,int ) ;

void FUNC_4(struct sock *VAR_3)
{
 struct x25_sock *VAR_4 = FUNC_1(VAR_3);

 if (FUNC_0(&VAR_3->sk_rmem_alloc) < (VAR_3->sk_rcvbuf >> 1) &&
     (VAR_4->condition & VAR_1)) {
  VAR_4->condition &= ~VAR_1;
  VAR_4->condition &= ~VAR_0;
  VAR_4->vl = VAR_4->vr;
  FUNC_3(VAR_3, VAR_2);
  FUNC_2(VAR_3);
 }
}
