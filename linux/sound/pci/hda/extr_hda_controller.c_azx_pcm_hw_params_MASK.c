
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct azx_pcm {struct azx* chip; } ;
struct TYPE_2__ {scalar_t__ format_val; scalar_t__ period_bytes; scalar_t__ bufsize; } ;
struct azx_dev {TYPE_1__ core; } ;
struct azx {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct azx_dev*) ;
 int FUNC_1 (struct azx_dev*) ;
 int FUNC_2 (struct azx_dev*) ;
 struct azx_dev* FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 int FUNC_5 (struct snd_pcm_substream*,int ) ;
 struct azx_pcm* FUNC_6 (struct snd_pcm_substream*) ;
 int FUNC_7 (struct azx*,struct azx_dev*) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_1,
        struct snd_pcm_hw_params *VAR_2)
{
 struct azx_pcm *VAR_3 = FUNC_6(VAR_1);
 struct azx *VAR_4 = VAR_3->chip;
 struct azx_dev *VAR_5 = FUNC_3(VAR_1);
 int VAR_6;

 FUNC_7(VAR_4, VAR_5);
 FUNC_1(VAR_5);
 if (FUNC_0(VAR_5)) {
  VAR_6 = -VAR_0;
  goto unlock;
 }

 VAR_5->core.bufsize = 0;
 VAR_5->core.period_bytes = 0;
 VAR_5->core.format_val = 0;
 VAR_6 = FUNC_5(VAR_1,
           FUNC_4(VAR_2));

unlock:
 FUNC_2(VAR_5);
 return VAR_6;
}
