
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_nid_item {int kctl; } ;
struct TYPE_2__ {int used; struct hda_nid_item* list; } ;
struct hda_codec {TYPE_1__ nids; TYPE_1__ mixers; int card; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(struct hda_codec *VAR_0)
{
 int VAR_1;
 struct hda_nid_item *VAR_2 = VAR_0->mixers.list;
 for (VAR_1 = 0; VAR_1 < VAR_0->mixers.used; VAR_1++)
  FUNC_1(VAR_0->card, VAR_2[VAR_1].kctl);
 FUNC_0(&VAR_0->mixers);
 FUNC_0(&VAR_0->nids);
}
