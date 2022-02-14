
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x25_neigh {scalar_t__ state; int queue; } ;
struct sk_buff {int * data; } ;



 scalar_t__ VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (char*,unsigned short,...) ;
 int FUNC_1 (struct sk_buff*,int ) ;
 struct sk_buff* FUNC_2 (int *) ;
 int FUNC_3 (struct sk_buff*,struct x25_neigh*) ;
 int FUNC_4 (struct x25_neigh*) ;
 int FUNC_5 (struct x25_neigh*) ;
 int FUNC_6 (struct x25_neigh*) ;

void FUNC_7(struct sk_buff *VAR_2, struct x25_neigh *VAR_3,
        unsigned short VAR_4)
{
 struct sk_buff *VAR_5;
 int VAR_6;

 switch (VAR_4) {
 case 128:
  VAR_6 = !FUNC_5(VAR_3);
  FUNC_4(VAR_3);
  VAR_3->state = VAR_0;
  if (VAR_6)
   FUNC_6(VAR_3);
  break;

 case 129:
  FUNC_4(VAR_3);
  VAR_3->state = VAR_0;
  break;

 case 130:
  if (!FUNC_1(VAR_2, VAR_1 + 4))
   break;

  FUNC_0("diagnostic #%d - %02X %02X %02X\n",
         VAR_2->data[3], VAR_2->data[4],
         VAR_2->data[5], VAR_2->data[6]);
  break;

 default:
  FUNC_0("received unknown %02X with LCI 000\n",
         VAR_4);
  break;
 }

 if (VAR_3->state == VAR_0)
  while ((VAR_5 = FUNC_2(&VAR_3->queue)) != ((void*)0))
   FUNC_3(VAR_5, VAR_3);
}
