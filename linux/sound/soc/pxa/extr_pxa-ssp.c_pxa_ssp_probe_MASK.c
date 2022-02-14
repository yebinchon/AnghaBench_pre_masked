
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssp_priv {unsigned int dai_fmt; int * ssp; int * extclk; } ;
struct snd_soc_dai {scalar_t__ id; struct device* dev; } ;
struct device_node {int dummy; } ;
struct device {scalar_t__ of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct device*,char*) ;
 int * FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct ssp_priv*) ;
 struct ssp_priv* FUNC_5 (int,int ) ;
 struct device_node* FUNC_6 (scalar_t__,char*,int ) ;
 int * FUNC_7 (scalar_t__,char*) ;
 int * FUNC_8 (struct device_node*,char*) ;
 int FUNC_9 (struct snd_soc_dai*,struct ssp_priv*) ;

__attribute__((used)) static int FUNC_10(struct snd_soc_dai *VAR_4)
{
 struct device *VAR_5 = VAR_4->dev;
 struct ssp_priv *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_5(sizeof(struct ssp_priv), VAR_3);
 if (!VAR_6)
  return -VAR_1;

 if (VAR_5->of_node) {
  struct device_node *VAR_8;

  VAR_8 = FUNC_6(VAR_5->of_node, "port", 0);
  if (!VAR_8) {
   FUNC_2(VAR_5, "unable to get 'port' phandle\n");
   VAR_7 = -VAR_0;
   goto err_priv;
  }

  VAR_6->ssp = FUNC_8(VAR_8, "SoC audio");
  if (VAR_6->ssp == ((void*)0)) {
   VAR_7 = -VAR_0;
   goto err_priv;
  }

  VAR_6->extclk = FUNC_3(VAR_5, "extclk");
  if (FUNC_0(VAR_6->extclk)) {
   VAR_7 = FUNC_1(VAR_6->extclk);
   if (VAR_7 == -VAR_2)
    return VAR_7;

   VAR_6->extclk = ((void*)0);
  }
 } else {
  VAR_6->ssp = FUNC_7(VAR_4->id + 1, "SoC audio");
  if (VAR_6->ssp == ((void*)0)) {
   VAR_7 = -VAR_0;
   goto err_priv;
  }
 }

 VAR_6->dai_fmt = (unsigned int) -1;
 FUNC_9(VAR_4, VAR_6);

 return 0;

err_priv:
 FUNC_4(VAR_6);
 return VAR_7;
}
