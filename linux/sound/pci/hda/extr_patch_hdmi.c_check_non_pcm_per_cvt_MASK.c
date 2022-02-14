
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_spdif_out {int status; } ;
struct hda_codec {int spdif_mutex; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct hda_spdif_out* FUNC_3 (struct hda_codec*,int ) ;

__attribute__((used)) static bool FUNC_4(struct hda_codec *VAR_1, hda_nid_t VAR_2)
{
 struct hda_spdif_out *VAR_3;
 bool VAR_4;

 FUNC_1(&VAR_1->spdif_mutex);
 VAR_3 = FUNC_3(VAR_1, VAR_2);



 if (FUNC_0(VAR_3 == ((void*)0)))
  return 1;
 VAR_4 = !!(VAR_3->status & VAR_0);
 FUNC_2(&VAR_1->spdif_mutex);
 return VAR_4;
}
