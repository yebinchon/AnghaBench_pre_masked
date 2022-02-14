
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2tp_tunnel {int del_work; int dead; } ;


 int FUNC_0 (struct l2tp_tunnel*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;

void FUNC_3(struct l2tp_tunnel *VAR_1)
{
 if (!FUNC_2(0, &VAR_1->dead)) {
  FUNC_0(VAR_1);
  FUNC_1(VAR_0, &VAR_1->del_work);
 }
}
