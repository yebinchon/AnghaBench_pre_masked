
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ running; } ;
struct TYPE_4__ {scalar_t__ running; } ;
struct snd_pmac {int* freq_table; int reg_lock; TYPE_1__ capture; TYPE_2__ playback; struct pmac_beep* beep; } ;
struct pmac_beep {int running; int hz; short volume; short volume_play; int nsamples; short* buf; int addr; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;


 short* VAR_3 ;
 struct snd_pmac* FUNC_0 (struct input_dev*) ;
 int FUNC_1 (struct snd_pmac*,int,int ,int) ;
 int FUNC_2 (struct snd_pmac*) ;
 int FUNC_3 (struct snd_pmac*,TYPE_2__*,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct input_dev *VAR_4, unsigned int VAR_5,
          unsigned int VAR_6, int VAR_7)
{
 struct snd_pmac *VAR_8;
 struct pmac_beep *VAR_9;
 unsigned long VAR_10;
 int VAR_11 = 0;
 int VAR_12;
 int VAR_13, VAR_14, VAR_15;
 int VAR_16, VAR_17, VAR_18;
 short *VAR_19;

 if (VAR_5 != VAR_2)
  return -1;

 switch (VAR_6) {
 case 129: if (VAR_7) VAR_7 = 1000;
 case 128: break;
 default: return -1;
 }

 VAR_8 = FUNC_0(VAR_4);
 if (! VAR_8 || (VAR_9 = VAR_8->beep) == ((void*)0))
  return -1;

 if (! VAR_7) {
  FUNC_4(&VAR_8->reg_lock, VAR_10);
  if (VAR_9->running)
   FUNC_2(VAR_8);
  FUNC_5(&VAR_8->reg_lock, VAR_10);
  return 0;
 }

 VAR_11 = FUNC_3(VAR_8, &VAR_8->playback, VAR_1);
 VAR_12 = VAR_8->freq_table[VAR_11];

 if (VAR_7 <= VAR_12 / VAR_0 || VAR_7 > VAR_12 / 2)
  VAR_7 = 1000;

 FUNC_4(&VAR_8->reg_lock, VAR_10);
 if (VAR_8->playback.running || VAR_8->capture.running || VAR_9->running) {
  FUNC_5(&VAR_8->reg_lock, VAR_10);
  return 0;
 }
 VAR_9->running = 1;
 FUNC_5(&VAR_8->reg_lock, VAR_10);

 if (VAR_7 == VAR_9->hz && VAR_9->volume == VAR_9->volume_play) {
  VAR_15 = VAR_9->nsamples;
 } else {
  VAR_13 = VAR_12 * 256 / VAR_7;
  VAR_14 = VAR_0 * 256 / VAR_13;
  VAR_15 = (VAR_13 * VAR_14) >> 8;
  VAR_18 = VAR_14 * 65536 / VAR_15;
  VAR_17 = 0;
  VAR_19 = VAR_9->buf;
  for (VAR_16 = 0; VAR_16 < VAR_15; ++VAR_16, VAR_19 += 2) {
   VAR_19[0] = VAR_19[1] = VAR_3[VAR_17 >> 8] * VAR_9->volume;
   VAR_17 = (VAR_17 + VAR_18) & 0xffff;
  }
  VAR_9->hz = VAR_7;
  VAR_9->volume_play = VAR_9->volume;
  VAR_9->nsamples = VAR_15;
 }

 FUNC_4(&VAR_8->reg_lock, VAR_10);
 FUNC_1(VAR_8, VAR_9->nsamples * 4, VAR_9->addr, VAR_11);
 FUNC_5(&VAR_8->reg_lock, VAR_10);
 return 0;
}
