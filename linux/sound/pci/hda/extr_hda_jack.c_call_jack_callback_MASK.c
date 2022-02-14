
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_jack_tbl {struct hda_jack_callback* callback; scalar_t__ gated_jack; } ;
struct hda_jack_callback {unsigned int unsol_res; int (* func ) (struct hda_codec*,struct hda_jack_callback*) ;struct hda_jack_tbl* jack; struct hda_jack_callback* next; } ;
struct hda_codec {int dummy; } ;


 struct hda_jack_tbl* FUNC_0 (struct hda_codec*,scalar_t__) ;
 int FUNC_1 (struct hda_codec*,struct hda_jack_callback*) ;
 int FUNC_2 (struct hda_codec*,struct hda_jack_callback*) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_0, unsigned int VAR_1,
          struct hda_jack_tbl *VAR_2)
{
 struct hda_jack_callback *VAR_3;

 for (VAR_3 = VAR_2->callback; VAR_3; VAR_3 = VAR_3->next) {
  VAR_3->jack = VAR_2;
  VAR_3->unsol_res = VAR_1;
  VAR_3->func(VAR_0, VAR_3);
 }
 if (VAR_2->gated_jack) {
  struct hda_jack_tbl *VAR_4 =
   FUNC_0(VAR_0, VAR_2->gated_jack);
  if (VAR_4) {
   for (VAR_3 = VAR_4->callback; VAR_3; VAR_3 = VAR_3->next) {
    VAR_3->jack = VAR_4;
    VAR_3->unsol_res = VAR_1;
    VAR_3->func(VAR_0, VAR_3);
   }
  }
 }
}
