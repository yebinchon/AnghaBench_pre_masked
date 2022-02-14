
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ client; } ;
struct snd_seq_port_subscribe {TYPE_2__ sender; } ;
struct snd_opl3 {int drum_reg; int synth_mode; int (* command ) (struct snd_opl3*,int,int) ;TYPE_1__* voices; } ;
struct TYPE_3__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct snd_opl3*) ;
 int FUNC_1 (struct snd_opl3*) ;
 int FUNC_2 (struct snd_opl3*) ;
 int FUNC_3 (struct snd_opl3*,int,int) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static int FUNC_4(void *VAR_7, struct snd_seq_port_subscribe * VAR_8)
{
 struct snd_opl3 *VAR_9 = VAR_7;
 int VAR_10;

 if ((VAR_10 = FUNC_1(VAR_9)) < 0)
  return VAR_10;

 if (VAR_6) {

  VAR_9->voices[6].state = VAR_9->voices[7].state =
   VAR_9->voices[8].state = VAR_4;
  FUNC_0(VAR_9);
  VAR_9->drum_reg = VAR_1;
  VAR_9->command(VAR_9, VAR_0 | VAR_2, VAR_9->drum_reg);
 } else {
  VAR_9->drum_reg = 0x00;
 }

 if (VAR_8->sender.client != VAR_5) {
  if ((VAR_10 = FUNC_2(VAR_9)) < 0)
   return VAR_10;
 }
 VAR_9->synth_mode = VAR_3;
 return 0;
}
