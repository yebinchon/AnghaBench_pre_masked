
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,int,int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_1)
{
 hda_nid_t VAR_2[7] = {0x0B, 0x0E, 0x0F, 0x10, 0x11, 0x12, 0x13};
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < 7; VAR_3++) {
  FUNC_0(VAR_1, VAR_2[VAR_3], 0,
    VAR_0, 0x00);
 }
}
