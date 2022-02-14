
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* insns; } ;
struct TYPE_5__ {void* insns; TYPE_1__ ptr; } ;
struct TYPE_6__ {TYPE_2__ u; scalar_t__ fill_helper; } ;


 TYPE_3__* VAR_0 ;

__attribute__((used)) static void *FUNC_0(int VAR_1)
{
 if (VAR_0[VAR_1].fill_helper)
  return VAR_0[VAR_1].u.ptr.insns;
 else
  return VAR_0[VAR_1].u.insns;
}
