
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* done ) (struct pfkey_sock*) ;int * dump; int * skb; } ;
struct pfkey_sock {TYPE_1__ dump; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct pfkey_sock*) ;

__attribute__((used)) static void FUNC_2(struct pfkey_sock *VAR_0)
{
 if (VAR_0->dump.dump) {
  if (VAR_0->dump.skb) {
   FUNC_0(VAR_0->dump.skb);
   VAR_0->dump.skb = ((void*)0);
  }
  VAR_0->dump.done(VAR_0);
  VAR_0->dump.dump = ((void*)0);
  VAR_0->dump.done = ((void*)0);
 }
}
