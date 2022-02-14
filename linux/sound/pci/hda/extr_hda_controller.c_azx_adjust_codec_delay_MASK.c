
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef long long u64 ;
struct snd_pcm_substream {scalar_t__ stream; TYPE_1__* runtime; } ;
struct TYPE_4__ {long long (* get_delay ) (struct hda_pcm_stream*,int ,struct snd_pcm_substream*) ;} ;
struct hda_pcm_stream {TYPE_2__ ops; } ;
struct azx_pcm {int codec; } ;
struct TYPE_3__ {int rate; } ;


 scalar_t__ VAR_0 ;
 long long FUNC_0 (long long,int ) ;
 struct azx_pcm* FUNC_1 (struct snd_pcm_substream*) ;
 long long FUNC_2 (struct hda_pcm_stream*,int ,struct snd_pcm_substream*) ;
 struct hda_pcm_stream* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static u64 FUNC_4(struct snd_pcm_substream *VAR_1,
    u64 VAR_2)
{
 struct azx_pcm *VAR_3 = FUNC_1(VAR_1);
 struct hda_pcm_stream *VAR_4 = FUNC_3(VAR_1);
 u64 VAR_5, VAR_6;

 if (!VAR_4->ops.get_delay)
  return VAR_2;

 VAR_5 = VAR_4->ops.get_delay(VAR_4, VAR_3->codec, VAR_1);
 VAR_6 = FUNC_0(VAR_5 * 1000000000LL,
         VAR_1->runtime->rate);

 if (VAR_1->stream == VAR_0)
  return VAR_2 + VAR_6;

 return (VAR_2 > VAR_6) ? VAR_2 - VAR_6 : 0;
}
