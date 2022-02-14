
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x25_neigh {int global_facil_mask; int node; int refcnt; int t20; scalar_t__ extended; int state; struct net_device* dev; int t20timer; int queue; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct net_device*) ;
 struct x25_neigh* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int VAR_6 ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

void FUNC_8(struct net_device *VAR_10)
{
 struct x25_neigh *VAR_11 = FUNC_1(sizeof(*VAR_11), VAR_0);

 if (!VAR_11)
  return;

 FUNC_4(&VAR_11->queue);
 FUNC_5(&VAR_11->t20timer, VAR_9, 0);

 FUNC_0(VAR_10);
 VAR_11->dev = VAR_10;
 VAR_11->state = VAR_1;
 VAR_11->extended = 0;



 VAR_11->global_facil_mask = VAR_3 |
           VAR_4 |
           VAR_2 |
           VAR_5;
 VAR_11->t20 = VAR_6;
 FUNC_3(&VAR_11->refcnt, 1);

 FUNC_6(&VAR_8);
 FUNC_2(&VAR_11->node, &VAR_7);
 FUNC_7(&VAR_8);
}
