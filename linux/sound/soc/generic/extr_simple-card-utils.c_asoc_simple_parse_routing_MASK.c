
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_card {TYPE_1__* dev; } ;
struct device_node {int dummy; } ;
typedef int prop ;
struct TYPE_2__ {struct device_node* of_node; } ;


 int FUNC_0 (struct device_node*,char*) ;
 int FUNC_1 (struct snd_soc_card*,char*) ;
 int FUNC_2 (char*,int,char*,char*,char*) ;

int FUNC_3(struct snd_soc_card *VAR_0,
         char *VAR_1)
{
 struct device_node *VAR_2 = VAR_0->dev->of_node;
 char VAR_3[128];

 if (!VAR_1)
  VAR_1 = "";

 FUNC_2(VAR_3, sizeof(VAR_3), "%s%s", VAR_1, "routing");

 if (!FUNC_0(VAR_2, VAR_3))
  return 0;

 return FUNC_1(VAR_0, VAR_3);
}
