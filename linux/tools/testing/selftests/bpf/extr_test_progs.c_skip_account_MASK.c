
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* test; int skip_cnt; } ;
struct TYPE_3__ {scalar_t__ skip_cnt; } ;


 TYPE_2__ VAR_0 ;

__attribute__((used)) static void FUNC_0(void)
{
 if (VAR_0.test->skip_cnt) {
  VAR_0.skip_cnt++;
  VAR_0.test->skip_cnt = 0;
 }
}
