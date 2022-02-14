
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_jack_tbl {int jack_dirty; scalar_t__ nid; } ;
struct TYPE_2__ {int used; struct hda_jack_tbl* list; } ;
struct hda_codec {TYPE_1__ jacktbl; } ;



void FUNC_0(struct hda_codec *VAR_0)
{
 struct hda_jack_tbl *VAR_1 = VAR_0->jacktbl.list;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->jacktbl.used; VAR_2++, VAR_1++)
  if (VAR_1->nid)
   VAR_1->jack_dirty = 1;
}
