
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_buffer {int dummy; } ;
struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int FUNC_0 (struct hda_codec*,int ,int ) ;
 int FUNC_1 (struct snd_info_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_2(struct snd_info_buffer *VAR_10,
      struct hda_codec *VAR_11, hda_nid_t VAR_12, int VAR_13)
{
 unsigned int VAR_14;
 VAR_14 = FUNC_0(VAR_11, VAR_12, VAR_13 == VAR_9 ?
     VAR_8 : VAR_7);
 if (VAR_14 == -1 || VAR_14 == 0) {
  FUNC_1(VAR_10, "N/A\n");
  return;
 }
 FUNC_1(VAR_10, "ofs=0x%02x, nsteps=0x%02x, stepsize=0x%02x, "
      "mute=%x\n",
      VAR_14 & VAR_4,
      (VAR_14 & VAR_2) >> VAR_3,
      (VAR_14 & VAR_5) >> VAR_6,
      (VAR_14 & VAR_0) >> VAR_1);
}
