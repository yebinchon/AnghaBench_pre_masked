
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
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*,int,int ,int ,scalar_t__) ;
 int FUNC_3 (struct hda_codec*) ;
 int FUNC_4 (struct hda_codec*,int ) ;

__attribute__((used)) static int FUNC_5(struct hda_codec *VAR_8)
{
 struct cs_spec *VAR_9 = VAR_8->spec;

 if (VAR_9->vendor_nid == VAR_4) {

  FUNC_4(VAR_8, VAR_7);
  FUNC_4(VAR_8, VAR_6);
 } else if (VAR_9->vendor_nid == VAR_3) {
  FUNC_4(VAR_8, VAR_5);
 }

 FUNC_3(VAR_8);

 if (VAR_9->gpio_mask) {
  FUNC_2(VAR_8, 0x01, 0, VAR_2,
        VAR_9->gpio_mask);
  FUNC_2(VAR_8, 0x01, 0, VAR_1,
        VAR_9->gpio_dir);
  FUNC_2(VAR_8, 0x01, 0, VAR_0,
        VAR_9->gpio_data);
 }

 if (VAR_9->vendor_nid == VAR_4) {
  FUNC_1(VAR_8);
  FUNC_0(VAR_8);
 }

 return 0;
}
