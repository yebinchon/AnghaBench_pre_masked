
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_card {int dummy; } ;
struct link_info {int cpu; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct asoc_simple_priv {int dummy; } ;
typedef int li ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_soc_card*,int ) ;
 int FUNC_1 (struct snd_soc_card*,int ) ;
 int FUNC_2 (struct snd_soc_card*,int ) ;
 int FUNC_3 (struct snd_soc_card*,int ) ;
 int FUNC_4 (struct link_info*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct asoc_simple_priv*,struct link_info*,int ,int ) ;
 int FUNC_6 (struct device_node*,struct asoc_simple_priv*) ;
 struct snd_soc_card* FUNC_7 (struct asoc_simple_priv*) ;
 struct device* FUNC_8 (struct asoc_simple_priv*) ;

__attribute__((used)) static int FUNC_9(struct asoc_simple_priv *VAR_4)
{
 struct device *VAR_5 = FUNC_8(VAR_4);
 struct device_node *VAR_6 = VAR_5->of_node;
 struct snd_soc_card *VAR_7 = FUNC_7(VAR_4);
 struct link_info VAR_8;
 int VAR_9;

 if (!VAR_6)
  return -VAR_0;

 VAR_9 = FUNC_3(VAR_7, VAR_1);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 = FUNC_2(VAR_7, VAR_1);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 = FUNC_1(VAR_7, VAR_1);
 if (VAR_9 < 0)
  return VAR_9;


 FUNC_4(&VAR_8, 0, sizeof(VAR_8));
 for (VAR_8.cpu = 1; VAR_8.cpu >= 0; VAR_8.cpu--) {
  VAR_9 = FUNC_5(VAR_4, &VAR_8,
        VAR_2,
        VAR_3);
  if (VAR_9 < 0)
   return VAR_9;
 }

 VAR_9 = FUNC_0(VAR_7, VAR_1);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 = FUNC_6(VAR_6, VAR_4);

 return VAR_9;
}
