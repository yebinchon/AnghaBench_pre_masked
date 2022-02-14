
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct grub_udf_data {size_t npm; TYPE_3__** pms; TYPE_1__* pds; } ;
typedef scalar_t__ grub_uint32_t ;
typedef size_t grub_uint16_t ;
struct TYPE_5__ {size_t part_num; } ;
struct TYPE_6__ {TYPE_2__ type1; } ;
struct TYPE_4__ {scalar_t__ start; } ;


 int VAR_0 ;
 size_t FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static grub_uint32_t
FUNC_3 (struct grub_udf_data *VAR_1,
      grub_uint16_t VAR_2, grub_uint32_t VAR_3)
{
  VAR_2 = FUNC_0 (VAR_2);

  if (VAR_2 >= VAR_1->npm)
    {
      FUNC_2 (VAR_0, "invalid part ref");
      return 0;
    }

  return (FUNC_1 (VAR_1->pds[VAR_1->pms[VAR_2]->type1.part_num].start)
          + FUNC_1 (VAR_3));
}
