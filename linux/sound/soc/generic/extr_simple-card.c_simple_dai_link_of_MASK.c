
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
typedef int prop ;
struct TYPE_4__ {int dai_name; } ;
struct TYPE_3__ {int dai_name; } ;


 char* VAR_0 ;
 int FUNC_0 (struct snd_soc_dai_link*,int) ;
 int FUNC_1 (struct snd_soc_dai_link*) ;
 int VAR_1 ;
 int FUNC_2 (struct device*,struct device_node*,struct snd_soc_dai_link*,struct asoc_simple_dai*) ;
 int FUNC_3 (struct device*,struct device_node*,struct snd_soc_dai_link*,struct asoc_simple_dai*) ;
 int FUNC_4 (struct device_node*,struct snd_soc_dai_link*) ;
 int FUNC_5 (struct device_node*,struct snd_soc_dai_link*,int*) ;
 int FUNC_6 (struct device*,struct device_node*,struct device_node*,char*,int *) ;
 int FUNC_7 (struct device_node*,struct snd_soc_dai_link*) ;
 int FUNC_8 (struct device_node*,struct asoc_simple_dai*) ;
 int FUNC_9 (struct device*,struct snd_soc_dai_link*,char*,int ,int ) ;
 int FUNC_10 (struct device*,char*,struct device_node*) ;
 struct device_node* FUNC_11 (struct device_node*,char*) ;
 struct device_node* FUNC_12 (struct device_node*) ;
 int FUNC_13 (struct device_node*) ;
 int VAR_2 ;
 int FUNC_14 (struct device_node*,struct device_node*,struct device_node*,struct simple_dai_props*,char*) ;
 struct device* FUNC_15 (struct asoc_simple_priv*) ;
 struct snd_soc_dai_link* FUNC_16 (struct asoc_simple_priv*,int ) ;
 struct simple_dai_props* FUNC_17 (struct asoc_simple_priv*,int ) ;
 int FUNC_18 (char*,int,char*,char*) ;

__attribute__((used)) static int FUNC_19(struct asoc_simple_priv *VAR_3,
         struct device_node *VAR_4,
         struct device_node *VAR_5,
         struct link_info *VAR_6,
         bool VAR_7)
{
 struct device *VAR_8 = FUNC_15(VAR_3);
 struct snd_soc_dai_link *VAR_9 = FUNC_16(VAR_3, VAR_6->link);
 struct simple_dai_props *VAR_10 = FUNC_17(VAR_3, VAR_6->link);
 struct asoc_simple_dai *VAR_11;
 struct asoc_simple_dai *VAR_12;
 struct device_node *VAR_13 = VAR_8->of_node;
 struct device_node *VAR_14 = ((void*)0);
 struct device_node *VAR_15 = ((void*)0);
 struct device_node *VAR_16 = ((void*)0);
 char VAR_17[128];
 char *VAR_18 = "";
 int VAR_19, VAR_20;







 if (!VAR_6->cpu || VAR_4 == VAR_5)
  return 0;

 VAR_14 = VAR_4;
 VAR_15 = FUNC_12(VAR_4);
 VAR_6->link++;

 FUNC_10(VAR_8, "link_of (%pOF)\n", VAR_15);


 if (VAR_7)
  VAR_18 = VAR_0;

 FUNC_18(VAR_17, sizeof(VAR_17), "%splat", VAR_18);
 VAR_16 = FUNC_11(VAR_15, VAR_17);

 VAR_11 =
 VAR_10->cpu_dai = &VAR_3->dais[VAR_6->dais++];
 VAR_12 =
 VAR_10->codec_dai = &VAR_3->dais[VAR_6->dais++];

 VAR_19 = FUNC_6(VAR_8, VAR_15, VAR_5,
           VAR_18, &VAR_9->dai_fmt);
 if (VAR_19 < 0)
  goto dai_link_of_err;

 FUNC_14(VAR_13, VAR_14, VAR_5, VAR_10, VAR_18);

 VAR_19 = FUNC_5(VAR_14, VAR_9, &VAR_20);
 if (VAR_19 < 0)
  goto dai_link_of_err;

 VAR_19 = FUNC_4(VAR_5, VAR_9);
 if (VAR_19 < 0)
  goto dai_link_of_err;

 VAR_19 = FUNC_7(VAR_16, VAR_9);
 if (VAR_19 < 0)
  goto dai_link_of_err;

 VAR_19 = FUNC_8(VAR_14, VAR_11);
 if (VAR_19 < 0)
  goto dai_link_of_err;

 VAR_19 = FUNC_8(VAR_5, VAR_12);
 if (VAR_19 < 0)
  goto dai_link_of_err;

 VAR_19 = FUNC_3(VAR_8, VAR_14, VAR_9, VAR_11);
 if (VAR_19 < 0)
  goto dai_link_of_err;

 VAR_19 = FUNC_2(VAR_8, VAR_5, VAR_9, VAR_12);
 if (VAR_19 < 0)
  goto dai_link_of_err;

 VAR_19 = FUNC_9(VAR_8, VAR_9,
        "%s-%s",
        VAR_9->cpus->dai_name,
        VAR_9->codecs->dai_name);
 if (VAR_19 < 0)
  goto dai_link_of_err;

 VAR_9->ops = &VAR_2;
 VAR_9->init = VAR_1;

 FUNC_0(VAR_9, VAR_20);
 FUNC_1(VAR_9);

dai_link_of_err:
 FUNC_13(VAR_16);
 FUNC_13(VAR_15);

 return VAR_19;
}
