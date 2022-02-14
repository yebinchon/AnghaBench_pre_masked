
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ parent; } ;
struct net_device {TYPE_1__ dev; } ;
struct ifla_vf_vlan_info {int dummy; } ;
struct ifla_vf_vlan {int dummy; } ;
struct ifla_vf_tx_rate {int dummy; } ;
struct ifla_vf_trust {int dummy; } ;
struct ifla_vf_spoofchk {int dummy; } ;
struct ifla_vf_rss_query_en {int dummy; } ;
struct ifla_vf_rate {int dummy; } ;
struct ifla_vf_mac {int dummy; } ;
struct ifla_vf_link_state {int dummy; } ;
struct ifla_vf_broadcast {int dummy; } ;
typedef int __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static inline int FUNC_3(const struct net_device *VAR_2,
       u32 VAR_3)
{
 if (VAR_2->dev.parent && (VAR_3 & VAR_1)) {
  int VAR_4 = FUNC_0(VAR_2->dev.parent);
  size_t VAR_5 = FUNC_1(0);
  VAR_5 += VAR_4 *
   (FUNC_1(0) +
    FUNC_1(sizeof(struct ifla_vf_mac)) +
    FUNC_1(sizeof(struct ifla_vf_broadcast)) +
    FUNC_1(sizeof(struct ifla_vf_vlan)) +
    FUNC_1(0) +
    FUNC_1(VAR_0 *
     sizeof(struct ifla_vf_vlan_info)) +
    FUNC_1(sizeof(struct ifla_vf_spoofchk)) +
    FUNC_1(sizeof(struct ifla_vf_tx_rate)) +
    FUNC_1(sizeof(struct ifla_vf_rate)) +
    FUNC_1(sizeof(struct ifla_vf_link_state)) +
    FUNC_1(sizeof(struct ifla_vf_rss_query_en)) +
    FUNC_1(0) +

    FUNC_2(sizeof(__u64)) +

    FUNC_2(sizeof(__u64)) +

    FUNC_2(sizeof(__u64)) +

    FUNC_2(sizeof(__u64)) +

    FUNC_2(sizeof(__u64)) +

    FUNC_2(sizeof(__u64)) +

    FUNC_2(sizeof(__u64)) +

    FUNC_2(sizeof(__u64)) +
    FUNC_1(sizeof(struct ifla_vf_trust)));
  return VAR_5;
 } else
  return 0;
}
