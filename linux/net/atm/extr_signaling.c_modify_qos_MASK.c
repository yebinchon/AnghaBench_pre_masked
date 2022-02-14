
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct atmsvc_msg {int type; int reply; int qos; } ;
struct atm_vcc {TYPE_2__* dev; int flags; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* change_qos ) (struct atm_vcc*,int *,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct atm_vcc*,int *,int ) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct atm_vcc *VAR_6, struct atmsvc_msg *VAR_7)
{
 struct sk_buff *VAR_8;

 if (FUNC_5(VAR_1, &VAR_6->flags) ||
     !FUNC_5(VAR_0, &VAR_6->flags))
  return;
 VAR_7->type = VAR_4;
 if (!VAR_6->dev->ops->change_qos)
  VAR_7->reply = -VAR_2;
 else {

  VAR_7->reply = VAR_6->dev->ops->change_qos(VAR_6, &VAR_7->qos,
             VAR_7->reply);
  if (!VAR_7->reply)
   VAR_7->type = VAR_5;
 }




 while (!(VAR_8 = FUNC_0(sizeof(struct atmsvc_msg), VAR_3)))
  FUNC_1();
 *(struct atmsvc_msg *)FUNC_3(VAR_8, sizeof(struct atmsvc_msg)) = *VAR_7;
 FUNC_2(VAR_8);
}
