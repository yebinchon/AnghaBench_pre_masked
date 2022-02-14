
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {int stream; } ;
struct TYPE_4__ {scalar_t__ bytes; scalar_t__ pos_done; scalar_t__ count; } ;
struct TYPE_3__ {scalar_t__ bytes; scalar_t__ pos_done; scalar_t__ pos; scalar_t__ count; } ;
struct snd_line6_pcm {int state_mutex; TYPE_2__ in; TYPE_1__ out; int flags; } ;
struct line6_pcm_stream {int running; } ;


 int VAR_0 ;
 struct line6_pcm_stream* FUNC_0 (struct snd_line6_pcm*,int ) ;
 int FUNC_1 (struct snd_line6_pcm*,struct line6_pcm_stream*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct snd_line6_pcm* FUNC_4 (struct snd_pcm_substream*) ;
 int FUNC_5 (int ,int *) ;

int FUNC_6(struct snd_pcm_substream *VAR_1)
{
 struct snd_line6_pcm *VAR_2 = FUNC_4(VAR_1);
 struct line6_pcm_stream *VAR_3 = FUNC_0(VAR_2, VAR_1->stream);

 FUNC_2(&VAR_2->state_mutex);
 if (!VAR_3->running)
  FUNC_1(VAR_2, VAR_3);

 if (!FUNC_5(VAR_0, &VAR_2->flags)) {
  VAR_2->out.count = 0;
  VAR_2->out.pos = 0;
  VAR_2->out.pos_done = 0;
  VAR_2->out.bytes = 0;
  VAR_2->in.count = 0;
  VAR_2->in.pos_done = 0;
  VAR_2->in.bytes = 0;
 }

 FUNC_3(&VAR_2->state_mutex);
 return 0;
}
