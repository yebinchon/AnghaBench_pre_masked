
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {int * effects_switch; } ;
typedef scalar_t__ hda_nid_t ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (struct ca0132_spec*) ;
 int FUNC_3 (struct hda_codec*,char*,int ) ;

__attribute__((used)) static int FUNC_4(struct hda_codec *VAR_4)
{
 struct ca0132_spec *VAR_5 = VAR_4->spec;
 hda_nid_t VAR_6;
 int VAR_7, VAR_8 = 0;

 FUNC_3(VAR_4, "ca0132_pe_switch_set: val=%ld\n",
      VAR_5->effects_switch[VAR_3 - VAR_0]);

 if (FUNC_2(VAR_5))
  FUNC_0(VAR_4);

 VAR_7 = VAR_2 - VAR_0;
 VAR_6 = VAR_2;

 for (; VAR_6 < VAR_1; VAR_6++, VAR_7++)
  VAR_8 |= FUNC_1(VAR_4, VAR_6, VAR_5->effects_switch[VAR_7]);

 return VAR_8;
}
