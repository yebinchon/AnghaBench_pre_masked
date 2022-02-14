
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_session {int data; } ;


 int VAR_0 ;
 int FUNC_0 (struct perf_session*) ;
 int FUNC_1 (struct perf_session*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct perf_session*) ;

int FUNC_4(struct perf_session *VAR_1)
{
 if (FUNC_3(VAR_1) < 0)
  return -VAR_0;

 if (FUNC_2(VAR_1->data))
  return FUNC_1(VAR_1);

 return FUNC_0(VAR_1);
}
