
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_node {scalar_t__ sync_point; } ;
struct tipc_link {int dummy; } ;
struct sk_buff_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct tipc_link*,struct tipc_link*,struct sk_buff_head*) ;
 int FUNC_1 (struct tipc_link*,int ) ;
 int FUNC_2 (struct tipc_link*) ;
 int FUNC_3 (struct tipc_link*) ;
 scalar_t__ FUNC_4 (struct tipc_link*) ;
 int FUNC_5 (struct tipc_node*,int ) ;

__attribute__((used)) static void FUNC_6(struct tipc_node *VAR_5, struct tipc_link *VAR_6,
        struct tipc_link *VAR_7,
        struct sk_buff_head *VAR_8)
{

 if (!FUNC_3(VAR_7))
  return;


 if (VAR_6 && !FUNC_2(VAR_6))
  return;

 FUNC_1(VAR_7, VAR_1);
 FUNC_5(VAR_5, VAR_3);

 VAR_5->sync_point = FUNC_4(VAR_7) + (VAR_4 / 2 - 1);
 FUNC_0(VAR_6, VAR_7, VAR_8);

 if (VAR_6)
  FUNC_1(VAR_6, VAR_0);
 FUNC_5(VAR_5, VAR_2);
}
