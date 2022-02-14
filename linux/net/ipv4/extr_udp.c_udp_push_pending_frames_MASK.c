
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct udp_sock {scalar_t__ pending; scalar_t__ len; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct flowi4 {int dummy; } ;
struct TYPE_4__ {struct flowi4 ip4; } ;
struct TYPE_5__ {TYPE_1__ u; } ;
struct TYPE_6__ {int base; TYPE_2__ fl; } ;
struct inet_sock {TYPE_3__ cork; } ;


 struct inet_sock* FUNC_0 (struct sock*) ;
 struct sk_buff* FUNC_1 (struct sock*,struct flowi4*) ;
 int FUNC_2 (struct sk_buff*,struct flowi4*,int *) ;
 struct udp_sock* FUNC_3 (struct sock*) ;

int FUNC_4(struct sock *VAR_0)
{
 struct udp_sock *VAR_1 = FUNC_3(VAR_0);
 struct inet_sock *VAR_2 = FUNC_0(VAR_0);
 struct flowi4 *VAR_3 = &VAR_2->cork.fl.u.ip4;
 struct sk_buff *VAR_4;
 int VAR_5 = 0;

 VAR_4 = FUNC_1(VAR_0, VAR_3);
 if (!VAR_4)
  goto out;

 VAR_5 = FUNC_2(VAR_4, VAR_3, &VAR_2->cork.base);

out:
 VAR_1->len = 0;
 VAR_1->pending = 0;
 return VAR_5;
}
