
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_rawmidi_substream {int dummy; } ;
struct fw_scs1x {int input_escape_count; } ;
typedef int eox ;


 int FUNC_0 (int*) ;
 int FUNC_1 (struct snd_rawmidi_substream*,int) ;
 int FUNC_2 (struct snd_rawmidi_substream*,int const*,int) ;
 int* VAR_0 ;

__attribute__((used)) static void FUNC_3(struct fw_scs1x *VAR_1,
       struct snd_rawmidi_substream *VAR_2, u8 VAR_3)
{
 const u8 VAR_4 = 0xf7;

 if (VAR_1->input_escape_count > 0) {
  FUNC_1(VAR_2, VAR_3);
  VAR_1->input_escape_count--;
  if (VAR_1->input_escape_count == 0)
   FUNC_2(VAR_2, &VAR_4, sizeof(VAR_4));
 } else if (VAR_3 == 0xf9) {
  FUNC_2(VAR_2, VAR_0,
        FUNC_0(VAR_0));
  FUNC_1(VAR_2, 0x00);
  FUNC_1(VAR_2, 0xf9);
  VAR_1->input_escape_count = 3;
 } else {
  FUNC_2(VAR_2, &VAR_3, 1);
 }
}
