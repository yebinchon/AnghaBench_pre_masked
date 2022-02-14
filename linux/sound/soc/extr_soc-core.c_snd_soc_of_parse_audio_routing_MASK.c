
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_dapm_route {int source; int sink; } ;
struct snd_soc_card {int num_of_dapm_routes; struct snd_soc_dapm_route* of_dapm_routes; TYPE_1__* dev; } ;
struct device_node {int dummy; } ;
struct TYPE_3__ {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*,...) ;
 struct snd_soc_dapm_route* FUNC_1 (TYPE_1__*,int,int,int ) ;
 int FUNC_2 (struct device_node*,char const*) ;
 int FUNC_3 (struct device_node*,char const*,int,int *) ;

int FUNC_4(struct snd_soc_card *VAR_2,
       const char *VAR_3)
{
 struct device_node *VAR_4 = VAR_2->dev->of_node;
 int VAR_5;
 struct snd_soc_dapm_route *VAR_6;
 int VAR_7, VAR_8;

 VAR_5 = FUNC_2(VAR_4, VAR_3);
 if (VAR_5 < 0 || VAR_5 & 1) {
  FUNC_0(VAR_2->dev,
   "ASoC: Property '%s' does not exist or its length is not even\n",
   VAR_3);
  return -VAR_0;
 }
 VAR_5 /= 2;
 if (!VAR_5) {
  FUNC_0(VAR_2->dev, "ASoC: Property '%s's length is zero\n",
   VAR_3);
  return -VAR_0;
 }

 VAR_6 = FUNC_1(VAR_2->dev, VAR_5, sizeof(*VAR_6),
         VAR_1);
 if (!VAR_6) {
  FUNC_0(VAR_2->dev,
   "ASoC: Could not allocate DAPM route table\n");
  return -VAR_0;
 }

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  VAR_8 = FUNC_3(VAR_4, VAR_3,
   2 * VAR_7, &VAR_6[VAR_7].sink);
  if (VAR_8) {
   FUNC_0(VAR_2->dev,
    "ASoC: Property '%s' index %d could not be read: %d\n",
    VAR_3, 2 * VAR_7, VAR_8);
   return -VAR_0;
  }
  VAR_8 = FUNC_3(VAR_4, VAR_3,
   (2 * VAR_7) + 1, &VAR_6[VAR_7].source);
  if (VAR_8) {
   FUNC_0(VAR_2->dev,
    "ASoC: Property '%s' index %d could not be read: %d\n",
    VAR_3, (2 * VAR_7) + 1, VAR_8);
   return -VAR_0;
  }
 }

 VAR_2->num_of_dapm_routes = VAR_5;
 VAR_2->of_dapm_routes = VAR_6;

 return 0;
}
