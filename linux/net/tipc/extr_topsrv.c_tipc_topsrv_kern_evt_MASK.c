
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int usr_handle; } ;
struct tipc_event {TYPE_1__ s; } ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff_head*,struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,struct tipc_event*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct sk_buff_head*) ;
 int FUNC_6 (struct net*,struct sk_buff_head*) ;
 struct sk_buff* FUNC_7 (int ,int ,int ,int,int ,int ,int ,int ,int ) ;
 int FUNC_8 (struct net*) ;
 int FUNC_9 (struct net*,struct sk_buff_head*) ;

__attribute__((used)) static void FUNC_10(struct net *VAR_2, struct tipc_event *VAR_3)
{
 u32 VAR_4 = *(u32 *)&VAR_3->s.usr_handle;
 u32 VAR_5 = FUNC_8(VAR_2);
 struct sk_buff_head VAR_6;
 struct sk_buff *VAR_7;

 VAR_7 = FUNC_7(VAR_1, 0, VAR_0, sizeof(*VAR_3),
         VAR_5, VAR_5, VAR_4, VAR_4, 0);
 if (!VAR_7)
  return;
 FUNC_4(FUNC_1(VAR_7), 1);
 FUNC_2(FUNC_3(FUNC_1(VAR_7)), VAR_3, sizeof(*VAR_3));
 FUNC_5(&VAR_6);
 FUNC_0(&VAR_6, VAR_7);
 FUNC_6(VAR_2, &VAR_6);
 FUNC_9(VAR_2, &VAR_6);
}
