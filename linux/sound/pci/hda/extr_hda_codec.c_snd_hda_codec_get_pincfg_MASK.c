
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_pincfg {unsigned int cfg; } ;
struct hda_codec {int init_pins; int driver_pins; int user_mutex; int user_pins; } ;
typedef int hda_nid_t ;


 struct hda_pincfg* FUNC_0 (struct hda_codec*,int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

unsigned int FUNC_3(struct hda_codec *VAR_0, hda_nid_t VAR_1)
{
 struct hda_pincfg *VAR_2;
 VAR_2 = FUNC_0(VAR_0, &VAR_0->driver_pins, VAR_1);
 if (VAR_2)
  return VAR_2->cfg;
 VAR_2 = FUNC_0(VAR_0, &VAR_0->init_pins, VAR_1);
 if (VAR_2)
  return VAR_2->cfg;
 return 0;
}
