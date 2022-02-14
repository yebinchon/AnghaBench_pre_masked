
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {int curr_chip_addx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hda_codec*,int ,int ) ;
 unsigned int FUNC_1 (struct hda_codec*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct hda_codec *VAR_5, unsigned int *VAR_6)
{
 struct ca0132_spec *VAR_7 = VAR_5->spec;
 int VAR_8;


 VAR_8 = FUNC_0(VAR_5, VAR_1, 0);

 if (VAR_8 != -VAR_0) {

  VAR_8 = FUNC_0(VAR_5, VAR_3, 0);
 }

 if (VAR_8 != -VAR_0) {

  *VAR_6 = FUNC_1(VAR_5, VAR_4, 0,
        VAR_2,
        0);
 }



 VAR_7->curr_chip_addx = (VAR_8 != -VAR_0) ?
     (VAR_7->curr_chip_addx + 4) : ~0U;
 return VAR_8;
}
