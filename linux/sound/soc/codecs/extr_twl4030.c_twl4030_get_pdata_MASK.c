
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct twl4030_codec_data {int dummy; } ;
struct snd_soc_component {TYPE_2__* dev; } ;
struct device_node {int dummy; } ;
struct TYPE_5__ {TYPE_1__* parent; } ;
struct TYPE_4__ {int of_node; } ;


 int VAR_0 ;
 struct twl4030_codec_data* FUNC_0 (TYPE_2__*) ;
 struct twl4030_codec_data* FUNC_1 (TYPE_2__*,int,int ) ;
 struct device_node* FUNC_2 (int ,char*) ;
 int FUNC_3 (struct device_node*) ;
 int FUNC_4 (struct twl4030_codec_data*,struct device_node*) ;

__attribute__((used)) static struct twl4030_codec_data *FUNC_5(struct snd_soc_component *VAR_1)
{
 struct twl4030_codec_data *VAR_2 = FUNC_0(VAR_1->dev);
 struct device_node *VAR_3 = ((void*)0);

 VAR_3 = FUNC_2(VAR_1->dev->parent->of_node,
        "codec");

 if (!VAR_2 && VAR_3) {
  VAR_2 = FUNC_1(VAR_1->dev,
         sizeof(struct twl4030_codec_data),
         VAR_0);
  if (!VAR_2) {
   FUNC_3(VAR_3);
   return ((void*)0);
  }
  FUNC_4(VAR_2, VAR_3);
  FUNC_3(VAR_3);
 }

 return VAR_2;
}
