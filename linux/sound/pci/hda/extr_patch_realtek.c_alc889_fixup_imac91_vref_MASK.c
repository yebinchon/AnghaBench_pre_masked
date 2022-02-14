
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_fixup {int dummy; } ;
struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int FUNC_1 (struct hda_codec*,int*,int ) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_1,
         const struct hda_fixup *VAR_2, int VAR_3)
{
 static hda_nid_t VAR_4[2] = { 0x18, 0x1a };

 if (VAR_3 == VAR_0)
  FUNC_1(VAR_1, VAR_4, FUNC_0(VAR_4));
}
