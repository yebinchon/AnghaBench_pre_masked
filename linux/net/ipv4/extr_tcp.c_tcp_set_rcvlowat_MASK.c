
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sock {int sk_userlocks; int sk_rcvbuf; int sk_rcvlowat; } ;
struct TYPE_4__ {int* sysctl_tcp_rmem; } ;
struct TYPE_6__ {TYPE_1__ ipv4; } ;
struct TYPE_5__ {int window_clamp; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 TYPE_3__* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 TYPE_2__* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*,int) ;

int FUNC_6(struct sock *VAR_1, int VAR_2)
{
 int VAR_3;

 if (VAR_1->sk_userlocks & VAR_0)
  VAR_3 = VAR_1->sk_rcvbuf >> 1;
 else
  VAR_3 = FUNC_2(VAR_1)->ipv4.sysctl_tcp_rmem[2] >> 1;
 VAR_2 = FUNC_1(VAR_2, VAR_3);
 FUNC_0(VAR_1->sk_rcvlowat, VAR_2 ? : 1);


 FUNC_3(VAR_1);

 if (VAR_1->sk_userlocks & VAR_0)
  return 0;

 VAR_2 <<= 1;
 if (VAR_2 > VAR_1->sk_rcvbuf) {
  FUNC_0(VAR_1->sk_rcvbuf, VAR_2);
  FUNC_4(VAR_1)->window_clamp = FUNC_5(VAR_1, VAR_2);
 }
 return 0;
}
