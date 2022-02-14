
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_rawmidi_substream {int dummy; } ;
struct fw_scs1x {int dummy; } ;
typedef int eox ;


 int FUNC_0 (int const*) ;
 int const VAR_0 ;
 int FUNC_1 (struct fw_scs1x*,struct snd_rawmidi_substream*,int const) ;
 int FUNC_2 (struct snd_rawmidi_substream*,int const) ;
 int FUNC_3 (struct snd_rawmidi_substream*,int const*,int) ;
 int const* VAR_1 ;

__attribute__((used)) static void FUNC_4(struct fw_scs1x *VAR_2,
         struct snd_rawmidi_substream *VAR_3,
         const u8 *VAR_4, unsigned int VAR_5)
{
 unsigned int VAR_6;
 const u8 VAR_7 = 0xf7;

 if (VAR_4[0] == VAR_0) {
  for (VAR_6 = 1; VAR_6 < VAR_5; ++VAR_6)
   FUNC_1(VAR_2, VAR_3, VAR_4[VAR_6]);
 } else {
  FUNC_3(VAR_3, VAR_1,
        FUNC_0(VAR_1));
  for (VAR_6 = 0; VAR_6 < VAR_5; ++VAR_6)
   FUNC_2(VAR_3, VAR_4[VAR_6]);
  FUNC_3(VAR_3, &VAR_7, sizeof(VAR_7));
 }
}
