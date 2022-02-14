
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
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*) ;
 TYPE_1__* VAR_9 ;
 scalar_t__ FUNC_2 (struct ca0132_spec*) ;
 int FUNC_3 (struct hda_codec*,int ,int ) ;
 int FUNC_4 (struct hda_codec*,int,int,unsigned int) ;
 int FUNC_5 (struct hda_codec*,int ) ;

__attribute__((used)) static void FUNC_6(struct hda_codec *VAR_10)
{
 struct ca0132_spec *VAR_11 = VAR_10->spec;
 unsigned int VAR_12;
 int VAR_13;
 int VAR_14, VAR_15;

 if (VAR_11->dsp_state != VAR_0)
  return;

 FUNC_0(VAR_10);
 FUNC_1(VAR_10);


 VAR_12 = VAR_2;
 FUNC_4(VAR_10, 0x96, 0x3C, VAR_12);


 VAR_12 = VAR_1;
 FUNC_4(VAR_10, 0x31, 0x00, VAR_12);
 FUNC_3(VAR_10, VAR_4, VAR_8);


 FUNC_4(VAR_10, 0x32, 0x00, VAR_12);

 if (FUNC_2(VAR_11) == VAR_6)
  FUNC_5(VAR_10, VAR_7);


 VAR_13 = VAR_5 + VAR_3 + 1;
 for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {
  for (VAR_15 = 0; VAR_15 <= VAR_9[VAR_14].params; VAR_15++) {
   FUNC_4(VAR_10,
     VAR_9[VAR_14].mid,
     VAR_9[VAR_14].reqs[VAR_15],
     VAR_9[VAR_14].def_vals[VAR_15]);
  }
 }
}
