
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_codec*,int ,int ,int ,int) ;
 scalar_t__ FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct hda_codec *VAR_2, hda_nid_t VAR_3,
    hda_nid_t VAR_4, u32 VAR_5, int VAR_6)
{

 if (FUNC_1(VAR_2)) {
  int VAR_7 = 180;

  if (VAR_6 & VAR_0)
   VAR_7 = 0;

  FUNC_2(VAR_2, VAR_3, 0, VAR_1, VAR_7);
 }

 return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
