
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcxhr {TYPE_2__* card; int mgr; } ;
struct pcxhr_stream {scalar_t__ status; TYPE_3__* substream; TYPE_1__* pipe; scalar_t__ timer_is_synced; scalar_t__ timer_buf_periods; scalar_t__ timer_period_frag; scalar_t__ timer_abs_periods; } ;
struct pcxhr_rmh {int dummy; } ;
struct TYPE_6__ {int number; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {int first_audio; int is_capture; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct pcxhr_rmh*,int ) ;
 int FUNC_2 (int ,struct pcxhr_rmh*) ;
 int FUNC_3 (struct pcxhr_rmh*,int ,int ,int ,int) ;
 struct snd_pcxhr* FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcxhr *VAR_7,
      struct pcxhr_stream *VAR_8)
{
 int VAR_9;
 struct pcxhr_rmh VAR_10;
 int VAR_11, VAR_12;

 if (VAR_8->status == VAR_3)
  VAR_12 = 1;
 else {
  if (VAR_8->status != VAR_4) {
   FUNC_0(VAR_7->card->dev,
    "pcxhr_set_stream_state CANNOT be stopped\n");
   return -VAR_2;
  }
  VAR_12 = 0;
 }
 if (!VAR_8->substream)
  return -VAR_2;

 VAR_8->timer_abs_periods = 0;
 VAR_8->timer_period_frag = 0;
 VAR_8->timer_buf_periods = 0;
 VAR_8->timer_is_synced = 0;

 VAR_11 =
   VAR_8->pipe->is_capture ? 1 : 1<<VAR_8->substream->number;

 FUNC_1(&VAR_10, VAR_12 ? VAR_0 : VAR_1);
 FUNC_3(&VAR_10, VAR_8->pipe->is_capture,
      VAR_8->pipe->first_audio, 0, VAR_11);

 VAR_7 = FUNC_4(VAR_8->substream);

 VAR_9 = FUNC_2(VAR_7->mgr, &VAR_10);
 if (VAR_9)
  FUNC_0(VAR_7->card->dev,
   "ERROR pcxhr_set_stream_state err=%x;\n", VAR_9);
 VAR_8->status =
   VAR_12 ? VAR_5 : VAR_6;
 return VAR_9;
}
