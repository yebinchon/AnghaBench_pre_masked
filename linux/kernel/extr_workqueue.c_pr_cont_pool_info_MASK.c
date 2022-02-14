
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct worker_pool {scalar_t__ node; TYPE_1__* attrs; int flags; } ;
struct TYPE_2__ {int nice; int cpumask; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,scalar_t__,...) ;

__attribute__((used)) static void FUNC_1(struct worker_pool *VAR_2)
{
 FUNC_0(" cpus=%*pbl", VAR_1, VAR_2->attrs->cpumask);
 if (VAR_2->node != VAR_0)
  FUNC_0(" node=%d", VAR_2->node);
 FUNC_0(" flags=0x%x nice=%d", VAR_2->flags, VAR_2->attrs->nice);
}
