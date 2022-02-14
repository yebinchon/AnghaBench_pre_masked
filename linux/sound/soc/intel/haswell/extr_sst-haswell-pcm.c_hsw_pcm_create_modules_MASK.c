
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sst_hsw {int dummy; } ;
struct hsw_priv_data {struct hsw_pcm_data** pcm; int * runtime_waves; struct sst_hsw* hsw; } ;
struct hsw_pcm_data {TYPE_1__* runtime; int persistent_offset; } ;
struct TYPE_5__ {size_t dai_id; size_t stream; int mod_id; } ;
struct TYPE_4__ {int persistent_offset; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 scalar_t__ FUNC_1 (struct sst_hsw*,int ) ;
 void* FUNC_2 (struct sst_hsw*,int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(struct hsw_priv_data *VAR_3)
{
 struct sst_hsw *VAR_4 = VAR_3->hsw;
 struct hsw_pcm_data *VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_2); VAR_6++) {
  VAR_5 = &VAR_3->pcm[VAR_2[VAR_6].dai_id][VAR_2[VAR_6].stream];


  VAR_5->runtime = FUNC_2(VAR_4,
   VAR_2[VAR_6].mod_id, VAR_5->persistent_offset);
  if (VAR_5->runtime == ((void*)0))
   goto err;
  VAR_5->persistent_offset =
   VAR_5->runtime->persistent_offset;
 }


 if (FUNC_1(VAR_4, VAR_1)) {
  VAR_3->runtime_waves = FUNC_2(VAR_4,
   VAR_1, 0);
  if (VAR_3->runtime_waves == ((void*)0))
   goto err;
 }

 return 0;

err:
 for (--VAR_6; VAR_6 >= 0; VAR_6--) {
  VAR_5 = &VAR_3->pcm[VAR_2[VAR_6].dai_id][VAR_2[VAR_6].stream];
  FUNC_3(VAR_5->runtime);
 }

 return -VAR_0;
}
