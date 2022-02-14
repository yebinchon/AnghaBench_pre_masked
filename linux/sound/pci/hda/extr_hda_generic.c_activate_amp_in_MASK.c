
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nid_path {scalar_t__* path; int* idx; } ;
struct hda_gen_spec {scalar_t__ const mixer_merge_nid; } ;
struct hda_codec {scalar_t__ single_adc_amp; struct hda_gen_spec* spec; } ;
typedef scalar_t__ hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hda_codec*,scalar_t__,int ,int,int,int) ;
 int FUNC_1 (struct hda_codec*,scalar_t__,int ,int,int,int) ;
 int FUNC_2 (struct hda_codec*,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct hda_codec*,scalar_t__,int ,int) ;
 int FUNC_5 (struct hda_codec*,scalar_t__,scalar_t__ const**) ;

__attribute__((used)) static void FUNC_6(struct hda_codec *VAR_3, struct nid_path *VAR_4,
       int VAR_5, bool VAR_6, bool VAR_7)
{
 struct hda_gen_spec *VAR_8 = VAR_3->spec;
 const hda_nid_t *VAR_9;
 int VAR_10, VAR_11, VAR_12;
 int VAR_13;
 hda_nid_t VAR_14 = VAR_4->path[VAR_5];

 VAR_11 = FUNC_5(VAR_3, VAR_14, &VAR_9);
 if (VAR_11 < 0)
  return;
 VAR_13 = FUNC_3(FUNC_2(VAR_3, VAR_14));
 if (VAR_13 == VAR_1 ||
     (VAR_13 == VAR_0 && VAR_3->single_adc_amp)) {
  VAR_11 = 1;
  VAR_12 = 0;
 } else
  VAR_12 = VAR_4->idx[VAR_5];

 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++)
  FUNC_4(VAR_3, VAR_14, VAR_2, VAR_10);




 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
  if (VAR_10 != VAR_12) {
   if (VAR_9[VAR_10] != VAR_8->mixer_merge_nid)
    continue;

   if (!VAR_7) {
    FUNC_0(VAR_3, VAR_14, VAR_2, VAR_10, VAR_10, 0);
    continue;
   }
  }
  FUNC_1(VAR_3, VAR_14, VAR_2, VAR_10, VAR_12, VAR_6);
 }
}
