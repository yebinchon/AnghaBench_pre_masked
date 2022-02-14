
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int DSL_uint32_t ;
typedef int DSL_DEV_MeiError_t ;
typedef int DSL_DEV_Device_t ;
typedef int DSL_BSP_MemoryAccessType_t ;




 int VAR_0 ;
 int FUNC_0 (int *,int ,int *,int ) ;
 int FUNC_1 (int *,int ,int *,int ) ;

DSL_DEV_MeiError_t
FUNC_2 (DSL_DEV_Device_t * VAR_1,
    DSL_BSP_MemoryAccessType_t VAR_2,
    DSL_uint32_t VAR_3, DSL_uint32_t *VAR_4,
    DSL_uint32_t VAR_5)
{
 DSL_DEV_MeiError_t VAR_6 = VAR_0;
 switch (VAR_2) {
 case 129:
  VAR_6 = FUNC_0 (VAR_1, (u32)VAR_3, (u32*)VAR_4, (u32)VAR_5);
  break;
 case 128:
  VAR_6 = FUNC_1 (VAR_1, (u32)VAR_3, (u32*)VAR_4, (u32)VAR_5);
  break;
 }
 return VAR_0;
}
