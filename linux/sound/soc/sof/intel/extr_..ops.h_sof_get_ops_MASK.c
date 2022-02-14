
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sof_ops_table {struct snd_sof_dsp_ops const* ops; struct sof_dev_desc const* desc; } ;
struct sof_dev_desc {int dummy; } ;
struct snd_sof_dsp_ops {int dummy; } ;



__attribute__((used)) static inline const struct snd_sof_dsp_ops
*FUNC_0(const struct sof_dev_desc *VAR_0,
      const struct sof_ops_table VAR_1[], int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  if (VAR_0 == VAR_1[VAR_3].desc)
   return VAR_1[VAR_3].ops;
 }


 return ((void*)0);
}
