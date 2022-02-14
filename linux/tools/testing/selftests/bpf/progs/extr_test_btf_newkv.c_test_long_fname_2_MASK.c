
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipv_counts {int v6; } ;
struct dummy_tracepoint_args {int sock; } ;


 struct ipv_counts* FUNC_0 (int *,int*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) __attribute__((noinline))
static int FUNC_1(struct dummy_tracepoint_args *VAR_2)
{
 struct ipv_counts *VAR_3;
 int VAR_4 = 0;

 if (!VAR_2->sock)
  return 0;

 VAR_3 = FUNC_0(&VAR_0, &VAR_4);
 if (!VAR_3)
  return 0;

 VAR_3->v6++;


 VAR_3 = FUNC_0(&VAR_1, &VAR_4);
 if (!VAR_3)
  return 0;

 return 0;
}
