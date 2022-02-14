
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nf_hook_state {int net; int pf; } ;
struct nf_conntrack_zone {int dummy; } ;
struct nf_conntrack_tuple_hash {int dummy; } ;
struct nf_conntrack_tuple {int dummy; } ;
struct nf_conn {int status; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct nf_conntrack_tuple_hash*) ;
 scalar_t__ FUNC_1 (struct nf_conntrack_tuple_hash*) ;
 int FUNC_2 (struct nf_conntrack_tuple_hash*) ;
 struct nf_conntrack_tuple_hash* FUNC_3 (int ,struct nf_conntrack_zone const*,struct nf_conntrack_tuple*,int ) ;
 int FUNC_4 (struct nf_conntrack_tuple*,int ) ;
 struct nf_conntrack_tuple_hash* FUNC_5 (int ,struct nf_conn*,struct nf_conntrack_tuple*,struct sk_buff*,unsigned int,int ) ;
 int FUNC_6 (struct sk_buff*,int ,unsigned int,int ,int ,int ,struct nf_conntrack_tuple*) ;
 int FUNC_7 (struct sk_buff*,struct nf_conn*,int) ;
 struct nf_conn* FUNC_8 (struct nf_conntrack_tuple_hash*) ;
 struct nf_conntrack_zone* FUNC_9 (struct nf_conn*,struct sk_buff*,struct nf_conntrack_zone*) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (struct sk_buff*) ;
 scalar_t__ FUNC_12 (int ,int *) ;

__attribute__((used)) static int
FUNC_13(struct nf_conn *VAR_7,
    struct sk_buff *VAR_8,
    unsigned int VAR_9,
    u_int8_t VAR_10,
    const struct nf_hook_state *VAR_11)
{
 const struct nf_conntrack_zone *VAR_12;
 struct nf_conntrack_tuple VAR_13;
 struct nf_conntrack_tuple_hash *VAR_14;
 enum ip_conntrack_info VAR_15;
 struct nf_conntrack_zone VAR_16;
 struct nf_conn *VAR_17;
 u32 VAR_18;

 if (!FUNC_6(VAR_8, FUNC_11(VAR_8),
        VAR_9, VAR_11->pf, VAR_10, VAR_11->net,
        &VAR_13)) {
  FUNC_10("Can't get tuple\n");
  return 0;
 }


 VAR_12 = FUNC_9(VAR_7, VAR_8, &VAR_16);
 VAR_18 = FUNC_4(&VAR_13, VAR_11->net);
 VAR_14 = FUNC_3(VAR_11->net, VAR_12, &VAR_13, VAR_18);
 if (!VAR_14) {
  VAR_14 = FUNC_5(VAR_11->net, VAR_7, &VAR_13,
       VAR_8, VAR_9, VAR_18);
  if (!VAR_14)
   return 0;
  if (FUNC_0(VAR_14))
   return FUNC_2(VAR_14);
 }
 VAR_17 = FUNC_8(VAR_14);


 if (FUNC_1(VAR_14) == VAR_2) {
  VAR_15 = VAR_4;
 } else {

  if (FUNC_12(VAR_1, &VAR_17->status)) {
   FUNC_10("normal packet for %p\n", VAR_17);
   VAR_15 = VAR_3;
  } else if (FUNC_12(VAR_0, &VAR_17->status)) {
   FUNC_10("related packet for %p\n", VAR_17);
   VAR_15 = VAR_6;
  } else {
   FUNC_10("new packet for %p\n", VAR_17);
   VAR_15 = VAR_5;
  }
 }
 FUNC_7(VAR_8, VAR_17, VAR_15);
 return 0;
}
