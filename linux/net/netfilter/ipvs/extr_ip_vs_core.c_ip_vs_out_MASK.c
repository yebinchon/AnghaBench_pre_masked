
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {scalar_t__ sk_family; } ;
struct sk_buff {scalar_t__ dev; scalar_t__ ipvs_property; } ;
struct netns_ipvs {TYPE_1__* net; int conn_out_counter; int enable; } ;
struct ip_vs_protocol {scalar_t__ protocol; int conn_out_get; int dont_defrag; } ;
struct ip_vs_proto_data {struct ip_vs_protocol* pp; } ;
struct ip_vs_iphdr {scalar_t__ protocol; int off; int len; int saddr; } ;
struct ip_vs_conn {int dummy; } ;
typedef int _ports ;
typedef int __be16 ;
struct TYPE_4__ {scalar_t__ nodefrag; } ;
struct TYPE_3__ {scalar_t__ loopback_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ip_vs_conn* FUNC_1 (int ,int ,struct netns_ipvs*,int,struct sk_buff*,struct ip_vs_iphdr*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (int,int,struct ip_vs_protocol*,struct sk_buff*,int ,char*) ;
 scalar_t__ FUNC_3 (struct ip_vs_conn*) ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_4 (struct ip_vs_conn*) ;
 struct ip_vs_conn* FUNC_5 (unsigned int,struct netns_ipvs*,int,struct sk_buff*,struct ip_vs_iphdr*) ;
 scalar_t__ FUNC_6 (int *) ;
 int * FUNC_7 (struct sk_buff*,int ,int,int *) ;
 unsigned int FUNC_8 (int,struct sk_buff*,struct ip_vs_proto_data*,struct ip_vs_conn*,struct ip_vs_iphdr*,unsigned int) ;
 int FUNC_9 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_10 (struct sk_buff*,int ,int ,int ) ;
 TYPE_2__* FUNC_11 (struct sock*) ;
 int FUNC_12 (struct sk_buff*) ;
 scalar_t__ FUNC_13 (int ) ;
 int VAR_17 ;
 int FUNC_14 (unsigned int) ;
 int FUNC_15 (int,struct sk_buff*,int,struct ip_vs_iphdr*) ;
 scalar_t__ FUNC_16 (struct netns_ipvs*,struct sk_buff*,int ) ;
 scalar_t__ FUNC_17 (struct netns_ipvs*,int,scalar_t__,int *,int ) ;
 int FUNC_18 (struct netns_ipvs*,struct sk_buff*,int*,unsigned int) ;
 int FUNC_19 (struct netns_ipvs*,struct sk_buff*,int*,unsigned int,struct ip_vs_iphdr*) ;
 struct ip_vs_proto_data* FUNC_20 (struct netns_ipvs*,scalar_t__) ;
 int FUNC_21 (struct sk_buff*,int ) ;
 int FUNC_22 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_23 (struct ip_vs_conn*) ;
 int FUNC_24 (struct sk_buff*) ;
 struct sock* FUNC_25 (struct sk_buff*) ;
 scalar_t__ FUNC_26 (struct netns_ipvs*) ;
 scalar_t__ FUNC_27 (int) ;

__attribute__((used)) static unsigned int
FUNC_28(struct netns_ipvs *VAR_18, unsigned int VAR_19, struct sk_buff *VAR_20, int VAR_21)
{
 struct ip_vs_iphdr VAR_22;
 struct ip_vs_protocol *VAR_23;
 struct ip_vs_proto_data *VAR_24;
 struct ip_vs_conn *VAR_25;
 struct sock *VAR_26;

 FUNC_0(11);


 if (VAR_20->ipvs_property)
  return VAR_12;

 VAR_26 = FUNC_25(VAR_20);

 if (FUNC_27(VAR_26 && VAR_19 == VAR_14 &&
       VAR_21 == VAR_0)) {

  if (VAR_26->sk_family == VAR_16 && FUNC_11(VAR_26)->nodefrag)
   return VAR_12;
 }

 if (FUNC_27(!FUNC_24(VAR_20)))
  return VAR_12;

 if (!VAR_18->enable)
  return VAR_12;

 FUNC_15(VAR_21, VAR_20, 0, &VAR_22);
  if (FUNC_27(VAR_22.protocol == VAR_6)) {
   int VAR_27;
   int VAR_28 = FUNC_18(VAR_18, VAR_20, &VAR_27, VAR_19);

   if (VAR_27)
    return VAR_28;
  }

 VAR_24 = FUNC_20(VAR_18, VAR_22.protocol);
 if (FUNC_27(!VAR_24))
  return VAR_12;
 VAR_23 = VAR_24->pp;





  if (FUNC_27(FUNC_13(FUNC_12(VAR_20)) && !VAR_23->dont_defrag)) {
   if (FUNC_16(VAR_18, VAR_20,
            FUNC_14(VAR_19)))
    return VAR_15;

   FUNC_15(VAR_0, VAR_20, 0, &VAR_22);
  }




 VAR_25 = FUNC_1(VAR_23->conn_out_get, VAR_17,
        VAR_18, VAR_21, VAR_20, &VAR_22);

 if (FUNC_23(VAR_25)) {
  if (FUNC_3(VAR_25) != VAR_11)
   goto ignore_cp;
  return FUNC_8(VAR_21, VAR_20, VAR_24, VAR_25, &VAR_22, VAR_19);
 }


 if (FUNC_6(&VAR_18->conn_out_counter)) {





  if (VAR_23->protocol == VAR_10) {
   VAR_25 = FUNC_5(VAR_19, VAR_18, VAR_21, VAR_20, &VAR_22);
   if (FUNC_23(VAR_25))
    return FUNC_8(VAR_21, VAR_20, VAR_24, VAR_25, &VAR_22,
             VAR_19);
  }
 }

 if (FUNC_26(VAR_18) &&
     (VAR_23->protocol == VAR_9 ||
      VAR_23->protocol == VAR_10 ||
      VAR_23->protocol == VAR_8)) {
  __be16 VAR_29[2], *VAR_30;

  VAR_30 = FUNC_7(VAR_20, VAR_22.len,
      sizeof(VAR_29), VAR_29);
  if (VAR_30 == ((void*)0))
   return VAR_12;
  if (FUNC_17(VAR_18, VAR_21, VAR_22.protocol, &VAR_22.saddr,
        VAR_30[0])) {





   if ((VAR_22.protocol != VAR_9 &&
        VAR_22.protocol != VAR_8)
        || ((VAR_22.protocol == VAR_9
      && !FUNC_22(VAR_20, VAR_22.len))
     || (VAR_22.protocol == VAR_8
     && !FUNC_21(VAR_20,
      VAR_22.len)))) {
     FUNC_9(VAR_20,
        VAR_4,
        VAR_5, 0);
    return VAR_13;
   }
  }
 }

out:
 FUNC_2(12, VAR_21, VAR_23, VAR_20, VAR_22.off,
        "ip_vs_out: packet continues traversal as normal");
 return VAR_12;

ignore_cp:
 FUNC_4(VAR_25);
 goto out;
}
