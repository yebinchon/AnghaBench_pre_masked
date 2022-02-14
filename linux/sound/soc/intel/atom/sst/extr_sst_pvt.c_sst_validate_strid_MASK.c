
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_streams; } ;
struct intel_sst_drv {TYPE_1__ info; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int) ;

int FUNC_1(
  struct intel_sst_drv *VAR_1, int VAR_2)
{
 if (VAR_2 <= 0 || VAR_2 > VAR_1->info.max_streams) {
  FUNC_0(VAR_1->dev,
   "SST ERR: invalid stream id : %d, max %d\n",
   VAR_2, VAR_1->info.max_streams);
  return -VAR_0;
 }

 return 0;
}
