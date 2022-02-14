
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mfg; scalar_t__ afg; } ;
struct hda_codec {int init_pins; TYPE_1__ core; int wcaps; } ;
typedef scalar_t__ hda_nid_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;

int FUNC_5(struct hda_codec *VAR_0)
{
 hda_nid_t VAR_1;
 int VAR_2;

 VAR_2 = FUNC_4(&VAR_0->core);
 if (VAR_2 < 0)
  return VAR_2;




 FUNC_0(VAR_0->wcaps);
 VAR_1 = VAR_0->core.afg ? VAR_0->core.afg : VAR_0->core.mfg;
 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (VAR_2 < 0)
  return VAR_2;

 FUNC_3(&VAR_0->init_pins);
 VAR_2 = FUNC_1(VAR_0);

 return VAR_2;
}
