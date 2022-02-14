
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2tp_tunnel {scalar_t__ magic; } ;
struct l2tp_session {int ref_count; struct l2tp_tunnel* tunnel; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct l2tp_session*) ;
 int FUNC_2 (struct l2tp_tunnel*) ;
 scalar_t__ FUNC_3 (int *) ;

void FUNC_4(struct l2tp_session *VAR_1)
{
 struct l2tp_tunnel *VAR_2 = VAR_1->tunnel;

 FUNC_0(FUNC_3(&VAR_1->ref_count) != 0);

 if (VAR_2) {
  FUNC_0(VAR_2->magic != VAR_0);
  FUNC_2(VAR_2);
 }

 FUNC_1(VAR_1);
}
