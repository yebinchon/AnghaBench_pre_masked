
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct obs_audio_data {scalar_t__ frames; scalar_t__ data; } ;
struct compressor_data {int sidechain_update_mutex; int * weak_sidechain; } ;
typedef int obs_weak_source_t ;


 int FUNC_0 (struct compressor_data*,float**,scalar_t__ const) ;
 int FUNC_1 (struct compressor_data*,scalar_t__ const) ;
 int FUNC_2 (struct compressor_data*,float**,scalar_t__ const) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct obs_audio_data *
FUNC_5(void *VAR_0, struct obs_audio_data *VAR_1)
{
 struct compressor_data *VAR_2 = VAR_0;

 const uint32_t VAR_3 = VAR_1->frames;
 if (VAR_3 == 0)
  return VAR_1;

 float **VAR_4 = (float **)VAR_1->data;

 FUNC_3(&VAR_2->sidechain_update_mutex);
 obs_weak_source_t *VAR_5 = VAR_2->weak_sidechain;
 FUNC_4(&VAR_2->sidechain_update_mutex);

 if (VAR_5)
  FUNC_1(VAR_2, VAR_3);
 else
  FUNC_0(VAR_2, VAR_4, VAR_3);

 FUNC_2(VAR_2, VAR_4, VAR_3);
 return VAR_1;
}
