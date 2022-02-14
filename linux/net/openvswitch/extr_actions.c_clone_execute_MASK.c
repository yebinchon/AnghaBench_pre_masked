
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct sw_flow_key {void* recirc_id; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct deferred_action {struct sw_flow_key pkt_key; } ;
struct datapath {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct deferred_action* FUNC_2 (struct sk_buff*,struct sw_flow_key*,struct nlattr const*,int) ;
 struct sw_flow_key* FUNC_3 (struct sw_flow_key*) ;
 int FUNC_4 (struct datapath*,struct sk_buff*,struct sw_flow_key*,struct nlattr const*,int) ;
 int VAR_1 ;
 int FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (struct datapath*) ;
 int FUNC_8 (struct sk_buff*,struct sw_flow_key*) ;
 int FUNC_9 (char*,int ) ;
 struct sk_buff* FUNC_10 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_11(struct datapath *VAR_2, struct sk_buff *VAR_3,
    struct sw_flow_key *VAR_4, u32 VAR_5,
    const struct nlattr *VAR_6, int VAR_7,
    bool VAR_8, bool VAR_9)
{
 struct deferred_action *VAR_10;
 struct sw_flow_key *VAR_11;

 VAR_3 = VAR_8 ? VAR_3 : FUNC_10(VAR_3, VAR_0);
 if (!VAR_3) {


  return 0;
 }







 VAR_11 = VAR_9 ? FUNC_3(VAR_4) : VAR_4;
 if (VAR_11) {
  int VAR_12 = 0;

  if (VAR_6) {
   if (VAR_9)
    FUNC_1(VAR_1);

   VAR_12 = FUNC_4(VAR_2, VAR_3, VAR_11,
       VAR_6, VAR_7);

   if (VAR_9)
    FUNC_0(VAR_1);
  } else {
   VAR_11->recirc_id = VAR_5;
   FUNC_8(VAR_3, VAR_11);
  }
  return VAR_12;
 }


 VAR_10 = FUNC_2(VAR_3, VAR_4, VAR_6, VAR_7);
 if (VAR_10) {
  if (!VAR_6) {
   VAR_4 = &VAR_10->pkt_key;
   VAR_4->recirc_id = VAR_5;
  }
 } else {



  FUNC_5(VAR_3);

  if (FUNC_6()) {
   if (VAR_6) {
    FUNC_9("%s: deferred action limit reached, drop sample action\n",
     FUNC_7(VAR_2));
   } else {
    FUNC_9("%s: deferred action limit reached, drop recirc action\n",
     FUNC_7(VAR_2));
   }
  }
 }
 return 0;
}
