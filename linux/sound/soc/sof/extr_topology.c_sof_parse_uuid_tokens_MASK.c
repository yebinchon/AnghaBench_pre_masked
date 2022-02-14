
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sof_topology_token {scalar_t__ type; scalar_t__ token; int size; int offset; int (* get_token ) (struct snd_soc_tplg_vendor_uuid_elem*,void*,int ,int ) ;} ;
struct snd_soc_tplg_vendor_uuid_elem {int token; } ;
struct snd_soc_tplg_vendor_array {struct snd_soc_tplg_vendor_uuid_elem* uuid; int num_elems; } ;
struct snd_soc_component {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct snd_soc_tplg_vendor_uuid_elem*,void*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct snd_soc_component *VAR_1,
      void *VAR_2,
      const struct sof_topology_token *VAR_3,
      int VAR_4,
      struct snd_soc_tplg_vendor_array *VAR_5)
{
 struct snd_soc_tplg_vendor_uuid_elem *VAR_6;
 int VAR_7, VAR_8;


 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_5->num_elems); VAR_7++) {
  VAR_6 = &VAR_5->uuid[VAR_7];


  for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {

   if (VAR_3[VAR_8].type != VAR_0)
    continue;


   if (VAR_3[VAR_8].token != FUNC_0(VAR_6->token))
    continue;


   VAR_3[VAR_8].get_token(VAR_6, VAR_2, VAR_3[VAR_8].offset,
         VAR_3[VAR_8].size);
  }
 }
}
