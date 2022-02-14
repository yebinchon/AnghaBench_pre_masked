
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_usb_substream {TYPE_3__* str_pd; TYPE_2__* dev; TYPE_1__* stream; } ;
struct TYPE_6__ {int pd_id; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {int chip; } ;


 int FUNC_0 (int *,char*,int ,int,int) ;
 int FUNC_1 (int ,TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_2(struct snd_usb_substream *VAR_0, int VAR_1)
{
 int VAR_2;

 if (!VAR_0->str_pd)
  return 0;

 VAR_2 = FUNC_1(VAR_0->stream->chip, VAR_0->str_pd, VAR_1);
 if (VAR_2 < 0) {
  FUNC_0(&VAR_0->dev->dev,
   "Cannot change Power Domain ID: %d to state: %d. Err: %d\n",
   VAR_0->str_pd->pd_id, VAR_1, VAR_2);
  return VAR_2;
 }

 return 0;
}
