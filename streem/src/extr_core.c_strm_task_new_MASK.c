
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strm_task {int data; int func; } ;
typedef int strm_value ;
typedef int strm_callback ;


 struct strm_task* FUNC_0 (int) ;

struct strm_task*
FUNC_1(strm_callback VAR_0, strm_value VAR_1)
{
  struct strm_task *VAR_2;

  VAR_2 = FUNC_0(sizeof(struct strm_task));
  VAR_2->func = VAR_0;
  VAR_2->data = VAR_1;

  return VAR_2;
}
