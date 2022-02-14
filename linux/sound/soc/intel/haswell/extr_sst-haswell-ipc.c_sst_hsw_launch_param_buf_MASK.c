
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst_hsw {int param_idx_w; int ** param_buf; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct sst_hsw*,int ) ;
 int FUNC_2 (struct sst_hsw*,int ,int ,int ,int ,int *) ;

int FUNC_3(struct sst_hsw *VAR_2)
{
 int VAR_3, VAR_4;

 if (!FUNC_1(VAR_2, VAR_0)) {
  FUNC_0(VAR_2->dev, "module waves is not active\n");
  return 0;
 }


 for (VAR_4 = 0; VAR_4 < VAR_2->param_idx_w; VAR_4++) {
  VAR_3 = FUNC_2(VAR_2,
   VAR_0, 0, VAR_2->param_buf[VAR_4][0],
   VAR_1, VAR_2->param_buf[VAR_4]);
  if (VAR_3 < 0)
   return VAR_3;
 }
 return 0;
}
