
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct clocksource {int dummy; } ;
struct TYPE_4__ {int (* read ) (TYPE_1__*) ;scalar_t__ (* enable ) (TYPE_1__*) ;} ;


 scalar_t__ FUNC_0 (struct clocksource*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;

void FUNC_4(struct clocksource *VAR_2, u64 VAR_3)
{
 if (!VAR_0)
  return;






 if (FUNC_0(VAR_2)) {
  VAR_1 = VAR_3;
  return;
 }

 if (VAR_0->enable &&
     VAR_0->enable(VAR_0)) {
  FUNC_1("Failed to enable the non-suspend-able clocksource.\n");
  return;
 }

 VAR_1 = VAR_0->read(VAR_0);
}
