
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int member_0; } ;
typedef TYPE_1__ u32 ;
struct snd_rawmidi_substream {int dummy; } ;
struct snd_ff {int* on_sysex; int* rx_bytes; int ** msg_buf; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__) ;
 int FUNC_2 (struct snd_rawmidi_substream*,int*,int) ;

__attribute__((used)) static int FUNC_3(struct snd_ff *VAR_0,
    struct snd_rawmidi_substream *VAR_1,
    unsigned int VAR_2)
{
 u32 VAR_3 = {0};
 u8 *VAR_4 = (u8 *)&VAR_3;
 int VAR_5;

 VAR_4[0] = VAR_2 << 4;
 VAR_5 = FUNC_2(VAR_1, VAR_4 + 1, 3);
 if (VAR_5 <= 0)
  return VAR_5;

 if (!VAR_0->on_sysex[VAR_2]) {
  if (VAR_4[1] != 0xf0) {
   if (VAR_5 < FUNC_0(VAR_4[1]))
    return 0;
  } else {

   VAR_0->on_sysex[VAR_2] = 1;
  }

  VAR_4[0] |= VAR_5;
 } else {
  if (VAR_4[1] != 0xf7) {
   if (VAR_4[2] == 0xf7 || VAR_4[3] == 0xf7) {

    VAR_5 -= 1;
   }

   VAR_4[0] |= VAR_5;
  } else {

   VAR_0->on_sysex[VAR_2] = 0;
   VAR_5 = 1;
   VAR_4[0] |= 0x0f;
  }
 }

 VAR_0->msg_buf[VAR_2][0] = FUNC_1(VAR_3);
 VAR_0->rx_bytes[VAR_2] = VAR_5;

 return 1;
}
