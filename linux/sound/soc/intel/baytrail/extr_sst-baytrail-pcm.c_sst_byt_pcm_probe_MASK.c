
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sst_pdata {int dsp; } ;
struct sst_byt_priv_data {TYPE_1__* pcm; int byt; } ;
struct snd_soc_component {int dev; } ;
struct TYPE_2__ {int work; int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 struct sst_pdata* FUNC_1 (int ) ;
 struct sst_byt_priv_data* FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct snd_soc_component*,struct sst_byt_priv_data*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(struct snd_soc_component *VAR_5)
{
 struct sst_pdata *VAR_6 = FUNC_1(VAR_5->dev);
 struct sst_byt_priv_data *VAR_7;
 int VAR_8;

 if (!VAR_6)
  return -VAR_1;

 VAR_7 = FUNC_2(VAR_5->dev, sizeof(*VAR_7),
     VAR_3);
 if (!VAR_7)
  return -VAR_2;
 VAR_7->byt = VAR_6->dsp;
 FUNC_4(VAR_5, VAR_7);

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  FUNC_3(&VAR_7->pcm[VAR_8].mutex);
  FUNC_0(&VAR_7->pcm[VAR_8].work, VAR_4);
 }

 return 0;
}
