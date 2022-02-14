
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int index; int name; } ;
struct snd_kcontrol {TYPE_1__ id; } ;
struct hda_nid_item {unsigned int index; scalar_t__ nid; struct snd_kcontrol* kctl; } ;
struct hda_codec {int nids; } ;
typedef scalar_t__ hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_codec*,char*,int ,int ,unsigned int) ;
 struct hda_nid_item* FUNC_1 (int *) ;

int FUNC_2(struct hda_codec *VAR_2, struct snd_kcontrol *VAR_3,
      unsigned int VAR_4, hda_nid_t VAR_5)
{
 struct hda_nid_item *VAR_6;

 if (VAR_5 > 0) {
  VAR_6 = FUNC_1(&VAR_2->nids);
  if (!VAR_6)
   return -VAR_1;
  VAR_6->kctl = VAR_3;
  VAR_6->index = VAR_4;
  VAR_6->nid = VAR_5;
  return 0;
 }
 FUNC_0(VAR_2, "no NID for mapping control %s:%d:%d\n",
    VAR_3->id.name, VAR_3->id.index, VAR_4);
 return -VAR_0;
}
