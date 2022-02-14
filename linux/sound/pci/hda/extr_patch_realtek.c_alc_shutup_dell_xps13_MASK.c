
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct alc_spec* spec; } ;
struct alc_spec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct alc_spec*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct hda_codec*,int,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_2)
{
 struct alc_spec *VAR_3 = VAR_2->spec;
 int VAR_4 = FUNC_0(VAR_3);


 FUNC_2(VAR_2, VAR_4, 0,
       VAR_0, VAR_1);
 FUNC_1(20);
}
