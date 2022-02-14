
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int signals; int procs; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;

__attribute__((used)) static inline bool FUNC_3(void)
{
 VAR_0->signals = FUNC_2();
 if (!VAR_0->signals)
  return 0;

 VAR_0->procs = FUNC_0();
 if (!VAR_0->procs)
  return 0;

 return FUNC_1(VAR_0->signals, VAR_1);
}
