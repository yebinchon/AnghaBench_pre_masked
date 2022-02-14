
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
 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (struct hda_codec*,int ) ;

__attribute__((used)) static int FUNC_2(struct hda_codec *VAR_5, hda_nid_t VAR_6)
{
 unsigned int VAR_7 = FUNC_1(VAR_5, VAR_6);
 switch (FUNC_0(VAR_7)) {
 case 131:
 case 128:
  return VAR_3;
 case 132:
  return VAR_1;
 case 129:
 case 133:
  return VAR_0;
 case 130:
  return VAR_4;
 default:
  return VAR_2;
 }
}
