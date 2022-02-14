
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ncsi_package {int lock; int channel_num; int channels; } ;
struct TYPE_4__ {int enabled; int timer; } ;
struct ncsi_channel {unsigned char id; int node; TYPE_3__* modes; TYPE_2__* caps; int link; int lock; TYPE_1__ monitor; int state; struct ncsi_package* package; } ;
struct TYPE_6__ {int index; } ;
struct TYPE_5__ {int index; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ncsi_channel*) ;
 struct ncsi_channel* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int VAR_4 ;
 struct ncsi_channel* FUNC_4 (struct ncsi_package*,unsigned char) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,int ,int ) ;

struct ncsi_channel *FUNC_9(struct ncsi_package *VAR_5, unsigned char VAR_6)
{
 struct ncsi_channel *VAR_7, *VAR_8;
 int VAR_9;
 unsigned long VAR_10;

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_0);
 if (!VAR_7)
  return ((void*)0);

 VAR_7->id = VAR_6;
 VAR_7->package = VAR_5;
 VAR_7->state = VAR_2;
 VAR_7->monitor.enabled = 0;
 FUNC_8(&VAR_7->monitor.timer, VAR_4, 0);
 FUNC_5(&VAR_7->lock);
 FUNC_0(&VAR_7->link);
 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++)
  VAR_7->caps[VAR_9].index = VAR_9;
 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
  VAR_7->modes[VAR_9].index = VAR_9;

 FUNC_6(&VAR_5->lock, VAR_10);
 VAR_8 = FUNC_4(VAR_5, VAR_6);
 if (VAR_8) {
  FUNC_7(&VAR_5->lock, VAR_10);
  FUNC_1(VAR_7);
  return VAR_8;
 }

 FUNC_3(&VAR_7->node, &VAR_5->channels);
 VAR_5->channel_num++;
 FUNC_7(&VAR_5->lock, VAR_10);

 return VAR_7;
}
