
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct rt1011_priv {void** bq_drc_params; int cali_work; struct snd_soc_component* component; } ;
struct rt1011_bq_drc_params {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ,int,int,int ) ;
 int FUNC_1 (int *) ;
 struct rt1011_priv* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_4)
{
 struct rt1011_priv *VAR_5 = FUNC_2(VAR_4);
 int VAR_6;

 VAR_5->component = VAR_4;

 FUNC_1(&VAR_5->cali_work);

 VAR_5->bq_drc_params = FUNC_0(VAR_4->dev,
  VAR_2, sizeof(struct rt1011_bq_drc_params *),
  VAR_1);
 if (!VAR_5->bq_drc_params)
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_5->bq_drc_params[VAR_6] = FUNC_0(VAR_4->dev,
   VAR_3, sizeof(struct rt1011_bq_drc_params),
   VAR_1);
  if (!VAR_5->bq_drc_params[VAR_6])
   return -VAR_0;
 }

 return 0;
}
