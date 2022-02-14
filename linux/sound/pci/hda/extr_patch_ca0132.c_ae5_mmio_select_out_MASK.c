
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {size_t cur_out_type; } ;
struct TYPE_2__ {int * vals; int * target; int * group; } ;


 unsigned int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct hda_codec*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_2)
{
 struct ca0132_spec *VAR_3 = VAR_2->spec;
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  FUNC_0(VAR_2,
   VAR_1[VAR_3->cur_out_type].group[VAR_4],
   VAR_1[VAR_3->cur_out_type].target[VAR_4],
   VAR_1[VAR_3->cur_out_type].vals[VAR_4]);
}
