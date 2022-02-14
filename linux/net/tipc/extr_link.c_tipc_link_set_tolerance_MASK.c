
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct tipc_link {TYPE_1__* bc_rcvlink; void* tolerance; } ;
struct sk_buff_head {int dummy; } ;
struct TYPE_2__ {void* tolerance; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct tipc_link*) ;
 int FUNC_1 (struct tipc_link*,int ,int ,int ,int ,void*,int ,struct sk_buff_head*) ;

void FUNC_2(struct tipc_link *VAR_1, u32 VAR_2,
        struct sk_buff_head *VAR_3)
{
 VAR_1->tolerance = VAR_2;
 if (VAR_1->bc_rcvlink)
  VAR_1->bc_rcvlink->tolerance = VAR_2;
 if (FUNC_0(VAR_1))
  FUNC_1(VAR_1, VAR_0, 0, 0, 0, VAR_2, 0, VAR_3);
}
