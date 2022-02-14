
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sample_mode; int loopstart; } ;
struct snd_emux_voice {int state; scalar_t__ ch; scalar_t__ time; TYPE_1__ reg; } ;
struct snd_emux {int max_voices; struct snd_emux_voice* voices; } ;
struct snd_emu10k1 {int dummy; } ;
struct best_voice {unsigned int time; int voice; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct snd_emu10k1*,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct snd_emux *VAR_13, struct snd_emu10k1 *VAR_14,
       struct best_voice *VAR_15, int VAR_16)
{
 struct snd_emux_voice *VAR_17;
 struct best_voice *VAR_18;
 int VAR_19;

 for (VAR_19 = 0; VAR_19 < VAR_8; VAR_19++) {
  VAR_15[VAR_19].time = (unsigned int)-1;
  VAR_15[VAR_19].voice = -1;
 }





 for (VAR_19 = 0; VAR_19 < VAR_13->max_voices; VAR_19++) {
  int VAR_20, VAR_21;

  VAR_17 = &VAR_13->voices[VAR_19];
  VAR_20 = VAR_17->state;
  if (VAR_20 == VAR_2) {
   if (VAR_17->ch < 0) {
    if (VAR_16)
     continue;
    VAR_18 = VAR_15 + VAR_9;
   } else
    VAR_18 = VAR_15 + VAR_10;
  }
  else if (VAR_20 == VAR_5 ||
    VAR_20 == VAR_4) {
   VAR_18 = VAR_15 + VAR_12;

   VAR_21 = FUNC_0(VAR_14, VAR_1, VAR_17->ch);
   if (! VAR_21)
    VAR_18 = VAR_15 + VAR_10;

  }
  else if (VAR_20 == VAR_6)
   continue;
  else if (VAR_20 & VAR_3)
   VAR_18 = VAR_15 + VAR_11;
  else
   continue;


  if (VAR_18 != VAR_15 + VAR_10 && VAR_18 != VAR_15 + VAR_9 &&
      (VAR_17->reg.sample_mode & VAR_7)) {
   VAR_21 = FUNC_0(VAR_14, VAR_0, VAR_17->ch);
   if (VAR_21 >= VAR_17->reg.loopstart)
    VAR_18 = VAR_15 + VAR_10;
  }

  if (VAR_17->time < VAR_18->time) {
   VAR_18->time = VAR_17->time;
   VAR_18->voice = VAR_19;
  }
 }
}
