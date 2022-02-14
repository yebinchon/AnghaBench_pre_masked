
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct dst_entry {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* redirect ) (struct dst_entry*,struct sock*,struct sk_buff*) ;} ;


 struct dst_entry* FUNC_0 (struct sock*,int ) ;
 int FUNC_1 (struct dst_entry*,struct sock*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_2(struct sk_buff *VAR_0, struct sock *VAR_1)
{
 struct dst_entry *VAR_2 = FUNC_0(VAR_1, 0);

 if (VAR_2)
  VAR_2->ops->redirect(VAR_2, VAR_1, VAR_0);
}
