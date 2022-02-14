
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; TYPE_3__* runtime; } ;
struct TYPE_5__ {int play_en; int cap_en; } ;
struct cygnus_aio_port {TYPE_2__ clk_trace; } ;
struct TYPE_4__ {int rate_max; int rate_min; } ;
struct TYPE_6__ {TYPE_1__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct cygnus_aio_port* FUNC_0 (struct snd_soc_dai*) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_3__*,int ,int ,int *) ;
 int FUNC_2 (struct snd_soc_dai*,struct snd_pcm_substream*,struct cygnus_aio_port*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_5,
          struct snd_soc_dai *VAR_6)
{
 struct cygnus_aio_port *VAR_7 = FUNC_0(VAR_6);

 FUNC_2(VAR_6, VAR_5, VAR_7);
 if (VAR_5->stream == VAR_3)
  VAR_7->clk_trace.play_en = 1;
 else
  VAR_7->clk_trace.cap_en = 1;

 VAR_5->runtime->hw.rate_min = VAR_1;
 VAR_5->runtime->hw.rate_max = VAR_0;

 FUNC_1(VAR_5->runtime, 0,
   VAR_2, &VAR_4);
 return 0;
}
