
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sk_buff {int transport_header; int dev; } ;
struct TYPE_6__ {int max_hbh_opts_len; } ;
struct TYPE_7__ {TYPE_1__ sysctl; } ;
struct net {TYPE_2__ ipv6; } ;
struct ipv6hdr {int dummy; } ;
struct inet6_skb_parm {int nhoff; int flags; } ;
struct TYPE_8__ {int max_hbh_opts_cnt; } ;
struct TYPE_9__ {TYPE_3__ sysctl; } ;
struct TYPE_10__ {TYPE_4__ ipv6; } ;


 struct inet6_skb_parm* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 struct net* FUNC_1 (int ) ;
 TYPE_5__ VAR_1 ;
 scalar_t__ FUNC_2 (int ,struct sk_buff*,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,int) ;
 int* FUNC_5 (struct sk_buff*) ;
 int VAR_2 ;

int FUNC_6(struct sk_buff *VAR_3)
{
 struct inet6_skb_parm *VAR_4 = FUNC_0(VAR_3);
 struct net *VAR_5 = FUNC_1(VAR_3->dev);
 int VAR_6;







 if (!FUNC_4(VAR_3, sizeof(struct ipv6hdr) + 8) ||
     !FUNC_4(VAR_3, (sizeof(struct ipv6hdr) +
     ((FUNC_5(VAR_3)[1] + 1) << 3)))) {
fail_and_free:
  FUNC_3(VAR_3);
  return -1;
 }

 VAR_6 = (FUNC_5(VAR_3)[1] + 1) << 3;
 if (VAR_6 > VAR_5->ipv6.sysctl.max_hbh_opts_len)
  goto fail_and_free;

 VAR_4->flags |= VAR_0;
 if (FUNC_2(VAR_2, VAR_3,
     VAR_1.ipv6.sysctl.max_hbh_opts_cnt)) {
  VAR_3->transport_header += VAR_6;
  VAR_4 = FUNC_0(VAR_3);
  VAR_4->nhoff = sizeof(struct ipv6hdr);
  return 1;
 }
 return -1;
}
