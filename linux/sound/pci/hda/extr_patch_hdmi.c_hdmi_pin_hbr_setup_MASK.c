
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
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct hda_codec*,char*,int ,char*,int) ;
 int FUNC_1 (struct hda_codec*,int ,int ,int ,int ) ;
 int FUNC_2 (struct hda_codec*,int ,int ,int ,int) ;
 int FUNC_3 (struct hda_codec*,int ) ;

__attribute__((used)) static int FUNC_4(struct hda_codec *VAR_7, hda_nid_t VAR_8,
         bool VAR_9)
{
 int VAR_10, VAR_11;

 if (FUNC_3(VAR_7, VAR_8) & VAR_0) {
  VAR_10 = FUNC_1(VAR_7, VAR_8, 0,
         VAR_4, 0);

  if (VAR_10 < 0)
   return VAR_9 ? -VAR_6 : 0;

  VAR_11 = VAR_10 & ~VAR_1;
  if (VAR_9)
   VAR_11 |= VAR_2;
  else
   VAR_11 |= VAR_3;

  FUNC_0(VAR_7,
     "hdmi_pin_hbr_setup: NID=0x%x, %spinctl=0x%x\n",
       VAR_8,
       VAR_10 == VAR_11 ? "" : "new-",
       VAR_11);

  if (VAR_10 != VAR_11)
   FUNC_2(VAR_7, VAR_8, 0,
         VAR_5,
         VAR_11);
 } else if (VAR_9)
  return -VAR_6;

 return 0;
}
