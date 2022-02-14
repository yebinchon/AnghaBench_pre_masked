
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ count; } ;
struct wm8524_priv {unsigned int sysclk; unsigned int* rate_constraint_list; TYPE_1__ rate_constraint; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct TYPE_5__ {unsigned int ratio; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,unsigned int) ;
 TYPE_2__* VAR_1 ;
 struct wm8524_priv* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_2,
  int VAR_3, unsigned int VAR_4, int VAR_5)
{
 struct snd_soc_component *VAR_6 = VAR_2->component;
 struct wm8524_priv *VAR_7 = FUNC_2(VAR_6);
 unsigned int VAR_8;
 int VAR_9, VAR_10 = 0;

 VAR_7->sysclk = VAR_4;

 VAR_7->rate_constraint.count = 0;
 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_1); VAR_9++) {
  VAR_8 = VAR_4 / VAR_1[VAR_9].ratio;




  switch (VAR_8) {
  case 8000:
  case 32000:
  case 44100:
  case 48000:
  case 88200:
  case 96000:
  case 176400:
  case 192000:
   FUNC_1(VAR_6->dev, "Supported sample rate: %dHz\n",
    VAR_8);
   VAR_7->rate_constraint_list[VAR_10++] = VAR_8;
   VAR_7->rate_constraint.count++;
   break;
  default:
   FUNC_1(VAR_6->dev, "Skipping sample rate: %dHz\n",
    VAR_8);
  }
 }


 if (VAR_7->rate_constraint.count == 0)
  return -VAR_0;

 return 0;
}
