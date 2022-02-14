
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tipc_msg {int dummy; } ;
struct tipc_link {int state; int transmq; int name; int acked; int tolerance; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int retr_cnt; scalar_t__ retr_stamp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 struct tipc_msg* FUNC_1 (struct sk_buff*) ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (struct tipc_link*) ;
 int FUNC_5 (struct tipc_link*,char*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct tipc_msg*) ;
 int FUNC_8 (struct tipc_msg*) ;
 int FUNC_9 (struct tipc_msg*) ;
 int FUNC_10 (struct tipc_msg*) ;
 int FUNC_11 (struct tipc_msg*) ;
 int FUNC_12 (struct tipc_msg*) ;
 int FUNC_13 (struct tipc_msg*) ;
 int FUNC_14 (char*,int ,int ,...) ;
 int FUNC_15 (char*,int ) ;
 struct sk_buff* FUNC_16 (int *) ;
 int FUNC_17 (int ,scalar_t__) ;
 int FUNC_18 (struct tipc_link*,int ) ;
 int FUNC_19 (struct tipc_link*,int ,char*) ;
 int FUNC_20 (int *,int,char*) ;

__attribute__((used)) static bool FUNC_21(struct tipc_link *VAR_5, struct tipc_link *VAR_6,
        int *VAR_7)
{
 struct sk_buff *VAR_8 = FUNC_16(&VAR_5->transmq);
 struct tipc_msg *VAR_9;

 if (!VAR_8)
  return 0;

 if (!FUNC_0(VAR_8)->retr_cnt)
  return 0;

 if (!FUNC_17(VAR_4, FUNC_0(VAR_8)->retr_stamp +
   FUNC_6(VAR_6->tolerance)))
  return 0;

 VAR_9 = FUNC_1(VAR_8);
 if (FUNC_4(VAR_5) && !FUNC_3(VAR_6->acked, FUNC_10(VAR_9)))
  return 0;

 FUNC_15("Retransmission failure on link <%s>\n", VAR_5->name);
 FUNC_5(VAR_5, "State of link ");
 FUNC_14("Failed msg: usr %u, typ %u, len %u, err %u\n",
  FUNC_13(VAR_9), FUNC_12(VAR_9), FUNC_11(VAR_9), FUNC_8(VAR_9));
 FUNC_14("sqno %u, prev: %x, dest: %x\n",
  FUNC_10(VAR_9), FUNC_9(VAR_9), FUNC_7(VAR_9));
 FUNC_14("retr_stamp %d, retr_cnt %d\n",
  FUNC_2(FUNC_0(VAR_8)->retr_stamp),
  FUNC_0(VAR_8)->retr_cnt);

 FUNC_20(&VAR_5->transmq, 1, "retrans failure!");
 FUNC_19(VAR_5, VAR_2, "retrans failure!");
 FUNC_19(VAR_6, VAR_2, "retrans failure!");

 if (FUNC_4(VAR_5)) {
  VAR_6->state = VAR_1;
  *VAR_7 = VAR_3;
 } else {
  *VAR_7 = FUNC_18(VAR_5, VAR_0);
 }

 return 1;
}
