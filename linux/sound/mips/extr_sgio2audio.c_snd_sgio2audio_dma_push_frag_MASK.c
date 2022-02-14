
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u64 ;
struct snd_sgio2audio {TYPE_5__* channel; scalar_t__ ring_base; } ;
struct snd_pcm_runtime {unsigned char* dma_area; scalar_t__ period_size; int buffer_size; } ;
typedef int s64 ;
typedef int s16 ;
struct TYPE_9__ {TYPE_2__* chan; } ;
struct TYPE_10__ {TYPE_3__ audio; } ;
struct TYPE_12__ {TYPE_4__ perif; } ;
struct TYPE_11__ {int pos; int lock; scalar_t__ size; TYPE_1__* substream; } ;
struct TYPE_8__ {int write_ptr; } ;
struct TYPE_7__ {struct snd_pcm_runtime* runtime; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct snd_pcm_runtime*,int ) ;
 TYPE_6__* VAR_4 ;
 unsigned long FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (unsigned long,int *) ;

__attribute__((used)) static int FUNC_5(struct snd_sgio2audio *VAR_5,
     unsigned int VAR_6, unsigned int VAR_7)
{
 int VAR_8;
 s64 VAR_9, VAR_10;
 unsigned long VAR_11, VAR_12, VAR_13;
 unsigned char *VAR_14;
 int VAR_15;
 u64 *VAR_16;
 s16 *VAR_17;
 unsigned long VAR_18;
 struct snd_pcm_runtime *VAR_19 = VAR_5->channel[VAR_6].substream->runtime;

 FUNC_2(&VAR_5->channel[VAR_6].lock, VAR_18);

 VAR_11 = (unsigned long)VAR_5->ring_base | (VAR_6 << VAR_3);
 VAR_12 = FUNC_1(&VAR_4->perif.audio.chan[VAR_6].write_ptr);
 VAR_14 = VAR_19->dma_area;
 VAR_15 = VAR_5->channel[VAR_6].pos;
 VAR_13 = FUNC_0(VAR_19, VAR_19->buffer_size) - 1;


 VAR_5->channel[VAR_6].size += (VAR_7 >> 3);
 VAR_8 = VAR_5->channel[VAR_6].size >= VAR_19->period_size;
 VAR_5->channel[VAR_6].size %= VAR_19->period_size;

 while (VAR_7) {
  VAR_17 = (s16 *)(VAR_14 + VAR_15);
  VAR_16 = (u64 *)(VAR_11 + VAR_12);

  VAR_9 = VAR_17[0];
  VAR_10 = VAR_17[1];

  *VAR_16 = ((VAR_9 & 0x00ffffff) << VAR_0) |
   ((VAR_10 & 0x00ffffff) << VAR_1);

  VAR_12 = (VAR_12 + sizeof(u64)) & VAR_2;
  VAR_15 = (VAR_15 + 2 * sizeof(s16)) & VAR_13;
  VAR_7 -= sizeof(u64);
 }

 FUNC_4(VAR_12, &VAR_4->perif.audio.chan[VAR_6].write_ptr);
 VAR_5->channel[VAR_6].pos = VAR_15;

 FUNC_3(&VAR_5->channel[VAR_6].lock, VAR_18);
 return VAR_8;
}
