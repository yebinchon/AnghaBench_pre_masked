
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tas5720_data {int fault_check_work; scalar_t__ last_fault; } ;
struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dev; } ;
struct snd_kcontrol {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int ) ;
 struct tas5720_data* FUNC_5 (struct snd_soc_component*) ;
 int FUNC_6 (struct snd_soc_component*,int ,int ,int ) ;
 struct snd_soc_component* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct snd_soc_dapm_widget *VAR_5,
        struct snd_kcontrol *VAR_6, int VAR_7)
{
 struct snd_soc_component *VAR_8 = FUNC_7(VAR_5->dapm);
 struct tas5720_data *VAR_9 = FUNC_5(VAR_8);
 int VAR_10;

 if (VAR_7 & VAR_0) {

  VAR_10 = FUNC_6(VAR_8, VAR_3,
       VAR_4, VAR_4);
  if (VAR_10 < 0) {
   FUNC_1(VAR_8->dev, "error waking component: %d\n", VAR_10);
   return VAR_10;
  }
  FUNC_3(25);


  VAR_9->last_fault = 0;
  FUNC_4(&VAR_9->fault_check_work,
    FUNC_2(VAR_2));
 } else if (VAR_7 & VAR_1) {

  FUNC_0(&VAR_9->fault_check_work);


  VAR_10 = FUNC_6(VAR_8, VAR_3,
       VAR_4, 0);
  if (VAR_10 < 0) {
   FUNC_1(VAR_8->dev, "error shutting down component: %d\n",
    VAR_10);
   return VAR_10;
  }
 }

 return 0;
}
