
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {scalar_t__ voicefx_val; int * effects_switch; } ;
typedef scalar_t__ hda_nid_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct hda_codec*,int) ;
 int FUNC_1 (struct hda_codec*,scalar_t__,int ) ;
 int FUNC_2 (struct hda_codec*,int) ;
 scalar_t__ FUNC_3 (struct ca0132_spec*) ;
 int FUNC_4 (struct hda_codec*,int) ;
 int FUNC_5 (struct hda_codec*,char*,int ) ;
 int FUNC_6 (struct hda_codec*,unsigned int) ;
 unsigned int FUNC_7 (struct hda_codec*) ;

__attribute__((used)) static int FUNC_8(struct hda_codec *VAR_4)
{
 struct ca0132_spec *VAR_5 = VAR_4->spec;
 hda_nid_t VAR_6;
 int VAR_7, VAR_8 = 0;
 unsigned int VAR_9;

 FUNC_5(VAR_4, "ca0132_cvoice_switch_set: val=%ld\n",
      VAR_5->effects_switch[VAR_0 - VAR_1]);

 VAR_7 = VAR_3 - VAR_1;
 VAR_6 = VAR_3;

 for (; VAR_6 < VAR_2; VAR_6++, VAR_7++)
  VAR_8 |= FUNC_1(VAR_4, VAR_6, VAR_5->effects_switch[VAR_7]);


 VAR_8 |= FUNC_4(VAR_4, (VAR_5->voicefx_val ? 1 : 0));


 VAR_9 = FUNC_7(VAR_4);
 if (FUNC_3(VAR_5))
  VAR_8 |= FUNC_0(VAR_4, 1);
 else
  VAR_8 |= FUNC_2(VAR_4, 1);
 FUNC_6(VAR_4, VAR_9);
 return VAR_8;
}
