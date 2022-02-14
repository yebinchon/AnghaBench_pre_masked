
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {scalar_t__ dsp_state; } ;
struct TYPE_2__ {int params; int mid; int* reqs; unsigned int* def_vals; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*) ;
 int FUNC_3 (struct hda_codec*) ;
 TYPE_1__* VAR_8 ;
 int FUNC_4 (struct hda_codec*,int ,int ) ;
 int FUNC_5 (struct hda_codec*,int,int) ;
 int FUNC_6 (struct hda_codec*,int,int,unsigned int) ;
 int FUNC_7 (struct hda_codec*) ;
 int FUNC_8 (struct hda_codec*) ;

__attribute__((used)) static void FUNC_9(struct hda_codec *VAR_9)
{
 struct ca0132_spec *VAR_10 = VAR_9->spec;
 unsigned int VAR_11;
 int VAR_12;
 int VAR_13, VAR_14;

 if (VAR_10->dsp_state != VAR_0)
  return;

 FUNC_2(VAR_9);
 FUNC_3(VAR_9);
 FUNC_8(VAR_9);
 FUNC_7(VAR_9);

 FUNC_5(VAR_9, 0x03, 1);
 FUNC_5(VAR_9, 0x04, 1);





 VAR_11 = VAR_1;
 FUNC_6(VAR_9, 0x37, 0x08, VAR_11);
 FUNC_6(VAR_9, 0x37, 0x10, VAR_11);


 VAR_11 = VAR_3;
 FUNC_6(VAR_9, 0x96, 0x3C, VAR_11);


 VAR_11 = VAR_2;
 FUNC_6(VAR_9, 0x31, 0x00, VAR_11);
 FUNC_4(VAR_9, VAR_5, VAR_7);


 FUNC_6(VAR_9, 0x32, 0x00, VAR_11);

 FUNC_1(VAR_9);


 VAR_12 = VAR_6 + VAR_4 + 1;
 for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++) {
  for (VAR_14 = 0; VAR_14 <= VAR_8[VAR_13].params; VAR_14++) {
   FUNC_6(VAR_9,
     VAR_8[VAR_13].mid,
     VAR_8[VAR_13].reqs[VAR_14],
     VAR_8[VAR_13].def_vals[VAR_14]);
  }
 }

 FUNC_0(VAR_9);
}
