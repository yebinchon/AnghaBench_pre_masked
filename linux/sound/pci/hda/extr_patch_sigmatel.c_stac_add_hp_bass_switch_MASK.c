
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigmatel_spec {int gpio_mask; int gpio_dir; int gpio_data; int gen; } ;
struct hda_codec {struct sigmatel_spec* spec; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct hda_codec *VAR_2)
{
 struct sigmatel_spec *VAR_3 = VAR_2->spec;

 if (!FUNC_0(&VAR_3->gen, "Bass Speaker Playback Switch",
      &VAR_1))
  return -VAR_0;

 VAR_3->gpio_mask |= 0x20;
 VAR_3->gpio_dir |= 0x20;
 VAR_3->gpio_data |= 0x20;
 return 0;
}
