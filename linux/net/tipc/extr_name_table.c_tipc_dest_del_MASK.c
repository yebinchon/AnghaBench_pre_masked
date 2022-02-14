
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_dest {int list; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (struct tipc_dest*) ;
 int FUNC_1 (int *) ;
 struct tipc_dest* FUNC_2 (struct list_head*,int ,int ) ;

bool FUNC_3(struct list_head *VAR_0, u32 VAR_1, u32 VAR_2)
{
 struct tipc_dest *VAR_3;

 VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);
 if (!VAR_3)
  return 0;
 FUNC_1(&VAR_3->list);
 FUNC_0(VAR_3);
 return 1;
}
