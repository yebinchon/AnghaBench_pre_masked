
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pktgen_dev {int stopped_at; int * skb; scalar_t__ running; int odevname; } ;
struct TYPE_2__ {int nr_frags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct pktgen_dev*,int) ;
 TYPE_1__* FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct pktgen_dev *VAR_1)
{
 int VAR_2 = VAR_1->skb ? FUNC_4(VAR_1->skb)->nr_frags : -1;

 if (!VAR_1->running) {
  FUNC_2("interface: %s is already stopped\n",
   VAR_1->odevname);
  return -VAR_0;
 }

 VAR_1->running = 0;
 FUNC_0(VAR_1->skb);
 VAR_1->skb = ((void*)0);
 VAR_1->stopped_at = FUNC_1();

 FUNC_3(VAR_1, VAR_2);

 return 0;
}
