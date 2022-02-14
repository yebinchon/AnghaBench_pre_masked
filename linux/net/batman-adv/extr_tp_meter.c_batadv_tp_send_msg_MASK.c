
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct batadv_tp_vars {int dummy; } ;
struct batadv_orig_node {int const* orig; } ;
struct batadv_icmp_tp_packet {int uid; void* timestamp; void* seqno; int session; int subtype; int msg_type; int ttl; int packet_type; int version; int orig; int dst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct sk_buff*,struct batadv_orig_node*,int *) ;
 int FUNC_1 (struct batadv_tp_vars*,int *,size_t) ;
 int FUNC_2 (int ,int const*) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ,int const*,int) ;
 struct sk_buff* FUNC_5 (int *,scalar_t__) ;
 void* FUNC_6 (struct sk_buff*,size_t) ;
 int FUNC_7 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct batadv_tp_vars *VAR_9, const u8 *VAR_10,
         struct batadv_orig_node *VAR_11,
         u32 VAR_12, size_t VAR_13, const u8 *VAR_14,
         int VAR_15, u32 VAR_16)
{
 struct batadv_icmp_tp_packet *VAR_17;
 struct sk_buff *VAR_18;
 int VAR_19;
 u8 *VAR_20;
 size_t VAR_21;

 VAR_18 = FUNC_5(((void*)0), VAR_13 + VAR_7);
 if (FUNC_8(!VAR_18))
  return VAR_5;

 FUNC_7(VAR_18, VAR_7);
 VAR_17 = FUNC_6(VAR_18, sizeof(*VAR_17));


 FUNC_2(VAR_17->dst, VAR_11->orig);
 FUNC_2(VAR_17->orig, VAR_10);
 VAR_17->version = VAR_0;
 VAR_17->packet_type = VAR_1;
 VAR_17->ttl = VAR_6;
 VAR_17->msg_type = VAR_2;
 VAR_17->uid = VAR_15;

 VAR_17->subtype = VAR_3;
 FUNC_4(VAR_17->session, VAR_14, sizeof(VAR_17->session));
 VAR_17->seqno = FUNC_3(VAR_12);
 VAR_17->timestamp = FUNC_3(VAR_16);

 VAR_21 = VAR_13 - sizeof(*VAR_17);
 VAR_20 = FUNC_6(VAR_18, VAR_21);
 FUNC_1(VAR_9, VAR_20, VAR_21);

 VAR_19 = FUNC_0(VAR_18, VAR_11, ((void*)0));
 if (VAR_19 == VAR_8)
  return 0;

 return VAR_4;
}
