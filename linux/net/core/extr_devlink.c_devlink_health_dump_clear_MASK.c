
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devlink_health_reporter {int * dump_fmsg; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct devlink_health_reporter *VAR_0)
{
 if (!VAR_0->dump_fmsg)
  return;
 FUNC_0(VAR_0->dump_fmsg);
 VAR_0->dump_fmsg = ((void*)0);
}
