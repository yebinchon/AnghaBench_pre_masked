
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_spdif_out {scalar_t__ nid; unsigned short ctls; } ;
struct TYPE_2__ {int used; } ;
struct hda_codec {int spdif_mutex; TYPE_1__ spdif_out; } ;
typedef scalar_t__ hda_nid_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct hda_codec*,scalar_t__,unsigned short,unsigned short) ;
 struct hda_spdif_out* FUNC_4 (TYPE_1__*,int) ;

void FUNC_5(struct hda_codec *VAR_0, int VAR_1, hda_nid_t VAR_2)
{
 struct hda_spdif_out *VAR_3;
 unsigned short VAR_4;

 if (FUNC_0(VAR_0->spdif_out.used <= VAR_1))
  return;
 FUNC_1(&VAR_0->spdif_mutex);
 VAR_3 = FUNC_4(&VAR_0->spdif_out, VAR_1);
 if (VAR_3->nid != VAR_2) {
  VAR_3->nid = VAR_2;
  VAR_4 = VAR_3->ctls;
  FUNC_3(VAR_0, VAR_2, VAR_4 & 0xff, (VAR_4 >> 8) & 0xff);
 }
 FUNC_2(&VAR_0->spdif_mutex);
}
