
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tipc_node {int net; TYPE_1__* links; } ;
struct tipc_media_addr {int dummy; } ;
struct sk_buff_head {int dummy; } ;
struct TYPE_2__ {struct tipc_media_addr maddr; } ;


 int FUNC_0 (struct tipc_node*,int,struct sk_buff_head*) ;
 int FUNC_1 (int ,int,struct sk_buff_head*,struct tipc_media_addr*) ;
 int FUNC_2 (struct tipc_node*) ;
 int FUNC_3 (struct tipc_node*) ;

__attribute__((used)) static void FUNC_4(struct tipc_node *VAR_0, int VAR_1,
         struct sk_buff_head *VAR_2)
{
 struct tipc_media_addr *VAR_3;

 FUNC_2(VAR_0);
 FUNC_0(VAR_0, VAR_1, VAR_2);
 VAR_3 = &VAR_0->links[VAR_1].maddr;
 FUNC_1(VAR_0->net, VAR_1, VAR_2, VAR_3);
 FUNC_3(VAR_0);
}
