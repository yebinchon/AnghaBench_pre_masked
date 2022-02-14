
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct test_batched_req {scalar_t__ fw; } ;
struct TYPE_2__ {size_t num_requests; struct test_batched_req* reqs; } ;


 int FUNC_0 (scalar_t__) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (struct test_batched_req*) ;

__attribute__((used)) static void FUNC_2(void)
{
 struct test_batched_req *VAR_1;
 u8 VAR_2;

 if (!VAR_0->reqs)
  return;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_requests; VAR_2++) {
  VAR_1 = &VAR_0->reqs[VAR_2];
  if (VAR_1->fw)
   FUNC_0(VAR_1->fw);
 }

 FUNC_1(VAR_0->reqs);
 VAR_0->reqs = ((void*)0);
}
