
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdp_sock {scalar_t__ zc; int tx; TYPE_1__* dev; } ;
struct sock {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 struct xdp_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct xdp_sock*) ;

__attribute__((used)) static int FUNC_4(struct sock *VAR_3)
{
 struct xdp_sock *VAR_4 = FUNC_1(VAR_3);

 if (FUNC_0(!(VAR_4->dev->flags & VAR_2)))
  return -VAR_0;
 if (FUNC_0(!VAR_4->tx))
  return -VAR_1;

 return VAR_4->zc ? FUNC_3(VAR_4) : FUNC_2(VAR_3);
}
