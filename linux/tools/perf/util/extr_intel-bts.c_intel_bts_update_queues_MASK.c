
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int new_data; } ;
struct intel_bts {TYPE_1__ queues; } ;


 int FUNC_0 (struct intel_bts*) ;

__attribute__((used)) static inline int FUNC_1(struct intel_bts *VAR_0)
{
 if (VAR_0->queues.new_data) {
  VAR_0->queues.new_data = 0;
  return FUNC_0(VAR_0);
 }
 return 0;
}
