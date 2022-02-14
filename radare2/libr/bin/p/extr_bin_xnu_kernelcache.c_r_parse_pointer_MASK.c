
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_8__ {TYPE_1__* rebase_info; } ;
struct TYPE_7__ {int address; } ;
struct TYPE_6__ {int kernel_base; } ;
typedef TYPE_2__ RParsedPointer ;
typedef TYPE_3__ RKernelCacheObj ;



__attribute__((used)) static bool FUNC_0(RParsedPointer *VAR_0, ut64 VAR_1, RKernelCacheObj *VAR_2) {





 if ((VAR_1 & 0x4000000000000000LL) == 0 && VAR_2->rebase_info) {
  if (VAR_1 & 0x8000000000000000LL) {
   VAR_0->address = VAR_2->rebase_info->kernel_base + (VAR_1 & 0xFFFFFFFFLL);
  } else {
   VAR_0->address = ((VAR_1 << 13) & 0xFF00000000000000LL) | (VAR_1 & 0x7ffffffffffLL);
   if (VAR_1 & 0x40000000000LL) {
    VAR_0->address |= 0xfffc0000000000LL;
   }
  }
 } else {
  VAR_0->address = VAR_1;
 }

 return 1;
}
