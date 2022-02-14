
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {int * dacs; int dsp_stream_id; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,int ) ;
 int FUNC_1 (struct hda_codec*,int ,int ,int ,unsigned int) ;
 unsigned int FUNC_2 (int,int,int ,int,int ) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_1)
{
 struct ca0132_spec *VAR_2 = VAR_1->spec;
 unsigned int VAR_3;

 VAR_3 = FUNC_2(48000, 2,
   VAR_0, 32, 0);

 FUNC_1(VAR_1, VAR_2->dacs[0], VAR_2->dsp_stream_id,
     0, VAR_3);

 FUNC_0(VAR_1, VAR_2->dacs[0]);
}
