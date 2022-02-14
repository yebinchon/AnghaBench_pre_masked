
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct hda_spdif_out {scalar_t__ nid; } ;
struct TYPE_2__ {int used; } ;
struct hda_codec {int spdif_mutex; TYPE_1__ spdif_out; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct hda_spdif_out* FUNC_3 (TYPE_1__*,int) ;

void FUNC_4(struct hda_codec *VAR_0, int VAR_1)
{
 struct hda_spdif_out *VAR_2;

 if (FUNC_0(VAR_0->spdif_out.used <= VAR_1))
  return;
 FUNC_1(&VAR_0->spdif_mutex);
 VAR_2 = FUNC_3(&VAR_0->spdif_out, VAR_1);
 VAR_2->nid = (u16)-1;
 FUNC_2(&VAR_0->spdif_mutex);
}
