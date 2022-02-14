
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_fixup {int dummy; } ;
struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,int,int,int*) ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_1,
     const struct hda_fixup *VAR_2, int VAR_3)
{
 if (VAR_3 == VAR_0) {







  hda_nid_t VAR_4[1] = { 0x0c };
  FUNC_0(VAR_1, 0x17, 1, VAR_4);
 }
}
