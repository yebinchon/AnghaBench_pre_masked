
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ obj_type; } ;
union handle_word {TYPE_1__ h; int w; } ;
typedef int u32 ;



char FUNC_0(const u32 VAR_0)
{
 union handle_word VAR_1;
 VAR_1.w = VAR_0;
 return (char)VAR_1.h.obj_type;
}
