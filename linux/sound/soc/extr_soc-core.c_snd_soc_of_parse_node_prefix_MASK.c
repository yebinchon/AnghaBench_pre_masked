
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_codec_conf {char const* name_prefix; struct device_node* of_node; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (struct device_node*,char const*,char const**) ;

void FUNC_1(struct device_node *VAR_0,
      struct snd_soc_codec_conf *VAR_1,
      struct device_node *VAR_2,
      const char *VAR_3)
{
 const char *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_3, &VAR_4);
 if (VAR_5 < 0) {

  return;
 }

 VAR_1->of_node = VAR_2;
 VAR_1->name_prefix = VAR_4;
}
