
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct wm8940_setup_data {int vroi; } ;
struct snd_soc_component {TYPE_1__* dev; } ;
struct TYPE_3__ {struct wm8940_setup_data* platform_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (struct snd_soc_component*,int ) ;
 int FUNC_3 (struct snd_soc_component*,int ) ;
 int FUNC_4 (struct snd_soc_component*,int ,int) ;
 int FUNC_5 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_component *VAR_3)
{
 struct wm8940_setup_data *VAR_4 = VAR_3->dev->platform_data;
 int VAR_5;
 u16 VAR_6;

 VAR_5 = FUNC_5(VAR_3);
 if (VAR_5 < 0) {
  FUNC_0(VAR_3->dev, "Failed to issue reset\n");
  return VAR_5;
 }

 FUNC_2(VAR_3, VAR_0);

 VAR_5 = FUNC_4(VAR_3, VAR_2, 0x180);
 if (VAR_5 < 0)
  return VAR_5;

 if (!VAR_4)
  FUNC_1(VAR_3->dev, "No platform data supplied\n");
 else {
  VAR_6 = FUNC_3(VAR_3, VAR_1);
  VAR_5 = FUNC_4(VAR_3, VAR_1, VAR_6 | VAR_4->vroi);
  if (VAR_5 < 0)
   return VAR_5;
 }

 return VAR_5;
}
