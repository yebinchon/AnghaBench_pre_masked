
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_dai_link {int init; int * ops; TYPE_2__* codecs; TYPE_1__* cpus; int dai_fmt; } ;
struct simple_dai_props {struct asoc_simple_dai* codec_dai; struct asoc_simple_dai* cpu_dai; } ;
struct link_info {int dais; int link; int cpu; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct asoc_simple_priv {struct asoc_simple_dai* dais; } ;
struct asoc_simple_dai {int dummy; } ;
struct TYPE_4__ {int dai_name; } ;
struct TYPE_3__ {int dai_name; } ;


 int FUNC_0 (struct snd_soc_dai_link*,int) ;
 int FUNC_1 (struct snd_soc_dai_link*) ;
 int VAR_0 ;
 int FUNC_2 (struct device*,struct device_node*,struct snd_soc_dai_link*,struct asoc_simple_dai*) ;
 int FUNC_3 (struct device*,struct device_node*,struct snd_soc_dai_link*,struct asoc_simple_dai*) ;
 int FUNC_4 (struct device_node*,struct snd_soc_dai_link*) ;
 int FUNC_5 (struct device_node*,struct snd_soc_dai_link*,int*) ;
 int FUNC_6 (struct device*,struct device_node*,struct device_node*,int *,int *) ;
 int FUNC_7 (struct device_node*,struct asoc_simple_dai*) ;
 int FUNC_8 (struct device*,struct snd_soc_dai_link*,char*,int ,int ) ;
 int FUNC_9 (struct device*,char*,struct device_node*) ;
 int VAR_1 ;
 int FUNC_10 (struct device_node*,struct device_node*,struct simple_dai_props*) ;
 struct device* FUNC_11 (struct asoc_simple_priv*) ;
 struct snd_soc_dai_link* FUNC_12 (struct asoc_simple_priv*,int ) ;
 struct simple_dai_props* FUNC_13 (struct asoc_simple_priv*,int ) ;

__attribute__((used)) static int FUNC_14(struct asoc_simple_priv *VAR_2,
        struct device_node *VAR_3,
        struct device_node *VAR_4,
        struct link_info *VAR_5)
{
 struct device *VAR_6 = FUNC_11(VAR_2);
 struct snd_soc_dai_link *VAR_7 = FUNC_12(VAR_2, VAR_5->link);
 struct simple_dai_props *VAR_8 = FUNC_13(VAR_2, VAR_5->link);
 struct device_node *VAR_9 = VAR_6->of_node;
 struct asoc_simple_dai *VAR_10;
 struct asoc_simple_dai *VAR_11;
 int VAR_12, VAR_13;


 if (!VAR_5->cpu)
  return 0;

 FUNC_9(VAR_6, "link_of (%pOF)\n", VAR_3);

 VAR_5->link++;

 VAR_10 =
 VAR_8->cpu_dai = &VAR_2->dais[VAR_5->dais++];
 VAR_11 =
 VAR_8->codec_dai = &VAR_2->dais[VAR_5->dais++];


 FUNC_10(VAR_9, VAR_3, VAR_8);
 FUNC_10(VAR_9, VAR_4, VAR_8);

 VAR_12 = FUNC_6(VAR_6, VAR_3, VAR_4,
           ((void*)0), &VAR_7->dai_fmt);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_12 = FUNC_5(VAR_3, VAR_7, &VAR_13);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_12 = FUNC_4(VAR_4, VAR_7);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_12 = FUNC_7(VAR_3, VAR_10);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_12 = FUNC_7(VAR_4, VAR_11);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_12 = FUNC_3(VAR_6, VAR_3, VAR_7, VAR_10);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_12 = FUNC_2(VAR_6, VAR_4, VAR_7, VAR_11);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_12 = FUNC_8(VAR_6, VAR_7,
        "%s-%s",
        VAR_7->cpus->dai_name,
        VAR_7->codecs->dai_name);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_7->ops = &VAR_1;
 VAR_7->init = VAR_0;

 FUNC_0(VAR_7, VAR_13);
 FUNC_1(VAR_7);

 return 0;
}
