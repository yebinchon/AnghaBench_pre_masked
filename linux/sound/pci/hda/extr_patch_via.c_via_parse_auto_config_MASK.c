
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ power_down_unused; int autocfg; int * extra_out_badness; int * main_out_badness; } ;
struct via_spec {TYPE_1__ gen; } ;
struct hda_codec {scalar_t__ power_save_node; struct via_spec* spec; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (TYPE_1__*,int *,int *) ;
 int FUNC_2 (struct hda_codec*,int *) ;
 int FUNC_3 (struct hda_codec*,int *,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct hda_codec *VAR_4)
{
 struct via_spec *VAR_5 = VAR_4->spec;
 int VAR_6;

 VAR_5->gen.main_out_badness = &VAR_2;
 VAR_5->gen.extra_out_badness = &VAR_1;

 VAR_6 = FUNC_3(VAR_4, &VAR_5->gen.autocfg, ((void*)0), 0);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_2(VAR_4, &VAR_5->gen.autocfg);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_4);
 if (VAR_6 < 0)
  return VAR_6;

 if (!FUNC_1(&VAR_5->gen, ((void*)0), &VAR_3))
  return -VAR_0;


 VAR_4->power_save_node = 0;
 VAR_5->gen.power_down_unused = 0;
 return 0;
}
