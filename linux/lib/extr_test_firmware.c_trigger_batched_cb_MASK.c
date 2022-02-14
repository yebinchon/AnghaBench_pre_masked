
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct test_batched_req {int completion; struct firmware const* fw; int idx; } ;
struct firmware {int dummy; } ;
struct TYPE_2__ {int test_result; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_2(const struct firmware *VAR_3, void *VAR_4)
{
 struct test_batched_req *VAR_5 = VAR_4;

 if (!VAR_5) {
  VAR_2->test_result = -VAR_0;
  return;
 }


 if (!VAR_5->idx)
  FUNC_1(2);

 VAR_5->fw = VAR_3;







 if (!VAR_3 && !VAR_2->test_result)
  VAR_2->test_result = -VAR_1;

 FUNC_0(&VAR_5->completion);
}
