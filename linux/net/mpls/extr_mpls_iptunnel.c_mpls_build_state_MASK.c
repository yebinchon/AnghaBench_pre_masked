
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct mpls_iptunnel_encap {scalar_t__ default_ttl; int ttl_propagate; int * label; int labels; } ;
struct lwtunnel_state {int headroom; int flags; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int FUNC_1 (struct lwtunnel_state*) ;
 int VAR_11 ;
 struct lwtunnel_state* FUNC_2 (int ) ;
 int FUNC_3 (struct mpls_iptunnel_encap*) ;
 int VAR_12 ;
 struct mpls_iptunnel_encap* FUNC_4 (struct lwtunnel_state*) ;
 int FUNC_5 (struct nlattr*,int ,int *,int *,struct netlink_ext_ack*) ;
 scalar_t__ FUNC_6 (struct nlattr*) ;
 int FUNC_7 (struct nlattr**,int ,struct nlattr*,int ,struct netlink_ext_ack*) ;
 int FUNC_8 (struct mpls_iptunnel_encap*,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct nlattr *VAR_13,
       unsigned int VAR_14, const void *VAR_15,
       struct lwtunnel_state **VAR_16,
       struct netlink_ext_ack *VAR_17)
{
 struct mpls_iptunnel_encap *VAR_18;
 struct nlattr *VAR_19[VAR_6 + 1];
 struct lwtunnel_state *VAR_20;
 u8 VAR_21;
 int VAR_22;

 VAR_22 = FUNC_7(VAR_19, VAR_6, VAR_13,
       VAR_12, VAR_17);
 if (VAR_22 < 0)
  return VAR_22;

 if (!VAR_19[VAR_5]) {
  FUNC_0(VAR_17, "MPLS_IPTUNNEL_DST attribute is missing");
  return -VAR_0;
 }


 if (FUNC_5(VAR_19[VAR_5], VAR_4,
      &VAR_21, ((void*)0), VAR_17))
  return -VAR_0;

 VAR_20 = FUNC_2(FUNC_8(VAR_18, VAR_11,
       VAR_21));
 if (!VAR_20)
  return -VAR_1;

 VAR_18 = FUNC_4(VAR_20);
 VAR_22 = FUNC_5(VAR_19[VAR_5], VAR_21,
        &VAR_18->labels, VAR_18->label,
        VAR_17);
 if (VAR_22)
  goto errout;

 VAR_18->ttl_propagate = VAR_8;

 if (VAR_19[VAR_7]) {
  VAR_18->default_ttl = FUNC_6(VAR_19[VAR_7]);

  VAR_18->ttl_propagate = VAR_18->default_ttl ?
   VAR_9 :
   VAR_10;
 }

 VAR_20->type = VAR_2;
 VAR_20->flags |= VAR_3;
 VAR_20->headroom = FUNC_3(VAR_18);

 *VAR_16 = VAR_20;

 return 0;

errout:
 FUNC_1(VAR_20);
 *VAR_16 = ((void*)0);

 return VAR_22;
}
