
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct tipc_dest {int list; void* port; void* node; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 struct tipc_dest* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,struct list_head*) ;
 scalar_t__ FUNC_2 (struct list_head*,void*,void*) ;
 scalar_t__ FUNC_3 (int) ;

bool FUNC_4(struct list_head *VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct tipc_dest *VAR_4;

 if (FUNC_2(VAR_1, VAR_2, VAR_3))
  return 0;

 VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_0);
 if (FUNC_3(!VAR_4))
  return 0;
 VAR_4->node = VAR_2;
 VAR_4->port = VAR_3;
 FUNC_1(&VAR_4->list, VAR_1);
 return 1;
}
