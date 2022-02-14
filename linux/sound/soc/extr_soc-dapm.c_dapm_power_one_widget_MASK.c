
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int id; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (struct snd_soc_dapm_widget*,struct list_head*,int) ;
 int FUNC_1 (struct snd_soc_dapm_widget*) ;
 int FUNC_2 (struct snd_soc_dapm_widget*,int,struct list_head*,struct list_head*) ;



__attribute__((used)) static void FUNC_3(struct snd_soc_dapm_widget *VAR_0,
      struct list_head *VAR_1,
      struct list_head *VAR_2)
{
 int VAR_3;

 switch (VAR_0->id) {
 case 128:
  FUNC_0(VAR_0, VAR_2, 0);
  break;
 case 129:
  FUNC_0(VAR_0, VAR_1, 1);
  break;

 default:
  VAR_3 = FUNC_1(VAR_0);

  FUNC_2(VAR_0, VAR_3, VAR_1, VAR_2);
  break;
 }
}
