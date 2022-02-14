
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wait_queue_head {int dummy; } ;


 int FUNC_0 (struct wait_queue_head*,unsigned int,int,int,void*) ;
 scalar_t__ FUNC_1 (int) ;

void FUNC_2(struct wait_queue_head *VAR_0, unsigned int VAR_1,
   int VAR_2, void *VAR_3)
{
 int VAR_4 = 1;

 if (FUNC_1(!VAR_0))
  return;

 if (FUNC_1(VAR_2 != 1))
  VAR_4 = 0;

 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_4, VAR_3);
}
