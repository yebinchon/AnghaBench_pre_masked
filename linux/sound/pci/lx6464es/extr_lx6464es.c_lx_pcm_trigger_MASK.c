
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int stream; } ;
struct lx_stream {int dummy; } ;
struct lx6464es {TYPE_1__* card; struct lx_stream playback_stream; struct lx_stream capture_stream; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct lx6464es*,struct lx_stream*,int) ;
 struct lx6464es* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_1, int VAR_2)
{
 struct lx6464es *VAR_3 = FUNC_2(VAR_1);
 const int VAR_4 = (VAR_1->stream == VAR_0);
 struct lx_stream *VAR_5 = VAR_4 ? &VAR_3->capture_stream :
  &VAR_3->playback_stream;

 FUNC_0(VAR_3->card->dev, "->lx_pcm_trigger\n");

 return FUNC_1(VAR_3, VAR_5, VAR_2);
}
