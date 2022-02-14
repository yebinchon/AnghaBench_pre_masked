
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct hda_jack_tbl {int phantom_jack; int type; TYPE_1__* jack; scalar_t__ button_state; } ;
struct hda_jack_keymap {int type; int key; } ;
struct hda_codec {int card; } ;
typedef int hda_nid_t ;
struct TYPE_4__ {int private_free; struct hda_jack_tbl* private_data; } ;


 int FUNC_0 (struct hda_codec*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct hda_codec*,int ) ;
 struct hda_jack_tbl* FUNC_2 (struct hda_codec*,int ) ;
 int FUNC_3 (int ,char const*,int,TYPE_1__**,int,int) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,int,int ) ;

int FUNC_6(struct hda_codec *VAR_1, hda_nid_t VAR_2,
     const char *VAR_3, bool VAR_4,
     int VAR_5, const struct hda_jack_keymap *VAR_6)
{
 struct hda_jack_tbl *VAR_7;
 const struct hda_jack_keymap *VAR_8;
 int VAR_9, VAR_10, VAR_11;

 VAR_7 = FUNC_2(VAR_1, VAR_2);
 if (!VAR_7)
  return 0;
 if (VAR_7->jack)
  return 0;

 if (!VAR_5)
  VAR_5 = FUNC_0(VAR_1, VAR_2);

 VAR_11 = 0;
 if (VAR_6) {
  for (VAR_8 = VAR_6; VAR_8->type; VAR_8++)
   VAR_11 |= VAR_8->type;
 }

 VAR_9 = FUNC_3(VAR_1->card, VAR_3, VAR_5 | VAR_11,
      &VAR_7->jack, 1, VAR_4);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_7->phantom_jack = !!VAR_4;
 VAR_7->type = VAR_5;
 VAR_7->button_state = 0;
 VAR_7->jack->private_data = VAR_7;
 VAR_7->jack->private_free = VAR_0;
 if (VAR_6) {
  for (VAR_8 = VAR_6; VAR_8->type; VAR_8++)
   FUNC_5(VAR_7->jack, VAR_8->type, VAR_8->key);
 }

 VAR_10 = FUNC_1(VAR_1, VAR_2);
 FUNC_4(VAR_7->jack, VAR_10 ? VAR_7->type : 0);

 return 0;
}
