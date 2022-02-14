
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int period_size; int periods; } ;
struct TYPE_5__ {TYPE_1__ setup; } ;
struct snd_pcm_substream {TYPE_2__ oss; int mmap_count; struct snd_pcm_runtime* runtime; } ;
struct TYPE_6__ {size_t mmap_bytes; int fragshift; int subdivision; size_t maxfrags; size_t period_bytes; int period_frames; size_t periods; } ;
struct snd_pcm_runtime {TYPE_3__ oss; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 size_t FUNC_4 (size_t) ;
 size_t FUNC_5 (size_t) ;
 int FUNC_6 (int ) ;
 size_t FUNC_7 (struct snd_pcm_hw_params*,int ,int *) ;
 size_t FUNC_8 (struct snd_pcm_hw_params*,int ,int *) ;
 size_t FUNC_9 (struct snd_pcm_substream*,size_t) ;

__attribute__((used)) static int FUNC_10(struct snd_pcm_substream *VAR_4,
       struct snd_pcm_hw_params *VAR_5,
       struct snd_pcm_hw_params *VAR_6)
{
 size_t VAR_7;
 size_t VAR_8, VAR_9, VAR_10;
 size_t VAR_11, VAR_12;
 struct snd_pcm_runtime *VAR_13 = VAR_4->runtime;
 size_t VAR_14;

 VAR_14 = FUNC_6(FUNC_2(VAR_5)) *
    FUNC_1(VAR_5) / 8;

 VAR_8 = FUNC_9(VAR_4,
         FUNC_7(VAR_6, VAR_1, ((void*)0))) * VAR_14;
 VAR_8 = FUNC_4(VAR_8);
 if (FUNC_0(&VAR_4->mmap_count)) {
  if (VAR_8 > VAR_13->oss.mmap_bytes)
   VAR_8 = VAR_13->oss.mmap_bytes;
 }

 if (VAR_4->oss.setup.period_size > 16)
  VAR_9 = VAR_4->oss.setup.period_size;
 else if (VAR_13->oss.fragshift) {
  VAR_9 = 1 << VAR_13->oss.fragshift;
  if (VAR_9 > VAR_8 / 2)
   VAR_9 = VAR_8 / 2;
 } else {
  int VAR_15;
  size_t VAR_16 = FUNC_3(VAR_5) * FUNC_6(FUNC_2(VAR_5)) * FUNC_1(VAR_5) / 8;

  VAR_9 = VAR_8;
  do {
   VAR_9 /= 2;
  } while (VAR_9 > VAR_16);
  if (VAR_13->oss.subdivision == 0) {
   VAR_15 = 4;
   if (VAR_9 / VAR_15 > 4096)
    VAR_15 *= 2;
   if (VAR_9 / VAR_15 < 4096)
    VAR_15 = 1;
  } else
   VAR_15 = VAR_13->oss.subdivision;
  VAR_9 /= VAR_15;
  if (VAR_9 < 16)
   VAR_9 = 16;
 }

 VAR_11 = FUNC_9(VAR_4,
         FUNC_8(VAR_6, VAR_3, ((void*)0)));
 VAR_11 *= VAR_14;
 VAR_11 = FUNC_5(VAR_11);
 if (VAR_9 < VAR_11)
  VAR_9 = VAR_11;

 VAR_12 = FUNC_9(VAR_4,
         FUNC_7(VAR_6, VAR_3, ((void*)0)));
 VAR_12 *= VAR_14;
 VAR_12 = FUNC_4(VAR_12);
 if (VAR_9 > VAR_12)
  VAR_9 = VAR_12;

 VAR_10 = VAR_8 / VAR_9;

 if (VAR_4->oss.setup.periods > 1)
  VAR_10 = VAR_4->oss.setup.periods;

 VAR_7 = FUNC_7(VAR_6, VAR_2, ((void*)0));
 if (VAR_13->oss.maxfrags && VAR_7 > VAR_13->oss.maxfrags)
  VAR_7 = VAR_13->oss.maxfrags;
 if (VAR_10 > VAR_7)
  VAR_10 = VAR_7;

 VAR_7 = FUNC_8(VAR_6, VAR_2, ((void*)0));
 if (VAR_7 < 2)
  VAR_7 = 2;
 if (VAR_10 < VAR_7)
  VAR_10 = VAR_7;

 while (VAR_9 * VAR_10 > VAR_8)
  VAR_9 /= 2;

 if (VAR_9 < 16)
  return -VAR_0;
 VAR_13->oss.period_bytes = VAR_9;
 VAR_13->oss.period_frames = 1;
 VAR_13->oss.periods = VAR_10;
 return 0;
}
