
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stream_info {int dummy; } ;
struct intel_sst_drv {int dev; int * streams; } ;


 int FUNC_0 (int ,char*,unsigned int) ;
 struct stream_info* FUNC_1 (struct intel_sst_drv*,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct intel_sst_drv*,unsigned int) ;

int FUNC_4(struct intel_sst_drv *VAR_0, unsigned int VAR_1)
{
 struct stream_info *VAR_2;
 int VAR_3 = 0;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2) {

  VAR_3 = FUNC_3(VAR_0, VAR_1);
  if (VAR_3)
   FUNC_2(&VAR_0->streams[VAR_1]);
  return VAR_3;
 } else {
  FUNC_0(VAR_0->dev, "we tried to free stream context %d which was freed!!!\n", VAR_1);
 }
 return VAR_3;
}
