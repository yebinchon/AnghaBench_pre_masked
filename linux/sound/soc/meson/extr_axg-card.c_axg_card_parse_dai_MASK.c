
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_card {int dev; } ;
struct of_phandle_args {struct device_node* np; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct device_node*,char*,char*,int ,struct of_phandle_args*) ;
 int FUNC_2 (struct of_phandle_args*,char const**) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_card *VAR_2,
         struct device_node *VAR_3,
         struct device_node **VAR_4,
         const char **VAR_5)
{
 struct of_phandle_args VAR_6;
 int VAR_7;

 if (!VAR_5 || !VAR_4 || !VAR_3)
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_3, "sound-dai",
      "#sound-dai-cells", 0, &VAR_6);
 if (VAR_7) {
  if (VAR_7 != -VAR_1)
   FUNC_0(VAR_2->dev, "can't parse dai %d\n", VAR_7);
  return VAR_7;
 }
 *VAR_4 = VAR_6.np;

 return FUNC_2(&VAR_6, VAR_5);
}
