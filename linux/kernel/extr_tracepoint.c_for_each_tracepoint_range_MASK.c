
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tracepoint_ptr_t ;


 struct tracepoint* FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(
  tracepoint_ptr_t *VAR_0, tracepoint_ptr_t *VAR_1,
  void (*VAR_2)(struct tracepoint *VAR_3, void *VAR_4),
  void *VAR_5)
{
 tracepoint_ptr_t *VAR_6;

 if (!VAR_0)
  return;
 for (VAR_6 = VAR_0; VAR_6 < VAR_1; VAR_6++)
  VAR_2(FUNC_0(VAR_6), VAR_5);
}
