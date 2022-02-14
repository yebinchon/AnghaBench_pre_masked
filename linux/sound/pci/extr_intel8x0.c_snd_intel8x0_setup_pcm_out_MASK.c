
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_runtime {int rate; int channels; int sample_bits; } ;
struct intel8x0 {int device_type; int reg_lock; } ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int FUNC_0 (int ) ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int FUNC_1 (struct intel8x0*,int ) ;
 int FUNC_2 (struct intel8x0*,int ,unsigned int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct intel8x0 *VAR_15,
           struct snd_pcm_runtime *VAR_16)
{
 unsigned int VAR_17;
 int VAR_18 = VAR_16->rate > 48000;

 FUNC_4(&VAR_15->reg_lock);
 switch (VAR_15->device_type) {
 case 129:
  VAR_17 = FUNC_1(VAR_15, FUNC_0(VAR_0));
  VAR_17 &= ~VAR_4;
  if (VAR_16->channels == 4 || VAR_18)
   VAR_17 |= VAR_5;
  else if (VAR_16->channels == 6)
   VAR_17 |= VAR_6;
  FUNC_2(VAR_15, FUNC_0(VAR_0), VAR_17);
  break;
 case 128:
  VAR_17 = FUNC_1(VAR_15, FUNC_0(VAR_3));
  VAR_17 &= ~VAR_12;
  if (VAR_16->channels == 4 || VAR_18)
   VAR_17 |= VAR_13;
  else if (VAR_16->channels == 6)
   VAR_17 |= VAR_14;
  FUNC_2(VAR_15, FUNC_0(VAR_3), VAR_17);
  break;
 default:
  VAR_17 = FUNC_1(VAR_15, FUNC_0(VAR_3));
  VAR_17 &= ~(VAR_8 | VAR_7);
  if (VAR_16->channels == 4 || VAR_18)
   VAR_17 |= VAR_9;
  else if (VAR_16->channels == 6)
   VAR_17 |= VAR_10;
  else if (VAR_16->channels == 8)
   VAR_17 |= VAR_11;
  if (VAR_15->device_type == VAR_2) {



   if (VAR_17 & VAR_8) {
    FUNC_2(VAR_15, FUNC_0(VAR_3), VAR_17 & ~VAR_8);
    FUNC_5(&VAR_15->reg_lock);
    FUNC_3(50);
    FUNC_4(&VAR_15->reg_lock);
   }
  } else if (VAR_15->device_type == VAR_1) {
   if (VAR_16->sample_bits > 16)
    VAR_17 |= VAR_7;
  }
  FUNC_2(VAR_15, FUNC_0(VAR_3), VAR_17);
  break;
 }
 FUNC_5(&VAR_15->reg_lock);
}
