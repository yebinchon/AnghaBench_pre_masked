
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
 int FUNC_0 (struct hda_codec*,char*,int ,char*,int) ;
 int FUNC_1 (struct hda_codec*,int ,int ,int ,int ) ;
 int FUNC_2 (struct hda_codec*,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct hda_codec *VAR_5, hda_nid_t VAR_6,
     bool VAR_7)
{
 int VAR_8, VAR_9;

 VAR_8 = FUNC_1(VAR_5, VAR_6, 0, VAR_2, 0);
 if (VAR_8 >= 0 && (VAR_8 & VAR_0)) {
  if (VAR_7)
   VAR_9 = VAR_8 | VAR_1;
  else
   VAR_9 = VAR_8 & ~VAR_1;

  FUNC_0(VAR_5,
     "atihdmi_pin_hbr_setup: NID=0x%x, %shbr-ctl=0x%x\n",
    VAR_6,
    VAR_8 == VAR_9 ? "" : "new-",
    VAR_9);

  if (VAR_8 != VAR_9)
   FUNC_2(VAR_5, VAR_6, 0,
      VAR_3,
      VAR_9);

 } else if (VAR_7)
  return -VAR_4;

 return 0;
}
