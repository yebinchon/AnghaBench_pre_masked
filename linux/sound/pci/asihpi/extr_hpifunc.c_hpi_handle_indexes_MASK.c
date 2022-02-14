
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ obj_index; scalar_t__ adapter_index; } ;
union handle_word {TYPE_1__ h; scalar_t__ w; } ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static u16 FUNC_0(const u32 VAR_1, u16 *VAR_2, u16 *VAR_3)
{
 union handle_word VAR_4;
 if (!VAR_1)
  return VAR_0;

 VAR_4.w = VAR_1;

 *VAR_2 = (u16)VAR_4.h.adapter_index;
 if (VAR_3)
  *VAR_3 = (u16)VAR_4.h.obj_index;

 return 0;
}
