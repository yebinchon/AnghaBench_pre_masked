
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nid_path {unsigned int* ctls; } ;
struct hda_input_mux {int num_items; TYPE_1__* items; } ;
struct auto_pin_cfg {TYPE_2__* inputs; } ;
struct hda_gen_spec {char** input_labels; int * input_label_idxs; int num_adc_nids; struct hda_input_mux input_mux; struct auto_pin_cfg autocfg; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;
typedef int boost_label ;
struct TYPE_4__ {scalar_t__ type; } ;
struct TYPE_3__ {int index; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hda_gen_spec*,int ,char*,int ,unsigned int) ;
 struct nid_path* FUNC_1 (struct hda_codec*,int ,int) ;
 unsigned int FUNC_2 (struct hda_codec*,struct nid_path*) ;
 int FUNC_3 (char*,int,char*,char*) ;

__attribute__((used)) static int FUNC_4(struct hda_codec *VAR_5)
{
 struct hda_gen_spec *VAR_6 = VAR_5->spec;
 struct auto_pin_cfg *VAR_7 = &VAR_6->autocfg;
 struct hda_input_mux *VAR_8 = &VAR_6->input_mux;
 int VAR_9;

 if (!VAR_6->num_adc_nids)
  return 0;

 for (VAR_9 = 0; VAR_9 < VAR_8->num_items; VAR_9++) {
  struct nid_path *VAR_10;
  unsigned int VAR_11;
  int VAR_12;
  char VAR_13[VAR_4];

  VAR_12 = VAR_8->items[VAR_9].index;
  if (VAR_12 >= VAR_8->num_items)
   continue;


  if (VAR_7->inputs[VAR_12].type > VAR_0)
   continue;

  VAR_10 = FUNC_1(VAR_5, 0, VAR_9);
  if (!VAR_10)
   continue;

  VAR_11 = FUNC_2(VAR_5, VAR_10);
  if (!VAR_11)
   continue;


  FUNC_3(VAR_13, sizeof(VAR_13),
    "%s Boost Volume", VAR_6->input_labels[VAR_12]);
  if (!FUNC_0(VAR_6, VAR_2, VAR_13,
     VAR_6->input_label_idxs[VAR_12], VAR_11))
   return -VAR_1;

  VAR_10->ctls[VAR_3] = VAR_11;
 }
 return 0;
}
