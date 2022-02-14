
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iucv_path {TYPE_3__* handler; } ;
struct TYPE_5__ {int ipbfln1f; } ;
struct TYPE_4__ {int iprmmsg1; } ;
struct iucv_message_pending {size_t ippathid; int ipflags1; int ipbfln2f; TYPE_2__ ln1msg2; TYPE_1__ ln1msg1; int iptrgcls; int ipmsgid; } ;
struct iucv_message {int flags; int length; int reply_size; int rmmsg; int class; int id; } ;
struct iucv_irq_data {int dummy; } ;
struct TYPE_6__ {int (* message_pending ) (struct iucv_path*,struct iucv_message*) ;} ;


 int VAR_0 ;
 struct iucv_path** VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct iucv_path*,struct iucv_message*) ;

__attribute__((used)) static void FUNC_2(struct iucv_irq_data *VAR_2)
{
 struct iucv_message_pending *VAR_3 = (void *) VAR_2;
 struct iucv_path *VAR_4 = VAR_1[VAR_3->ippathid];
 struct iucv_message VAR_5;

 if (VAR_4 && VAR_4->handler && VAR_4->handler->message_pending) {
  VAR_5.flags = VAR_3->ipflags1;
  VAR_5.id = VAR_3->ipmsgid;
  VAR_5.class = VAR_3->iptrgcls;
  if (VAR_3->ipflags1 & VAR_0) {
   FUNC_0(VAR_5.rmmsg, VAR_3->ln1msg1.iprmmsg1, 8);
   VAR_5.length = 8;
  } else
   VAR_5.length = VAR_3->ln1msg2.ipbfln1f;
  VAR_5.reply_size = VAR_3->ipbfln2f;
  VAR_4->handler->message_pending(VAR_4, &VAR_5);
 }
}
