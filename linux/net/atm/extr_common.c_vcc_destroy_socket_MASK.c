
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int sk_receive_queue; } ;
struct sk_buff {int truesize; } ;
struct atm_vcc {TYPE_2__* dev; int owner; int (* push ) (struct atm_vcc*,int *) ;int flags; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int owner; int (* close ) (struct atm_vcc*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct atm_vcc*,int ) ;
 struct atm_vcc* FUNC_2 (struct sock*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *) ;
 struct sk_buff* FUNC_7 (int *) ;
 int FUNC_8 (struct atm_vcc*) ;
 int FUNC_9 (struct atm_vcc*,int *) ;
 int FUNC_10 (struct sock*) ;

__attribute__((used)) static void FUNC_11(struct sock *VAR_2)
{
 struct atm_vcc *VAR_3 = FUNC_2(VAR_2);
 struct sk_buff *VAR_4;

 FUNC_6(VAR_0, &VAR_3->flags);
 FUNC_3(VAR_1, &VAR_3->flags);
 if (VAR_3->dev) {
  if (VAR_3->dev->ops->close)
   VAR_3->dev->ops->close(VAR_3);
  if (VAR_3->push)
   VAR_3->push(VAR_3, ((void*)0));
  FUNC_5(VAR_3->owner);

  while ((VAR_4 = FUNC_7(&VAR_2->sk_receive_queue)) != ((void*)0)) {
   FUNC_1(VAR_3, VAR_4->truesize);
   FUNC_4(VAR_4);
  }

  FUNC_5(VAR_3->dev->ops->owner);
  FUNC_0(VAR_3->dev);
 }

 FUNC_10(VAR_2);
}
