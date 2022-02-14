
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct core_reloc_ints {int s64_field; int u64_field; int s32_field; int u32_field; int s16_field; int u16_field; int s8_field; int u8_field; } ;
struct TYPE_2__ {int out; int in; } ;


 scalar_t__ FUNC_0 (int *,int *) ;
 TYPE_1__ VAR_0 ;

int FUNC_1(void *VAR_1)
{
 struct core_reloc_ints *VAR_2 = (void *)&VAR_0.in;
 struct core_reloc_ints *VAR_3 = (void *)&VAR_0.out;

 if (FUNC_0(&VAR_3->u8_field, &VAR_2->u8_field) ||
     FUNC_0(&VAR_3->s8_field, &VAR_2->s8_field) ||
     FUNC_0(&VAR_3->u16_field, &VAR_2->u16_field) ||
     FUNC_0(&VAR_3->s16_field, &VAR_2->s16_field) ||
     FUNC_0(&VAR_3->u32_field, &VAR_2->u32_field) ||
     FUNC_0(&VAR_3->s32_field, &VAR_2->s32_field) ||
     FUNC_0(&VAR_3->u64_field, &VAR_2->u64_field) ||
     FUNC_0(&VAR_3->s64_field, &VAR_2->s64_field))
  return 1;

 return 0;
}
