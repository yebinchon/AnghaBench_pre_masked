
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {scalar_t__ const* slave_dig_outs; } ;
typedef scalar_t__ const hda_nid_t ;


 int FUNC_0 (struct hda_codec*,scalar_t__ const) ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_0, hda_nid_t VAR_1)
{
 FUNC_0(VAR_0, VAR_1);
 if (VAR_0->slave_dig_outs) {
  const hda_nid_t *VAR_2;
  for (VAR_2 = VAR_0->slave_dig_outs; *VAR_2; VAR_2++)
   FUNC_0(VAR_0, *VAR_2);
 }
}
