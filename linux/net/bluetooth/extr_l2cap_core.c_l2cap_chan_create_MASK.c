
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2cap_chan {int conf_state; int kref; int state; int chan_timer; int global_l; int nesting; int lock; } ;


 int FUNC_0 (char*,struct l2cap_chan*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int VAR_3 ;
 int FUNC_2 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 struct l2cap_chan* FUNC_4 (int,int ) ;
 int VAR_6 ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

struct l2cap_chan *FUNC_10(void)
{
 struct l2cap_chan *VAR_7;

 VAR_7 = FUNC_4(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return ((void*)0);

 FUNC_6(&VAR_7->lock);


 FUNC_2(&VAR_7->nesting, VAR_3);

 FUNC_8(&VAR_5);
 FUNC_5(&VAR_7->global_l, &VAR_4);
 FUNC_9(&VAR_5);

 FUNC_1(&VAR_7->chan_timer, VAR_6);

 VAR_7->state = VAR_0;

 FUNC_3(&VAR_7->kref);


 FUNC_7(VAR_1, &VAR_7->conf_state);

 FUNC_0("chan %p", VAR_7);

 return VAR_7;
}
