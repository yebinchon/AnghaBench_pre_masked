
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl6040_data {int mutex; } ;
struct snd_soc_jack {int dummy; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct twl6040_data* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_jack*,int,int) ;
 int FUNC_4 (struct snd_soc_component*,int ) ;

__attribute__((used)) static void FUNC_5(struct snd_soc_component *VAR_2,
       struct snd_soc_jack *VAR_3, int VAR_4)
{
 struct twl6040_data *VAR_5 = FUNC_2(VAR_2);
 int VAR_6;

 FUNC_0(&VAR_5->mutex);


 VAR_6 = FUNC_4(VAR_2, VAR_1);
 if (VAR_6 & VAR_0)
  FUNC_3(VAR_3, VAR_4, VAR_4);
 else
  FUNC_3(VAR_3, 0, VAR_4);

 FUNC_1(&VAR_5->mutex);
}
