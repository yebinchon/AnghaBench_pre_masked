
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_info_buffer {int dummy; } ;
struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hda_codec*,int ,int ,int ,int ) ;
 int FUNC_1 (struct hda_codec*,int ,int*,int) ;
 int FUNC_2 (struct snd_info_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_3(struct snd_info_buffer *VAR_5,
       struct hda_codec *VAR_6, hda_nid_t VAR_7)
{
 int VAR_8, VAR_9 = -1;
 u8 VAR_10[VAR_3];
 int VAR_11;

 VAR_11 = FUNC_1(VAR_6, VAR_7, VAR_10,
     VAR_3);
 FUNC_2(VAR_5, "  Devices: %d\n", VAR_11);
 if (VAR_11 <= 0)
  return;

 VAR_9 = FUNC_0(VAR_6, VAR_7, 0,
    VAR_4, 0);

 for (VAR_8 = 0; VAR_8 < VAR_11; VAR_8++) {
  if (VAR_8 == VAR_9)
   FUNC_2(VAR_5, "    *");
  else
   FUNC_2(VAR_5, "     ");

  FUNC_2(VAR_5,
   "Dev %02d: PD = %d, ELDV = %d, IA = %d\n", VAR_8,
   !!(VAR_10[VAR_8] & VAR_2),
   !!(VAR_10[VAR_8] & VAR_0),
   !!(VAR_10[VAR_8] & VAR_1));
 }
}
