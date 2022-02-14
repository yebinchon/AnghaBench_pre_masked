
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct sock {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct TYPE_3__ {int (* gro_complete ) (struct sk_buff*,int) ;} ;
struct net_offload {TYPE_1__ callbacks; } ;
struct iphdr {int version; } ;
struct guehdr {int version; size_t proto_ctype; int hlen; } ;
struct TYPE_4__ {scalar_t__ is_ipv6; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int) ;
 struct net_offload** VAR_3 ;
 struct net_offload** VAR_4 ;
 struct net_offload* FUNC_2 (struct net_offload const*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_7(struct sock *VAR_5, struct sk_buff *VAR_6, int VAR_7)
{
 const struct net_offload **VAR_8;
 struct guehdr *VAR_9 = (struct guehdr *)(VAR_6->data + VAR_7);
 const struct net_offload *VAR_10;
 unsigned int VAR_11 = 0;
 u8 VAR_12;
 int VAR_13 = -VAR_0;

 switch (VAR_9->version) {
 case 0:
  VAR_12 = VAR_9->proto_ctype;
  VAR_11 = sizeof(*VAR_9) + (VAR_9->hlen << 2);
  break;
 case 1:
  switch (((struct iphdr *)VAR_9)->version) {
  case 4:
   VAR_12 = VAR_1;
   break;
  case 6:
   VAR_12 = VAR_2;
   break;
  default:
   return VAR_13;
  }
  break;
 default:
  return VAR_13;
 }

 FUNC_3();
 VAR_8 = FUNC_0(VAR_6)->is_ipv6 ? VAR_3 : VAR_4;
 VAR_10 = FUNC_2(VAR_8[VAR_12]);
 if (FUNC_1(!VAR_10 || !VAR_10->callbacks.gro_complete))
  goto out_unlock;

 VAR_13 = VAR_10->callbacks.gro_complete(VAR_6, VAR_7 + VAR_11);

 FUNC_5(VAR_6, VAR_7 + VAR_11);

out_unlock:
 FUNC_4();
 return VAR_13;
}
