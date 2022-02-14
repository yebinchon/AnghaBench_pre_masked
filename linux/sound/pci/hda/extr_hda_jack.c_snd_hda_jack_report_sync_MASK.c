
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_jack_tbl {int button_state; int type; int jack; int pin_sense; scalar_t__ block_report; scalar_t__ nid; } ;
struct TYPE_2__ {int used; struct hda_jack_tbl* list; } ;
struct hda_codec {TYPE_1__ jacktbl; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct hda_codec*,struct hda_jack_tbl*) ;
 int FUNC_2 (int ,int) ;

void FUNC_3(struct hda_codec *VAR_0)
{
 struct hda_jack_tbl *VAR_1;
 int VAR_2, VAR_3;


 VAR_1 = VAR_0->jacktbl.list;
 for (VAR_2 = 0; VAR_2 < VAR_0->jacktbl.used; VAR_2++, VAR_1++)
  if (VAR_1->nid)
   FUNC_1(VAR_0, VAR_1);




 VAR_1 = VAR_0->jacktbl.list;
 for (VAR_2 = 0; VAR_2 < VAR_0->jacktbl.used; VAR_2++, VAR_1++)
  if (VAR_1->nid) {
   if (!VAR_1->jack || VAR_1->block_report)
    continue;
   VAR_3 = VAR_1->button_state;
   if (FUNC_0(VAR_1->pin_sense))
    VAR_3 |= VAR_1->type;
   FUNC_2(VAR_1->jack, VAR_3);
   if (VAR_1->button_state) {
    FUNC_2(VAR_1->jack,
      VAR_3 & ~VAR_1->button_state);
    VAR_1->button_state = 0;
   }
  }
}
