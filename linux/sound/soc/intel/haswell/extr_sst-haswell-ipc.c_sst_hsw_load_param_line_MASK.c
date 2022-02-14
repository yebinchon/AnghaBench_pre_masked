
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sst_hsw {int param_idx_r; scalar_t__** param_buf; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__*,scalar_t__*,int ) ;

int FUNC_2(struct sst_hsw *VAR_2, u8 *VAR_3)
{
 u8 VAR_4 = 0;


 while (VAR_2->param_idx_r < VAR_1) {
  VAR_4 = VAR_2->param_buf[VAR_2->param_idx_r][0];
  VAR_2->param_idx_r++;
  if (VAR_3[0] == VAR_4) {
   FUNC_1(VAR_3, VAR_2->param_buf[VAR_2->param_idx_r],
    VAR_0);
   break;
  }
 }
 if (VAR_2->param_idx_r > VAR_1 - 1) {
  FUNC_0(VAR_2->dev, "end of buffer, roll to the beginning\n");
  VAR_2->param_idx_r = 0;
  return 0;
 }
 return 0;
}
