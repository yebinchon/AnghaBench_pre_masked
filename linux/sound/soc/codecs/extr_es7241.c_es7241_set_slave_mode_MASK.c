
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct es7241_data {int dummy; } ;
struct es7241_clock_mode {int slv_mfs_num; unsigned int* slv_mfs; } ;


 int VAR_0 ;
 int FUNC_0 (struct es7241_data*,int,int) ;

__attribute__((used)) static int FUNC_1(struct es7241_data *VAR_1,
     const struct es7241_clock_mode *VAR_2,
     unsigned int VAR_3)
{
 int VAR_4;

 if (!VAR_3)
  goto out_ok;

 for (VAR_4 = 0; VAR_4 < VAR_2->slv_mfs_num; VAR_4++) {
  if (VAR_2->slv_mfs[VAR_4] == VAR_3)
   goto out_ok;
 }

 return -VAR_0;

out_ok:
 FUNC_0(VAR_1, 1, 1);
 return 0;
}
