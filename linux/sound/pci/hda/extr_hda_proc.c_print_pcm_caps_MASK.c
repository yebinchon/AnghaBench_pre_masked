
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_buffer {int dummy; } ;
struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct hda_codec*,int ,int ) ;
 int FUNC_1 (struct snd_info_buffer*,unsigned int) ;
 int FUNC_2 (struct snd_info_buffer*,unsigned int) ;
 int FUNC_3 (struct snd_info_buffer*,unsigned int) ;
 int FUNC_4 (struct snd_info_buffer*,char*) ;

__attribute__((used)) static void FUNC_5(struct snd_info_buffer *VAR_2,
      struct hda_codec *VAR_3, hda_nid_t VAR_4)
{
 unsigned int VAR_5 = FUNC_0(VAR_3, VAR_4, VAR_0);
 unsigned int VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_1);
 if (VAR_5 == -1 || VAR_6 == -1) {
  FUNC_4(VAR_2, "N/A\n");
  return;
 }
 FUNC_3(VAR_2, VAR_5);
 FUNC_1(VAR_2, VAR_5);
 FUNC_2(VAR_2, VAR_6);
}
