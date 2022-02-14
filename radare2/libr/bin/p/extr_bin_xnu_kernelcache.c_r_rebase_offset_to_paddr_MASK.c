
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ut64 ;
struct section_t {scalar_t__ addr; scalar_t__ vsize; scalar_t__ offset; int last; } ;
struct TYPE_5__ {TYPE_1__* rebase_info; } ;
struct TYPE_4__ {scalar_t__ kernel_base; } ;
typedef TYPE_2__ RKernelCacheObj ;



__attribute__((used)) static ut64 FUNC_0 (RKernelCacheObj *VAR_0, struct section_t *VAR_1, ut64 VAR_2) {
 ut64 VAR_3 = VAR_0->rebase_info->kernel_base + VAR_2;
 int VAR_4 = 0;
 for (; !VAR_1[VAR_4].last; VAR_4++) {
  if (VAR_1[VAR_4].addr <= VAR_3 && VAR_3 < (VAR_1[VAR_4].addr + VAR_1[VAR_4].vsize)) {
   return VAR_1[VAR_4].offset + (VAR_3 - VAR_1[VAR_4].addr);
  }
 }
 return VAR_2;
}
