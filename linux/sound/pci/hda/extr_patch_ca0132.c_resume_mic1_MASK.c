
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {int * adcs; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,int ,int ,int ,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_1, unsigned int VAR_2)
{
 struct ca0132_spec *VAR_3 = VAR_1->spec;

 if (VAR_2 != 0)
  FUNC_0(VAR_1, VAR_3->adcs[0], 0,
        VAR_0,
        VAR_2);
}
