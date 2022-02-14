
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_peer {int is_local; int is_head; int is_up; int applied; } ;
struct tipc_monitor {int list_gen; struct tipc_peer* self; } ;


 struct tipc_peer* FUNC_0 (struct tipc_peer*) ;

__attribute__((used)) static void FUNC_1(struct tipc_monitor *VAR_0, struct tipc_peer *VAR_1)
{
 struct tipc_peer *VAR_2 = FUNC_0(VAR_1);
 struct tipc_peer *VAR_3 = VAR_0->self;
 int VAR_4 = 0;

 for (; VAR_2 != VAR_3; VAR_2 = FUNC_0(VAR_2)) {
  VAR_2->is_local = 0;


  if (VAR_4++ < VAR_1->applied) {
   VAR_2->is_head = 0;
   if (VAR_1 == VAR_3)
    VAR_2->is_local = 1;
   continue;
  }

  if (!VAR_2->is_up)
   continue;
  if (VAR_2->is_head)
   break;
  VAR_1 = VAR_2;
  VAR_1->is_head = 1;
  VAR_4 = 0;
 }
 VAR_0->list_gen++;
}
