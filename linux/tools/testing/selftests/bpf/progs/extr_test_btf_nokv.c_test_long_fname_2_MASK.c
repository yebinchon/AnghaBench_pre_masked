
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipv_counts {int v6; } ;
struct dummy_tracepoint_args {int sock; } ;


 struct ipv_counts* FUNC_0 (int *,int*) ;
 int VAR_0 ;

__attribute__((used)) __attribute__((noinline))
static int FUNC_1(struct dummy_tracepoint_args *VAR_1)
{
 struct ipv_counts *VAR_2;
 int VAR_3 = 0;

 if (!VAR_1->sock)
  return 0;

 VAR_2 = FUNC_0(&VAR_0, &VAR_3);
 if (!VAR_2)
  return 0;

 VAR_2->v6++;

 return 0;
}
