
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_buffer {int dummy; } ;
struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hda_codec*,int ,int ,int ,int ) ;
 int FUNC_1 (struct snd_info_buffer*,char*,int,int) ;

__attribute__((used)) static void FUNC_2(struct snd_info_buffer *VAR_3,
         struct hda_codec *VAR_4, hda_nid_t VAR_5)
{
 int VAR_6 = FUNC_0(VAR_4, VAR_5, 0,
           VAR_2, 0);
 FUNC_1(VAR_3,
      "  Unsolicited: tag=%02x, enabled=%d\n",
      VAR_6 & VAR_1,
      (VAR_6 & VAR_0) ? 1 : 0);
}
