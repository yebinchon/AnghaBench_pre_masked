
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_usb_endpoint {int * prepare_data_urb; int * retire_data_urb; int * sync_slave; int * data_subs; int flags; int ep_num; int chip; int nurbs; int active_mask; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int *) ;
 unsigned long VAR_1 ;
 unsigned long FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;
 int FUNC_5 (int ,char*,int,int ) ;

__attribute__((used)) static int FUNC_6(struct snd_usb_endpoint *VAR_2)
{
 unsigned long VAR_3 = VAR_1 + FUNC_2(1000);
 int VAR_4;

 do {
  VAR_4 = FUNC_0(&VAR_2->active_mask, VAR_2->nurbs);
  if (!VAR_4)
   break;

  FUNC_3(1);
 } while (FUNC_4(VAR_1, VAR_3));

 if (VAR_4)
  FUNC_5(VAR_2->chip,
   "timeout: still %d active urbs on EP #%x\n",
   VAR_4, VAR_2->ep_num);
 FUNC_1(VAR_0, &VAR_2->flags);

 VAR_2->data_subs = ((void*)0);
 VAR_2->sync_slave = ((void*)0);
 VAR_2->retire_data_urb = ((void*)0);
 VAR_2->prepare_data_urb = ((void*)0);

 return 0;
}
