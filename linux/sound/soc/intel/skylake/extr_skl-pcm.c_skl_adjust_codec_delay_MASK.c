
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef long long u64 ;
struct snd_soc_pcm_runtime {struct snd_soc_dai* codec_dai; } ;
struct snd_soc_dai {TYPE_2__* driver; } ;
struct snd_pcm_substream {scalar_t__ stream; TYPE_1__* runtime; } ;
struct TYPE_6__ {long long (* delay ) (struct snd_pcm_substream*,struct snd_soc_dai*) ;} ;
struct TYPE_5__ {TYPE_3__* ops; } ;
struct TYPE_4__ {int rate; } ;


 scalar_t__ VAR_0 ;
 long long FUNC_0 (long long,int ) ;
 struct snd_soc_pcm_runtime* FUNC_1 (struct snd_pcm_substream*) ;
 long long FUNC_2 (struct snd_pcm_substream*,struct snd_soc_dai*) ;

__attribute__((used)) static u64 FUNC_3(struct snd_pcm_substream *VAR_1,
    u64 VAR_2)
{
 struct snd_soc_pcm_runtime *VAR_3 = FUNC_1(VAR_1);
 struct snd_soc_dai *VAR_4 = VAR_3->codec_dai;
 u64 VAR_5, VAR_6;

 if (!VAR_4->driver->ops->delay)
  return VAR_2;

 VAR_5 = VAR_4->driver->ops->delay(VAR_1, VAR_4);
 VAR_6 = FUNC_0(VAR_5 * 1000000000LL,
         VAR_1->runtime->rate);

 if (VAR_1->stream == VAR_0)
  return VAR_2 + VAR_6;

 return (VAR_2 > VAR_6) ? VAR_2 - VAR_6 : 0;
}
