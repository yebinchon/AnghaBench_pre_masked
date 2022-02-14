
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst_module_runtime {int id; } ;
struct sst_module {int dummy; } ;
struct sst_hsw {struct sst_dsp* dsp; } ;
struct sst_dsp {int dev; } ;


 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (int ,char*,int) ;
 struct sst_module* FUNC_2 (struct sst_dsp*,int) ;
 int FUNC_3 (struct sst_module_runtime*,int) ;
 int FUNC_4 (struct sst_module_runtime*) ;
 struct sst_module_runtime* FUNC_5 (struct sst_module*,int,int *) ;

struct sst_module_runtime *FUNC_6(struct sst_hsw *VAR_0,
 int VAR_1, int VAR_2)
{
 struct sst_dsp *VAR_3 = VAR_0->dsp;
 struct sst_module *VAR_4;
 struct sst_module_runtime *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_2(VAR_3, VAR_1);
 if (VAR_4 == ((void*)0)) {
  FUNC_1(VAR_3->dev, "error: failed to get module %d for pcm\n",
   VAR_1);
  return ((void*)0);
 }

 VAR_5 = FUNC_5(VAR_4, VAR_1, ((void*)0));
 if (VAR_5 == ((void*)0)) {
  FUNC_1(VAR_3->dev, "error: failed to create module %d runtime\n",
   VAR_1);
  return ((void*)0);
 }

 VAR_6 = FUNC_3(VAR_5, VAR_2);
 if (VAR_6 < 0) {
  FUNC_1(VAR_3->dev, "error: failed to alloc blocks for module %d runtime\n",
   VAR_1);
  FUNC_4(VAR_5);
  return ((void*)0);
 }

 FUNC_0(VAR_3->dev, "runtime id %d created for module %d\n", VAR_5->id,
  VAR_1);
 return VAR_5;
}
