
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {int max_streams; } ;
struct intel_sst_drv {int dev; TYPE_2__* streams; TYPE_1__ info; } ;
struct TYPE_4__ {scalar_t__ pipe_id; } ;


 int FUNC_0 (int ,char*,scalar_t__) ;

int FUNC_1(struct intel_sst_drv *VAR_0,
  u32 VAR_1)
{
 int VAR_2;

 for (VAR_2 = 1; VAR_2 <= VAR_0->info.max_streams; VAR_2++)
  if (VAR_1 == VAR_0->streams[VAR_2].pipe_id)
   return VAR_2;

 FUNC_0(VAR_0->dev, "no such pipe_id(%u)", VAR_1);
 return -1;
}
