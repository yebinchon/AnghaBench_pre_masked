
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_sst_drv {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct intel_sst_drv*,int ,int ,int ,int ,int ,int *,int *,int,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct intel_sst_drv *VAR_5)
{
 int VAR_6 = 0;

 VAR_6 = FUNC_1(VAR_5, VAR_4, VAR_1,
   VAR_2, VAR_3, 0, ((void*)0), ((void*)0),
   1, 1, 0, 1);

 if (VAR_6 < 0) {
  FUNC_0(VAR_5->dev, "not suspending FW!!, Err: %d\n", VAR_6);
  return -VAR_0;
 }

 return 0;
}
