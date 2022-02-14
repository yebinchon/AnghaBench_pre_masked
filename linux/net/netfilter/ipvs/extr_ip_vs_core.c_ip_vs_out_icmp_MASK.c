
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union nf_inet_addr {int ip; } ;
struct sk_buff {int dummy; } ;
struct netns_ipvs {int dummy; } ;
struct iphdr {int ihl; scalar_t__ type; int frag_off; int protocol; int saddr; int daddr; } ;
struct ip_vs_protocol {int conn_out_get; scalar_t__ dont_defrag; } ;
struct ip_vs_iphdr {int len; } ;
struct ip_vs_conn {int dummy; } ;
struct icmphdr {int ihl; scalar_t__ type; int frag_off; int protocol; int saddr; int daddr; } ;
typedef int _icmph ;
typedef int _ciph ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct ip_vs_conn* FUNC_0 (int ,int ,struct netns_ipvs*,int ,struct sk_buff*,struct ip_vs_iphdr*) ;
 int VAR_4 ;
 int FUNC_1 (int,char*,scalar_t__,int ,int *,int *) ;
 int FUNC_2 (int,int ,struct ip_vs_protocol*,struct sk_buff*,unsigned int,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,struct sk_buff*,union nf_inet_addr*,int ,struct ip_vs_conn*,struct ip_vs_protocol*,int ,unsigned int,unsigned int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct iphdr*) ;
 struct iphdr* FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (struct iphdr*) ;
 int VAR_8 ;
 int FUNC_8 (unsigned int) ;
 int FUNC_9 (int ,struct sk_buff*,unsigned int,int,struct ip_vs_iphdr*) ;
 scalar_t__ FUNC_10 (struct netns_ipvs*,struct sk_buff*,int ) ;
 struct ip_vs_protocol* FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 struct iphdr* FUNC_13 (struct sk_buff*,unsigned int,int,struct iphdr*) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static int FUNC_15(struct netns_ipvs *VAR_9, struct sk_buff *VAR_10,
     int *VAR_11, unsigned int VAR_12)
{
 struct iphdr *VAR_13;
 struct icmphdr VAR_14, *VAR_15;
 struct iphdr VAR_16, *VAR_17;
 struct ip_vs_iphdr VAR_18;
 struct ip_vs_conn *VAR_19;
 struct ip_vs_protocol *VAR_20;
 unsigned int VAR_21, VAR_22;
 union nf_inet_addr VAR_23;

 *VAR_11 = 1;


 if (FUNC_7(FUNC_6(VAR_10))) {
  if (FUNC_10(VAR_9, VAR_10, FUNC_8(VAR_12)))
   return VAR_7;
 }

 VAR_13 = FUNC_6(VAR_10);
 VAR_21 = VAR_22 = VAR_13->ihl * 4;
 VAR_15 = FUNC_13(VAR_10, VAR_21, sizeof(VAR_14), &VAR_14);
 if (VAR_15 == ((void*)0))
  return VAR_6;

 FUNC_1(12, "Outgoing ICMP (%d,%d) %pI4->%pI4\n",
    VAR_15->type, FUNC_12(FUNC_5(VAR_15)),
    &VAR_13->saddr, &VAR_13->daddr);
 if ((VAR_15->type != VAR_1) &&
     (VAR_15->type != VAR_2) &&
     (VAR_15->type != VAR_3)) {
  *VAR_11 = 0;
  return VAR_5;
 }


 VAR_21 += sizeof(VAR_14);
 VAR_17 = FUNC_13(VAR_10, VAR_21, sizeof(VAR_16), &VAR_16);
 if (VAR_17 == ((void*)0))
  return VAR_5;

 VAR_20 = FUNC_11(VAR_17->protocol);
 if (!VAR_20)
  return VAR_5;


 if (FUNC_14(VAR_17->frag_off & FUNC_4(VAR_4) &&
       VAR_20->dont_defrag))
  return VAR_5;

 FUNC_2(11, VAR_0, VAR_20, VAR_10, VAR_21,
        "Checking outgoing ICMP for");

 FUNC_9(VAR_0, VAR_10, VAR_21, 1, &VAR_18);


 VAR_19 = FUNC_0(VAR_20->conn_out_get, VAR_8,
        VAR_9, VAR_0, VAR_10, &VAR_18);
 if (!VAR_19)
  return VAR_5;

 VAR_23.ip = VAR_13->saddr;
 return FUNC_3(VAR_0, VAR_10, &VAR_23, VAR_17->protocol, VAR_19,
        VAR_20, VAR_18.len, VAR_22, VAR_12);
}
