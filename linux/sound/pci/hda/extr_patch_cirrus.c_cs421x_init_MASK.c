
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct cs_spec* spec; } ;
struct cs_spec {scalar_t__ vendor_nid; scalar_t__ gpio_data; scalar_t__ gpio_dir; scalar_t__ gpio_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct hda_codec*) ;
 int FUNC_3 (struct hda_codec*,int,int ,int ,scalar_t__) ;
 int FUNC_4 (struct hda_codec*) ;
 int FUNC_5 (struct hda_codec*,int ) ;

__attribute__((used)) static int FUNC_6(struct hda_codec *VAR_6)
{
 struct cs_spec *VAR_7 = VAR_6->spec;

 if (VAR_7->vendor_nid == VAR_3) {
  FUNC_5(VAR_6, VAR_4);
  FUNC_5(VAR_6, VAR_5);
  FUNC_0(VAR_6);
 }

 FUNC_4(VAR_6);

 if (VAR_7->gpio_mask) {
  FUNC_3(VAR_6, 0x01, 0, VAR_2,
        VAR_7->gpio_mask);
  FUNC_3(VAR_6, 0x01, 0, VAR_1,
        VAR_7->gpio_dir);
  FUNC_3(VAR_6, 0x01, 0, VAR_0,
        VAR_7->gpio_data);
 }

 FUNC_2(VAR_6);

 FUNC_1(VAR_6, ((void*)0));

 return 0;
}
