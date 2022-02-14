
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seg6_lwt {int tuninfo; int cache; } ;
struct seg6_iptunnel_encap {int mode; int srh; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct lwtunnel_state {int headroom; int flags; int type; } ;
struct ipv6_sr_hdr {int dummy; } ;
struct in6_addr {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;



 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct lwtunnel_state*) ;
 struct lwtunnel_state* FUNC_2 (int) ;
 int FUNC_3 (int *,struct seg6_iptunnel_encap*,int) ;
 struct seg6_iptunnel_encap* FUNC_4 (struct nlattr*) ;
 int FUNC_5 (struct nlattr*) ;
 int FUNC_6 (struct nlattr**,int ,struct nlattr*,int ,struct netlink_ext_ack*) ;
 int VAR_10 ;
 int FUNC_7 (struct seg6_iptunnel_encap*) ;
 struct seg6_lwt* FUNC_8 (struct lwtunnel_state*) ;
 int FUNC_9 (int ,int) ;

__attribute__((used)) static int FUNC_10(struct nlattr *VAR_11,
       unsigned int VAR_12, const void *VAR_13,
       struct lwtunnel_state **VAR_14,
       struct netlink_ext_ack *VAR_15)
{
 struct nlattr *VAR_16[VAR_8 + 1];
 struct seg6_iptunnel_encap *VAR_17;
 struct lwtunnel_state *VAR_18;
 int VAR_19, VAR_20;
 struct seg6_lwt *VAR_21;
 int VAR_22;

 if (VAR_12 != VAR_0 && VAR_12 != VAR_1)
  return -VAR_2;

 VAR_22 = FUNC_6(VAR_16, VAR_8, VAR_11,
       VAR_10, VAR_15);

 if (VAR_22 < 0)
  return VAR_22;

 if (!VAR_16[VAR_9])
  return -VAR_2;

 VAR_17 = FUNC_4(VAR_16[VAR_9]);
 VAR_19 = FUNC_5(VAR_16[VAR_9]);




 VAR_20 = sizeof(*VAR_17) + sizeof(struct ipv6_sr_hdr) +
     sizeof(struct in6_addr);
 if (VAR_19 < VAR_20)
  return -VAR_2;

 switch (VAR_17->mode) {
 case 129:
  if (VAR_12 != VAR_1)
   return -VAR_2;

  break;
 case 130:
  break;
 case 128:
  break;
 default:
  return -VAR_2;
 }


 if (!FUNC_9(VAR_17->srh, VAR_19 - sizeof(*VAR_17)))
  return -VAR_2;

 VAR_18 = FUNC_2(VAR_19 + sizeof(*VAR_21));
 if (!VAR_18)
  return -VAR_3;

 VAR_21 = FUNC_8(VAR_18);

 VAR_22 = FUNC_0(&VAR_21->cache, VAR_4);
 if (VAR_22) {
  FUNC_1(VAR_18);
  return VAR_22;
 }

 FUNC_3(&VAR_21->tuninfo, VAR_17, VAR_19);

 VAR_18->type = VAR_5;
 VAR_18->flags |= VAR_6;

 if (VAR_17->mode != 128)
  VAR_18->flags |= VAR_7;

 VAR_18->headroom = FUNC_7(VAR_17);

 *VAR_14 = VAR_18;

 return 0;
}
