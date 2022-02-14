
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sst_block {int dummy; } ;
struct ipc_post {int dummy; } ;
struct intel_sst_drv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ipc_post*) ;
 struct sst_block* FUNC_1 (struct intel_sst_drv*,int ,int ) ;
 int FUNC_2 (struct ipc_post**,int) ;

int FUNC_3(struct ipc_post **VAR_1, bool VAR_2,
  struct intel_sst_drv *VAR_3, struct sst_block **VAR_4,
  u32 VAR_5, u32 VAR_6)
{
 int VAR_7 = 0;

 VAR_7 = FUNC_2(VAR_1, VAR_2);
 if (VAR_7)
  return VAR_7;
 *VAR_4 = FUNC_1(VAR_3, VAR_5, VAR_6);
 if (*VAR_4 == ((void*)0)) {
  FUNC_0(*VAR_1);
  return -VAR_0;
 }
 return VAR_7;
}
