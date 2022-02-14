
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int channel; int param; int value; } ;
struct TYPE_4__ {TYPE_1__ control; } ;
struct snd_seq_event {scalar_t__ type; TYPE_2__ data; } ;
struct snd_midi_event {unsigned char lastcmd; scalar_t__ nostat; } ;


 int VAR_0 ;
 int VAR_1 ;






 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_0(struct snd_midi_event *VAR_3, unsigned char *VAR_4,
        int VAR_5, struct snd_seq_event *VAR_6)
{
 unsigned char VAR_7;
 char *VAR_8;
 static char VAR_9[4] = { 130,
           131,
           132,
           133 };
 static char VAR_10[4] = { 128,
           129,
           132,
           133 };
 unsigned char VAR_11[4];
 int VAR_12 = 0, VAR_13;

 if (VAR_5 < 8)
  return -VAR_0;
 if (VAR_3->nostat && VAR_5 < 12)
  return -VAR_0;
 VAR_7 = VAR_1|(VAR_6->data.control.channel & 0x0f);
 VAR_11[0] = (VAR_6->data.control.param & 0x3f80) >> 7;
 VAR_11[1] = VAR_6->data.control.param & 0x007f;
 VAR_11[2] = (VAR_6->data.control.value & 0x3f80) >> 7;
 VAR_11[3] = VAR_6->data.control.value & 0x007f;
 if (VAR_7 != VAR_3->lastcmd && !VAR_3->nostat) {
  if (VAR_5 < 9)
   return -VAR_0;
  VAR_4[VAR_12++] = VAR_3->lastcmd = VAR_7;
 }
 VAR_8 = VAR_6->type == VAR_2 ? VAR_9 : VAR_10;
 for (VAR_13 = 0; VAR_13 < 4; VAR_13++) {
  if (VAR_3->nostat)
   VAR_4[VAR_12++] = VAR_3->lastcmd = VAR_7;
  VAR_4[VAR_12++] = VAR_8[VAR_13];
  VAR_4[VAR_12++] = VAR_11[VAR_13];
 }
 return VAR_12;
}
