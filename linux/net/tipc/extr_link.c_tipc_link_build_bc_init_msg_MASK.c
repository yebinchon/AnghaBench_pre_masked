
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_link {int bc_rcvlink; } ;
struct sk_buff_head {int dummy; } ;


 int FUNC_0 (struct sk_buff_head*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct sk_buff_head*) ;
 int FUNC_4 (int ,int,int ,struct sk_buff_head*) ;
 int FUNC_5 (struct tipc_link*,struct sk_buff_head*,struct sk_buff_head*) ;

__attribute__((used)) static void FUNC_6(struct tipc_link *VAR_0,
     struct sk_buff_head *VAR_1)
{
 struct sk_buff_head VAR_2;

 FUNC_0(&VAR_2);
 if (!FUNC_4(VAR_0->bc_rcvlink, 0, 0, &VAR_2))
  return;
 FUNC_2(FUNC_1(FUNC_3(&VAR_2)), 1);
 FUNC_5(VAR_0, &VAR_2, VAR_1);
}
