
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm_hubs_data {int (* check_class_w_digital ) (struct snd_soc_component*) ;} ;
struct snd_soc_component {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,char*) ;
 struct wm_hubs_data* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ) ;
 int FUNC_3 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_4 (struct snd_soc_component*,int ,int ) ;
 int FUNC_5 (struct snd_soc_component*) ;
 int FUNC_6 (struct snd_soc_component*) ;

void FUNC_7(struct snd_soc_component *VAR_5)
{
 struct wm_hubs_data *VAR_6 = FUNC_1(VAR_5);
 int VAR_7 = VAR_2 | VAR_1;

 if (!FUNC_6(VAR_5))
  VAR_7 = 0;

 if (VAR_6->check_class_w_digital && !VAR_6->check_class_w_digital(VAR_5))
  VAR_7 = 0;

 FUNC_0(VAR_5->dev, "Class W %s\n", VAR_7 ? "enabled" : "disabled");

 FUNC_3(VAR_5, VAR_0,
       VAR_2 | VAR_1, VAR_7);

 FUNC_4(VAR_5, VAR_3,
        FUNC_2(VAR_5, VAR_3));
 FUNC_4(VAR_5, VAR_4,
        FUNC_2(VAR_5, VAR_4));
}
