
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int new_data; } ;
struct cs_etm_auxtrace {TYPE_1__ queues; } ;


 int FUNC_0 (struct cs_etm_auxtrace*) ;

__attribute__((used)) static int FUNC_1(struct cs_etm_auxtrace *VAR_0)
{
 if (VAR_0->queues.new_data) {
  VAR_0->queues.new_data = 0;
  return FUNC_0(VAR_0);
 }

 return 0;
}
