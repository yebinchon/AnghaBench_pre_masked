
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_gen_spec {int power_down_unused; } ;
struct TYPE_2__ {scalar_t__ afg; } ;
struct hda_codec {TYPE_1__ core; int power_save_node; struct hda_gen_spec* spec; } ;
typedef scalar_t__ hda_nid_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct hda_codec*,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct hda_codec*,scalar_t__) ;

unsigned int FUNC_3(struct hda_codec *VAR_3,
        hda_nid_t VAR_4,
        unsigned int VAR_5)
{
 struct hda_gen_spec *VAR_6 = VAR_3->spec;

 if (!VAR_6->power_down_unused && !VAR_3->power_save_node)
  return VAR_5;
 if (VAR_5 != VAR_0 || VAR_4 == VAR_3->core.afg)
  return VAR_5;
 if (FUNC_1(FUNC_0(VAR_3, VAR_4)) >= VAR_2)
  return VAR_5;
 if (FUNC_2(VAR_3, VAR_4))
  return VAR_5;
 return VAR_1;
}
