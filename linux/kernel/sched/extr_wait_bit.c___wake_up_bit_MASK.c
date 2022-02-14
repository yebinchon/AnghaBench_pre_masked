
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wait_queue_head {int dummy; } ;
struct wait_bit_key {int dummy; } ;


 int VAR_0 ;
 struct wait_bit_key FUNC_0 (void*,int) ;
 int FUNC_1 (struct wait_queue_head*,int ,int,struct wait_bit_key*) ;
 scalar_t__ FUNC_2 (struct wait_queue_head*) ;

void FUNC_3(struct wait_queue_head *VAR_1, void *VAR_2, int VAR_3)
{
 struct wait_bit_key VAR_4 = FUNC_0(VAR_2, VAR_3);

 if (FUNC_2(VAR_1))
  FUNC_1(VAR_1, VAR_0, 1, &VAR_4);
}
