
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct lwtunnel_state {int type; } ;
struct TYPE_4__ {void* src; void* dst; } ;
struct TYPE_5__ {TYPE_1__ ipv6; } ;
struct TYPE_6__ {int tun_flags; void* tos; void* ttl; TYPE_2__ u; int tun_id; } ;
struct ip_tunnel_info {int mode; scalar_t__ options_len; TYPE_3__ key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 struct ip_tunnel_info* FUNC_0 (struct lwtunnel_state*) ;
 struct lwtunnel_state* FUNC_1 (int) ;
 int FUNC_2 (struct nlattr*) ;
 int FUNC_3 (struct nlattr*) ;
 void* FUNC_4 (struct nlattr*) ;
 void* FUNC_5 (struct nlattr*) ;
 int FUNC_6 (struct nlattr**,int ,struct nlattr*,int ,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_7(struct nlattr *VAR_12,
          unsigned int VAR_13, const void *VAR_14,
          struct lwtunnel_state **VAR_15,
          struct netlink_ext_ack *VAR_16)
{
 struct ip_tunnel_info *VAR_17;
 struct lwtunnel_state *VAR_18;
 struct nlattr *VAR_19[VAR_8 + 1];
 int VAR_20;

 VAR_20 = FUNC_6(VAR_19, VAR_8, VAR_12,
       VAR_11, VAR_16);
 if (VAR_20 < 0)
  return VAR_20;

 VAR_18 = FUNC_1(sizeof(*VAR_17));
 if (!VAR_18)
  return -VAR_0;

 VAR_18->type = VAR_3;

 VAR_17 = FUNC_0(VAR_18);

 if (VAR_19[VAR_7])
  VAR_17->key.tun_id = FUNC_3(VAR_19[VAR_7]);

 if (VAR_19[VAR_4])
  VAR_17->key.u.ipv6.dst = FUNC_4(VAR_19[VAR_4]);

 if (VAR_19[VAR_9])
  VAR_17->key.u.ipv6.src = FUNC_4(VAR_19[VAR_9]);

 if (VAR_19[VAR_6])
  VAR_17->key.ttl = FUNC_5(VAR_19[VAR_6]);

 if (VAR_19[VAR_10])
  VAR_17->key.tos = FUNC_5(VAR_19[VAR_10]);

 if (VAR_19[VAR_5])
  VAR_17->key.tun_flags = FUNC_2(VAR_19[VAR_5]);

 VAR_17->mode = VAR_2 | VAR_1;
 VAR_17->options_len = 0;

 *VAR_15 = VAR_18;

 return 0;
}
