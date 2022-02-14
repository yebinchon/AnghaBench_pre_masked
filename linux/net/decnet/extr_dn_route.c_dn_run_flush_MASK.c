
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct dn_route {int dst; int dn_next; } ;
struct TYPE_2__ {int lock; int chain; } ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct dn_route* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct dn_route* FUNC_6 (struct dn_route**,int *) ;

__attribute__((used)) static void FUNC_7(struct timer_list *VAR_2)
{
 int VAR_3;
 struct dn_route *VAR_4, *VAR_5;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  FUNC_4(&VAR_1[VAR_3].lock);

  if ((VAR_4 = FUNC_6((struct dn_route **)&VAR_1[VAR_3].chain, ((void*)0))) == ((void*)0))
   goto nothing_to_declare;

  for(; VAR_4; VAR_4 = VAR_5) {
   VAR_5 = FUNC_3(VAR_4->dn_next);
   FUNC_0(VAR_4->dn_next, ((void*)0));
   FUNC_1(&VAR_4->dst);
   FUNC_2(&VAR_4->dst);
  }

nothing_to_declare:
  FUNC_5(&VAR_1[VAR_3].lock);
 }
}
