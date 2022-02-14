
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct obs_audio_data {scalar_t__ frames; scalar_t__ data; } ;
struct expander_data {int dummy; } ;


 int FUNC_0 (struct expander_data*,float**,scalar_t__ const) ;
 int FUNC_1 (struct expander_data*,float**,scalar_t__ const) ;

__attribute__((used)) static struct obs_audio_data *
FUNC_2(void *VAR_0, struct obs_audio_data *VAR_1)
{
 struct expander_data *VAR_2 = VAR_0;

 const uint32_t VAR_3 = VAR_1->frames;
 if (VAR_3 == 0)
  return VAR_1;

 float **VAR_4 = (float **)VAR_1->data;

 FUNC_0(VAR_2, VAR_4, VAR_3);
 FUNC_1(VAR_2, VAR_4, VAR_3);
 return VAR_1;
}
