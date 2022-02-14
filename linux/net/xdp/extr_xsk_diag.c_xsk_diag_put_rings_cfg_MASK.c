
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdp_sock {scalar_t__ tx; scalar_t__ rx; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ,struct sk_buff*) ;

__attribute__((used)) static int FUNC_1(const struct xdp_sock *VAR_2,
      struct sk_buff *VAR_3)
{
 int VAR_4 = 0;

 if (VAR_2->rx)
  VAR_4 = FUNC_0(VAR_2->rx, VAR_0, VAR_3);
 if (!VAR_4 && VAR_2->tx)
  VAR_4 = FUNC_0(VAR_2->tx, VAR_1, VAR_3);
 return VAR_4;
}
