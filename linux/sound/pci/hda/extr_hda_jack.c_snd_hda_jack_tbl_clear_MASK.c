
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hda_jack_tbl {struct hda_jack_callback* callback; scalar_t__ jack; } ;
struct hda_jack_callback {struct hda_jack_callback* next; } ;
struct TYPE_4__ {int used; struct hda_jack_tbl* list; } ;
struct hda_codec {TYPE_2__ jacktbl; int card; TYPE_1__* bus; } ;
struct TYPE_3__ {int shutdown; } ;


 int FUNC_0 (struct hda_jack_callback*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,scalar_t__) ;

void FUNC_3(struct hda_codec *VAR_0)
{
 struct hda_jack_tbl *VAR_1 = VAR_0->jacktbl.list;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->jacktbl.used; VAR_2++, VAR_1++) {
  struct hda_jack_callback *VAR_3, *VAR_4;


  if (!VAR_0->bus->shutdown && VAR_1->jack)
   FUNC_2(VAR_0->card, VAR_1->jack);

  for (VAR_3 = VAR_1->callback; VAR_3; VAR_3 = VAR_4) {
   VAR_4 = VAR_3->next;
   FUNC_0(VAR_3);
  }
 }
 FUNC_1(&VAR_0->jacktbl);
}
