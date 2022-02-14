
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct TYPE_6__ {int play_en; int cap_en; int play_clk_en; int cap_clk_en; } ;
struct TYPE_4__ {scalar_t__ i2s_mclk_cfg; } ;
struct cygnus_aio_port {TYPE_3__ clk_trace; TYPE_2__* cygaud; TYPE_1__ regs; int is_slave; } ;
struct TYPE_5__ {int * audio_clk; int dev; scalar_t__ audio; } ;


 size_t FUNC_0 (int *) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 struct cygnus_aio_port* FUNC_2 (struct snd_soc_dai*) ;
 int FUNC_3 (int ,char*,size_t) ;
 size_t FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct snd_pcm_substream *VAR_2,
          struct snd_soc_dai *VAR_3)
{
 struct cygnus_aio_port *VAR_4 = FUNC_2(VAR_3);

 if (VAR_2->stream == VAR_1)
  VAR_4->clk_trace.play_en = 0;
 else
  VAR_4->clk_trace.cap_en = 0;

 if (!VAR_4->is_slave) {
  u32 VAR_5;

  VAR_5 = FUNC_4(VAR_4->cygaud->audio + VAR_4->regs.i2s_mclk_cfg);
  VAR_5 &= VAR_0;
  if (VAR_5 >= FUNC_0(VAR_4->cygaud->audio_clk)) {
   FUNC_3(VAR_4->cygaud->dev, "Clk index %u is out of bounds\n",
    VAR_5);
   return;
  }

  if (VAR_2->stream == VAR_1) {
   if (VAR_4->clk_trace.play_clk_en) {
    FUNC_1(VAR_4->cygaud->
      audio_clk[VAR_5]);
    VAR_4->clk_trace.play_clk_en = 0;
   }
  } else {
   if (VAR_4->clk_trace.cap_clk_en) {
    FUNC_1(VAR_4->cygaud->
      audio_clk[VAR_5]);
    VAR_4->clk_trace.cap_clk_en = 0;
   }
  }
 }
}
