
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int base; } ;
struct TYPE_3__ {scalar_t__ prev; } ;
struct mmap {TYPE_2__ auxtrace_mmap; TYPE_1__ core; } ;


 scalar_t__ FUNC_0 (struct mmap*) ;

__attribute__((used)) static bool FUNC_1(struct mmap *VAR_0)
{
 return FUNC_0(VAR_0) == VAR_0->core.prev && !VAR_0->auxtrace_mmap.base;
}
