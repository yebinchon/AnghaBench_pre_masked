
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ u32 ;
struct TYPE_3__ {scalar_t__ address; scalar_t__ size; int org_address; } ;
typedef TYPE_1__ smmu_mem_info_t ;
struct TYPE_4__ {TYPE_1__* adsl_mem_info; } ;
typedef int DSL_DEV_Device_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__,unsigned long) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int
FUNC_2 (DSL_DEV_Device_t * VAR_6, int VAR_7)
{
 int VAR_8 = 0;
 smmu_mem_info_t *VAR_9 =
  FUNC_0(VAR_6)->adsl_mem_info;

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {

  if (VAR_8 == VAR_4)
   continue;
  FUNC_1 (VAR_6, (u32) VAR_3 + VAR_8 * 4,
   (((uint32_t) VAR_9[VAR_8].address) & 0x0FFFFFFF));
 }
 for (VAR_8 = VAR_7; VAR_8 < VAR_1; VAR_8++) {
  if (VAR_8 == VAR_4)
   continue;
  FUNC_1 (VAR_6, (u32) VAR_3 + VAR_8 * 4,
    (((uint32_t)VAR_9[VAR_7 - 1].address) & 0x0FFFFFFF));

  VAR_9[VAR_8].address = VAR_9[VAR_7 - 1].address;
  VAR_9[VAR_8].org_address = VAR_9[VAR_7 - 1].org_address;
  VAR_9[VAR_8].size = 0;
 }

    VAR_5 = VAR_9[VAR_4].address;
 FUNC_1 (VAR_6, (u32) VAR_3 + VAR_4 * 4,
  (((uint32_t) VAR_9 [VAR_4].address) & 0x0FFFFFFF));

 FUNC_1 (VAR_6, (u32) VAR_2,
   ((unsigned long)VAR_9[VAR_4].address) & 0x0FFFFFFF);

 return VAR_0;
}
