
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct udp_sock {scalar_t__ pending; scalar_t__ len; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct flowi6 {int dummy; } ;
struct TYPE_5__ {struct flowi6 ip6; } ;
struct TYPE_6__ {TYPE_1__ u; } ;
struct TYPE_7__ {int base; TYPE_2__ fl; } ;
struct TYPE_8__ {TYPE_3__ cork; } ;


 scalar_t__ VAR_0 ;
 TYPE_4__* FUNC_0 (struct sock*) ;
 struct sk_buff* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 struct udp_sock* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sk_buff*,struct flowi6*,int *) ;

__attribute__((used)) static int FUNC_5(struct sock *VAR_1)
{
 struct sk_buff *VAR_2;
 struct udp_sock *VAR_3 = FUNC_3(VAR_1);
 struct flowi6 VAR_4;
 int VAR_5 = 0;

 if (VAR_3->pending == VAR_0)
  return FUNC_2(VAR_1);




 VAR_4 = FUNC_0(VAR_1)->cork.fl.u.ip6;

 VAR_2 = FUNC_1(VAR_1);
 if (!VAR_2)
  goto out;

 VAR_5 = FUNC_4(VAR_2, &VAR_4, &FUNC_0(VAR_1)->cork.base);

out:
 VAR_3->len = 0;
 VAR_3->pending = 0;
 return VAR_5;
}
