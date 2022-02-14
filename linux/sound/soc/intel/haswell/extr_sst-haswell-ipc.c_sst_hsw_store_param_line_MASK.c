
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sst_hsw {int param_idx_w; int * param_buf; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int *,int ) ;

int FUNC_2(struct sst_hsw *VAR_3, u8 *VAR_4)
{

 if (VAR_3->param_idx_w > VAR_2 - 1) {
  FUNC_0(VAR_3->dev, "warning: param buffer overflow!\n");
  return -VAR_0;
 }
 FUNC_1(VAR_3->param_buf[VAR_3->param_idx_w], VAR_4, VAR_1);
 VAR_3->param_idx_w++;
 return 0;
}
