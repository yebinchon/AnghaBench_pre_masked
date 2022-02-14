
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x25_neigh {int state; } ;




 void* VAR_0 ;
 int FUNC_0 (struct x25_neigh*) ;
 int FUNC_1 (struct x25_neigh*) ;

void FUNC_2(struct x25_neigh *VAR_1)
{
 switch (VAR_1->state) {
 case 129:
  VAR_1->state = VAR_0;
  break;
 case 128:
  FUNC_1(VAR_1);
  VAR_1->state = VAR_0;
  FUNC_0(VAR_1);
  break;
 }
}
