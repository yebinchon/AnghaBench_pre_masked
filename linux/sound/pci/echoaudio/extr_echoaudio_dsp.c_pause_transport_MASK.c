
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct echoaudio {TYPE_1__* card; TYPE_2__* comm_page; int active_mask; } ;
struct TYPE_4__ {int cmd_stop; scalar_t__ cmd_reset; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct echoaudio*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct echoaudio*,int ) ;
 scalar_t__ FUNC_4 (struct echoaudio*) ;

__attribute__((used)) static int FUNC_5(struct echoaudio *VAR_2, u32 VAR_3)
{

 if (FUNC_4(VAR_2))
  return -VAR_1;

 VAR_2->comm_page->cmd_stop |= FUNC_1(VAR_3);
 VAR_2->comm_page->cmd_reset = 0;
 if (VAR_2->comm_page->cmd_stop) {
  FUNC_0(VAR_2);
  FUNC_3(VAR_2, VAR_0);
  if (FUNC_4(VAR_2))
   return -VAR_1;

  VAR_2->active_mask &= ~VAR_3;
  VAR_2->comm_page->cmd_stop = 0;
  VAR_2->comm_page->cmd_reset = 0;
  return 0;
 }

 FUNC_2(VAR_2->card->dev, "pause_transport: No pipes to stop!\n");
 return 0;
}
