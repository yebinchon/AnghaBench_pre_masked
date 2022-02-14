
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {struct sk_buff* next; } ;
struct TYPE_2__ {unsigned int tskey; int tx_flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int,unsigned int) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_2(struct sk_buff *VAR_1, unsigned int VAR_2,
      unsigned int VAR_3, unsigned int VAR_4)
{
 while (VAR_1) {
  if (FUNC_0(VAR_2, VAR_3 + VAR_4)) {
   FUNC_1(VAR_1)->tx_flags |= VAR_0;
   FUNC_1(VAR_1)->tskey = VAR_2;
   return;
  }

  VAR_1 = VAR_1->next;
  VAR_3 += VAR_4;
 }
}
