
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {int (* gro_complete ) (struct sk_buff*,int) ;} ;
struct net_offload {TYPE_1__ callbacks; } ;
struct TYPE_6__ {scalar_t__ is_ipv6; } ;
struct TYPE_5__ {size_t protocol; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_2__* FUNC_2 (struct sock*) ;
 struct net_offload** VAR_1 ;
 struct net_offload** VAR_2 ;
 struct net_offload* FUNC_3 (struct net_offload const*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_8(struct sock *VAR_3, struct sk_buff *VAR_4,
       int VAR_5)
{
 const struct net_offload *VAR_6;
 u8 VAR_7 = FUNC_2(VAR_3)->protocol;
 int VAR_8 = -VAR_0;
 const struct net_offload **VAR_9;

 FUNC_4();
 VAR_9 = FUNC_0(VAR_4)->is_ipv6 ? VAR_1 : VAR_2;
 VAR_6 = FUNC_3(VAR_9[VAR_7]);
 if (FUNC_1(!VAR_6 || !VAR_6->callbacks.gro_complete))
  goto out_unlock;

 VAR_8 = VAR_6->callbacks.gro_complete(VAR_4, VAR_5);

 FUNC_6(VAR_4, VAR_5);

out_unlock:
 FUNC_5();

 return VAR_8;
}
