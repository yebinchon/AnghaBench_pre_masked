
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_jack_callback {int dummy; } ;
struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {scalar_t__ wait_scp; } ;


 int FUNC_0 (struct hda_codec*,char*) ;
 int FUNC_1 (struct hda_codec*) ;
 scalar_t__ FUNC_2 (struct hda_codec*) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_0,
     struct hda_jack_callback *VAR_1)
{
 struct ca0132_spec *VAR_2 = VAR_0->spec;

 FUNC_0(VAR_0, "ca0132_process_dsp_response\n");
 if (VAR_2->wait_scp) {
  if (FUNC_2(VAR_0) >= 0)
   VAR_2->wait_scp = 0;
 }

 FUNC_1(VAR_0);
}
