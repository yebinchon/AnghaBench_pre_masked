
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char obj_type; int obj_index; scalar_t__ read_only; scalar_t__ spare; int adapter_index; } ;
union handle_word {int w; TYPE_1__ h; } ;
typedef int u32 ;
typedef int u16 ;



u32 FUNC_0(const char VAR_0, const u16 VAR_1,
 const u16 VAR_2)
{
 union handle_word VAR_3;

 VAR_3.h.adapter_index = VAR_1;
 VAR_3.h.spare = 0;
 VAR_3.h.read_only = 0;
 VAR_3.h.obj_type = VAR_0;
 VAR_3.h.obj_index = VAR_2;
 return VAR_3.w;
}
