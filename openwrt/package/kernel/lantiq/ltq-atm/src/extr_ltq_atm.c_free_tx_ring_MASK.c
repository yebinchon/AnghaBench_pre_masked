
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct connection {int lock; struct sk_buff** tx_skb; TYPE_1__* tx_desc; } ;
struct TYPE_6__ {int vcc; } ;
struct TYPE_5__ {struct connection* conn; } ;
struct TYPE_4__ {scalar_t__ own; } ;


 TYPE_3__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,int ) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(unsigned int VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;
 struct connection *VAR_5 = &VAR_1.conn[VAR_2];
 struct sk_buff *VAR_6;

 if (!VAR_5)
  return;

 FUNC_2(&VAR_5->lock, VAR_3);

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_5->tx_desc[VAR_4].own == 0 && VAR_5->tx_skb[VAR_4] != ((void*)0)) {
   VAR_6 = VAR_5->tx_skb[VAR_4];
   VAR_5->tx_skb[VAR_4] = ((void*)0);
   FUNC_1(VAR_6, FUNC_0(VAR_6)->vcc);
  }
 }
 FUNC_3(&VAR_5->lock, VAR_3);
}
