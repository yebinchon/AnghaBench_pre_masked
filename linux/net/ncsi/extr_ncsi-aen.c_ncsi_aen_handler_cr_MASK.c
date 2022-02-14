
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ncsi_dev_priv {int lock; int channel_queue; } ;
struct ncsi_channel {scalar_t__ state; int link; int lock; } ;
struct TYPE_2__ {int channel; } ;
struct ncsi_aen_pkt_hdr {TYPE_1__ common; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ncsi_dev_priv*,int ,int *,struct ncsi_channel**) ;
 int FUNC_3 (struct ncsi_dev_priv*) ;
 int FUNC_4 (struct ncsi_channel*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct ncsi_dev_priv *VAR_4,
          struct ncsi_aen_pkt_hdr *VAR_5)
{
 struct ncsi_channel *VAR_6;
 unsigned long VAR_7;


 FUNC_2(VAR_4, VAR_5->common.channel, ((void*)0), &VAR_6);
 if (!VAR_6)
  return -VAR_0;

 FUNC_5(&VAR_6->lock, VAR_7);
 if (!FUNC_1(&VAR_6->link) ||
     VAR_6->state != VAR_1) {
  FUNC_6(&VAR_6->lock, VAR_7);
  return 0;
 }
 FUNC_6(&VAR_6->lock, VAR_7);

 FUNC_4(VAR_6);
 FUNC_5(&VAR_6->lock, VAR_7);
 VAR_6->state = VAR_3;
 FUNC_6(&VAR_6->lock, VAR_7);

 FUNC_5(&VAR_4->lock, VAR_7);
 VAR_6->state = VAR_2;
 FUNC_0(&VAR_6->link, &VAR_4->channel_queue);
 FUNC_6(&VAR_4->lock, VAR_7);

 return FUNC_3(VAR_4);
}
