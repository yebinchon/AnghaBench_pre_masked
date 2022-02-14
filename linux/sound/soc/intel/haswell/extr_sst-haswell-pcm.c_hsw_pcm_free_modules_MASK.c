
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sst_hsw {int dummy; } ;
struct hsw_priv_data {int * runtime_waves; struct hsw_pcm_data** pcm; struct sst_hsw* hsw; } ;
struct hsw_pcm_data {int * runtime; } ;
struct TYPE_3__ {size_t dai_id; size_t stream; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_1 (struct sst_hsw*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct hsw_priv_data *VAR_2)
{
 struct sst_hsw *VAR_3 = VAR_2->hsw;
 struct hsw_pcm_data *VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1); VAR_5++) {
  VAR_4 = &VAR_2->pcm[VAR_1[VAR_5].dai_id][VAR_1[VAR_5].stream];
  if (VAR_4->runtime){
   FUNC_2(VAR_4->runtime);
   VAR_4->runtime = ((void*)0);
  }
 }
 if (FUNC_1(VAR_3, VAR_0) &&
    VAR_2->runtime_waves) {
  FUNC_2(VAR_2->runtime_waves);
  VAR_2->runtime_waves = ((void*)0);
 }
}
