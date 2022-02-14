
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {scalar_t__ power_save_node; } ;
typedef int hda_nid_t ;


 int FUNC_0 (struct hda_codec*,int ,int,int) ;

void FUNC_1(struct hda_codec *VAR_0, hda_nid_t VAR_1, bool VAR_2)
{
 if (VAR_0->power_save_node)
  FUNC_0(VAR_0, VAR_1, -1, VAR_2);
}
