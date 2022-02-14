
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct sctp_transport {int dummy; } ;
struct dst_entry {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* redirect ) (struct dst_entry*,struct sock*,struct sk_buff*) ;} ;


 struct dst_entry* FUNC_0 (struct sctp_transport*) ;
 scalar_t__ FUNC_1 (struct sock*) ;
 int FUNC_2 (struct dst_entry*,struct sock*,struct sk_buff*) ;

void FUNC_3(struct sock *VAR_0, struct sctp_transport *VAR_1,
   struct sk_buff *VAR_2)
{
 struct dst_entry *VAR_3;

 if (FUNC_1(VAR_0) || !VAR_1)
  return;
 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3)
  VAR_3->ops->redirect(VAR_3, VAR_0, VAR_2);
}
