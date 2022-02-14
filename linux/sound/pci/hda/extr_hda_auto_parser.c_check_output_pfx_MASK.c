
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;




 unsigned int FUNC_0 (struct hda_codec*,int ) ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static const char *FUNC_2(struct hda_codec *VAR_0, hda_nid_t VAR_1)
{
 unsigned int VAR_2 = FUNC_0(VAR_0, VAR_1);
 int VAR_3 = FUNC_1(VAR_2);


 switch (VAR_3) {
 case 129:
  return "Dock ";
 case 128:
  return "Front ";
 }
 return "";
}
