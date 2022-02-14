
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_buffer {int dummy; } ;
struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct hda_codec*) ;
 unsigned int FUNC_1 (struct hda_codec*,int ,int ) ;
 unsigned int FUNC_2 (struct hda_codec*,int ,int ,int ,int ) ;
 int FUNC_3 (struct hda_codec*,int ,int ,int ,unsigned int) ;
 int FUNC_4 (struct snd_info_buffer*,char*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct snd_info_buffer *VAR_7,
       struct hda_codec *VAR_8, hda_nid_t VAR_9)
{
 unsigned int VAR_10, VAR_11, VAR_12;
 unsigned int VAR_13 = FUNC_1(VAR_8, VAR_9, VAR_0);
 VAR_11 = (VAR_13 & VAR_2) >> VAR_3;
 FUNC_4(VAR_7, "  Processing caps: benign=%d, ncoeff=%d\n",
      VAR_13 & VAR_1, VAR_11);

 if (!FUNC_0(VAR_8))
  return;



 VAR_12 = FUNC_2(VAR_8, VAR_9, 0, VAR_4, 0);
 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
  unsigned int VAR_14;
  FUNC_3(VAR_8, VAR_9, 0, VAR_6, VAR_10);
  VAR_14 = FUNC_2(VAR_8, VAR_9, 0, VAR_5,
      0);
  FUNC_4(VAR_7, "    Coeff 0x%02x: 0x%04x\n", VAR_10, VAR_14);
 }
 FUNC_3(VAR_8, VAR_9, 0, VAR_6, VAR_12);
}
