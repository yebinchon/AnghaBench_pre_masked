
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iucv_path {TYPE_1__* handler; } ;
struct iucv_message_complete {size_t ippathid; int ipbfln2f; int ipmsgtag; int ipsrccls; int iprmmsg; int ipaudit; int ipmsgid; int ipflags1; } ;
struct iucv_message {int length; int tag; int class; int rmmsg; int audit; int id; int flags; } ;
struct iucv_irq_data {int dummy; } ;
struct TYPE_2__ {int (* message_complete ) (struct iucv_path*,struct iucv_message*) ;} ;


 struct iucv_path** VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct iucv_path*,struct iucv_message*) ;

__attribute__((used)) static void FUNC_2(struct iucv_irq_data *VAR_1)
{
 struct iucv_message_complete *VAR_2 = (void *) VAR_1;
 struct iucv_path *VAR_3 = VAR_0[VAR_2->ippathid];
 struct iucv_message VAR_4;

 if (VAR_3 && VAR_3->handler && VAR_3->handler->message_complete) {
  VAR_4.flags = VAR_2->ipflags1;
  VAR_4.id = VAR_2->ipmsgid;
  VAR_4.audit = VAR_2->ipaudit;
  FUNC_0(VAR_4.rmmsg, VAR_2->iprmmsg, 8);
  VAR_4.class = VAR_2->ipsrccls;
  VAR_4.tag = VAR_2->ipmsgtag;
  VAR_4.length = VAR_2->ipbfln2f;
  VAR_3->handler->message_complete(VAR_3, &VAR_4);
 }
}
