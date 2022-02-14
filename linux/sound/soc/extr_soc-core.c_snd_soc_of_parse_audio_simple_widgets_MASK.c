
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_dapm_widget {char const* name; } ;
struct snd_soc_card {int num_of_dapm_widgets; struct snd_soc_dapm_widget* of_dapm_widgets; TYPE_1__* dev; } ;
struct device_node {int dummy; } ;
struct TYPE_3__ {struct device_node* of_node; } ;


 int FUNC_0 (struct snd_soc_dapm_widget*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,char*,...) ;
 struct snd_soc_dapm_widget* FUNC_2 (TYPE_1__*,int,int,int ) ;
 int FUNC_3 (struct device_node*,char const*) ;
 int FUNC_4 (struct device_node*,char const*,int,char const**) ;
 struct snd_soc_dapm_widget* VAR_3 ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char const*,char const*,int ) ;

int FUNC_7(struct snd_soc_card *VAR_4,
       const char *VAR_5)
{
 struct device_node *VAR_6 = VAR_4->dev->of_node;
 struct snd_soc_dapm_widget *VAR_7;
 const char *VAR_8, *VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13;

 VAR_12 = FUNC_3(VAR_6, VAR_5);
 if (VAR_12 < 0) {
  FUNC_1(VAR_4->dev,
   "ASoC: Property '%s' does not exist\n", VAR_5);
  return -VAR_0;
 }
 if (VAR_12 & 1) {
  FUNC_1(VAR_4->dev,
   "ASoC: Property '%s' length is not even\n", VAR_5);
  return -VAR_0;
 }

 VAR_12 /= 2;
 if (!VAR_12) {
  FUNC_1(VAR_4->dev, "ASoC: Property '%s's length is zero\n",
   VAR_5);
  return -VAR_0;
 }

 VAR_7 = FUNC_2(VAR_4->dev, VAR_12, sizeof(*VAR_7),
          VAR_2);
 if (!VAR_7) {
  FUNC_1(VAR_4->dev,
   "ASoC: Could not allocate memory for widgets\n");
  return -VAR_1;
 }

 for (VAR_10 = 0; VAR_10 < VAR_12; VAR_10++) {
  VAR_13 = FUNC_4(VAR_6, VAR_5,
   2 * VAR_10, &VAR_8);
  if (VAR_13) {
   FUNC_1(VAR_4->dev,
    "ASoC: Property '%s' index %d read error:%d\n",
    VAR_5, 2 * VAR_10, VAR_13);
   return -VAR_0;
  }

  for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_3); VAR_11++) {
   if (!FUNC_6(VAR_8, VAR_3[VAR_11].name,
         FUNC_5(VAR_3[VAR_11].name))) {
    VAR_7[VAR_10] = VAR_3[VAR_11];
    break;
   }
  }

  if (VAR_11 >= FUNC_0(VAR_3)) {
   FUNC_1(VAR_4->dev,
    "ASoC: DAPM widget '%s' is not supported\n",
    VAR_8);
   return -VAR_0;
  }

  VAR_13 = FUNC_4(VAR_6, VAR_5,
          (2 * VAR_10) + 1,
          &VAR_9);
  if (VAR_13) {
   FUNC_1(VAR_4->dev,
    "ASoC: Property '%s' index %d read error:%d\n",
    VAR_5, (2 * VAR_10) + 1, VAR_13);
   return -VAR_0;
  }

  VAR_7[VAR_10].name = VAR_9;
 }

 VAR_4->of_dapm_widgets = VAR_7;
 VAR_4->num_of_dapm_widgets = VAR_12;

 return 0;
}
