
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_jack_tbl {int block_report; } ;
struct hda_jack_callback {int nid; } ;
struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {int unsol_hp_work; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ) ;
 struct hda_jack_tbl* FUNC_3 (struct hda_codec*,int ) ;

__attribute__((used)) static void FUNC_4(struct hda_codec *VAR_0, struct hda_jack_callback *VAR_1)
{
 struct ca0132_spec *VAR_2 = VAR_0->spec;
 struct hda_jack_tbl *VAR_3;




 FUNC_0(&VAR_2->unsol_hp_work);
 FUNC_2(&VAR_2->unsol_hp_work, FUNC_1(500));
 VAR_3 = FUNC_3(VAR_0, VAR_1->nid);
 if (VAR_3)
  VAR_3->block_report = 1;
}
