
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct alc_spec* spec; } ;
struct alc_spec {int gpio_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,int,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_1)
{
 struct alc_spec *VAR_2 = VAR_1->spec;

 FUNC_0(VAR_1, 0x01, 0, VAR_0,
       VAR_2->gpio_data);
}
