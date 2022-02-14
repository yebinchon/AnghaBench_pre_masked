
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int queue; } ;
struct skb_array {TYPE_1__ ring; } ;
struct pfifo_fast_priv {int dummy; } ;
struct Qdisc {int dummy; } ;


 int VAR_0 ;
 struct skb_array* FUNC_0 (struct pfifo_fast_priv*,int) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 struct pfifo_fast_priv* FUNC_2 (struct Qdisc*) ;

__attribute__((used)) static void FUNC_3(struct Qdisc *VAR_1)
{
 struct pfifo_fast_priv *VAR_2 = FUNC_2(VAR_1);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  struct skb_array *VAR_4 = FUNC_0(VAR_2, VAR_3);




  if (!VAR_4->ring.queue)
   continue;



  FUNC_1(&VAR_4->ring, ((void*)0));
 }
}
