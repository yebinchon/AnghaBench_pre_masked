
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hda_codec*,char*,int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct hda_codec*,int ,int ) ;
 int FUNC_3 (struct hda_codec*,int ,int ,int ,int ) ;
 int FUNC_4 (struct hda_codec*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct hda_codec *VAR_5,
  hda_nid_t VAR_6, hda_nid_t VAR_7)
{
 int VAR_8;




 if (!FUNC_2(VAR_5, VAR_6, VAR_2))
  FUNC_4(VAR_5, VAR_6, 0, VAR_4, VAR_2);

 if (!FUNC_2(VAR_5, VAR_7, VAR_2)) {
  FUNC_4(VAR_5, VAR_7, 0, VAR_4,
        VAR_2);
  FUNC_1(40);
  VAR_8 = FUNC_3(VAR_5, VAR_7, 0, VAR_3, 0);
  VAR_8 = (VAR_8 & VAR_0) >> VAR_1;
  FUNC_0(VAR_5, "Haswell HDMI audio: Power for pin 0x%x is now D%d\n", VAR_7, VAR_8);
 }
}
