
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct flow_dissector_key_ct {int * ct_labels; int ct_mark; int ct_zone; int ct_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct netlink_ext_ack*,char*) ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (struct nlattr**,int *,size_t,int *,int ,int) ;

__attribute__((used)) static int FUNC_3(struct nlattr **VAR_13,
    struct flow_dissector_key_ct *VAR_14,
    struct flow_dissector_key_ct *VAR_15,
    struct netlink_ext_ack *VAR_16)
{
 if (VAR_13[VAR_9]) {
  if (!FUNC_0(VAR_0)) {
   FUNC_1(VAR_16, "Conntrack isn't enabled");
   return -VAR_4;
  }
  FUNC_2(VAR_13, &VAR_14->ct_state, VAR_9,
          &VAR_15->ct_state, VAR_10,
          sizeof(VAR_14->ct_state));
 }
 if (VAR_13[VAR_11]) {
  if (!FUNC_0(VAR_3)) {
   FUNC_1(VAR_16, "Conntrack zones isn't enabled");
   return -VAR_4;
  }
  FUNC_2(VAR_13, &VAR_14->ct_zone, VAR_11,
          &VAR_15->ct_zone, VAR_12,
          sizeof(VAR_14->ct_zone));
 }
 if (VAR_13[VAR_7]) {
  if (!FUNC_0(VAR_2)) {
   FUNC_1(VAR_16, "Conntrack mark isn't enabled");
   return -VAR_4;
  }
  FUNC_2(VAR_13, &VAR_14->ct_mark, VAR_7,
          &VAR_15->ct_mark, VAR_8,
          sizeof(VAR_14->ct_mark));
 }
 if (VAR_13[VAR_5]) {
  if (!FUNC_0(VAR_1)) {
   FUNC_1(VAR_16, "Conntrack labels aren't enabled");
   return -VAR_4;
  }
  FUNC_2(VAR_13, VAR_14->ct_labels, VAR_5,
          VAR_15->ct_labels, VAR_6,
          sizeof(VAR_14->ct_labels));
 }

 return 0;
}
