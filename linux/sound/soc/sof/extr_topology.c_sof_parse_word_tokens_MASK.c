
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct sof_topology_token {scalar_t__ type; int token; size_t offset; int size; int (* get_token ) (struct snd_soc_tplg_vendor_value_elem*,void*,size_t,int ) ;} ;
struct sof_ipc_dai_dmic_pdm_ctrl {int dummy; } ;
struct snd_sof_dev {size_t* private; int dev; } ;
struct snd_soc_tplg_vendor_value_elem {int token; } ;
struct snd_soc_tplg_vendor_array {struct snd_soc_tplg_vendor_value_elem* value; int num_elems; } ;
struct snd_soc_component {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;







 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 struct snd_sof_dev* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_tplg_vendor_value_elem*,void*,size_t,int ) ;

__attribute__((used)) static void FUNC_4(struct snd_soc_component *VAR_4,
      void *VAR_5,
      const struct sof_topology_token *VAR_6,
      int VAR_7,
      struct snd_soc_tplg_vendor_array *VAR_8)
{
 struct snd_sof_dev *VAR_9 = FUNC_2(VAR_4);
 struct snd_soc_tplg_vendor_value_elem *VAR_10;
 size_t VAR_11 = sizeof(struct sof_ipc_dai_dmic_pdm_ctrl);
 int VAR_12, VAR_13;
 u32 VAR_14;
 u32 *VAR_15 = ((void*)0);


 for (VAR_12 = 0; VAR_12 < FUNC_1(VAR_8->num_elems); VAR_12++) {
  VAR_10 = &VAR_8->value[VAR_12];


  for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++) {

   if (!(VAR_6[VAR_13].type == VAR_3 ||
         VAR_6[VAR_13].type == VAR_2 ||
         VAR_6[VAR_13].type == VAR_1 ||
         VAR_6[VAR_13].type == VAR_0))
    continue;


   if (VAR_6[VAR_13].token != FUNC_1(VAR_10->token))
    continue;


   if (VAR_9->private)
    VAR_15 = VAR_9->private;


   switch (VAR_6[VAR_13].token) {
   case 133:


    if (VAR_15)
     (*VAR_15)++;

   case 132:
   case 131:
   case 130:
   case 129:
   case 134:
   case 128:


    if (!VAR_15 || *VAR_15 == 0) {
     FUNC_0(VAR_9->dev,
      "error: invalid array offset\n");
     continue;
    } else {

     VAR_14 = VAR_11 * (*VAR_15 - 1);
    }
    break;
   default:
    VAR_14 = 0;
    break;
   }


   VAR_6[VAR_13].get_token(VAR_10, VAR_5,
         VAR_14 + VAR_6[VAR_13].offset,
         VAR_6[VAR_13].size);
  }
 }
}
