
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_soc_component {int dev; } ;
struct hsw_priv_data {int ** dmab; } ;
struct TYPE_5__ {scalar_t__ channels_min; } ;
struct TYPE_6__ {scalar_t__ channels_min; } ;
struct TYPE_7__ {TYPE_1__ capture; TYPE_2__ playback; } ;


 int FUNC_0 (TYPE_3__*) ;
 TYPE_3__* VAR_0 ;
 int FUNC_1 (struct hsw_priv_data*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 struct hsw_priv_data* FUNC_4 (struct snd_soc_component*) ;

__attribute__((used)) static void FUNC_5(struct snd_soc_component *VAR_1)
{
 struct hsw_priv_data *VAR_2 =
  FUNC_4(VAR_1);
 int VAR_3;

 FUNC_2(VAR_1->dev);
 FUNC_1(VAR_2);

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  if (VAR_0[VAR_3].playback.channels_min)
   FUNC_3(&VAR_2->dmab[VAR_3][0]);
  if (VAR_0[VAR_3].capture.channels_min)
   FUNC_3(&VAR_2->dmab[VAR_3][1]);
 }
}
