
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tracepoint_func {int prio; void* data; void* func; } ;
struct tracepoint {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tracepoint*,struct tracepoint_func*,int) ;
 int VAR_0 ;

int FUNC_3(struct tracepoint *VAR_1, void *VAR_2,
       void *VAR_3, int VAR_4)
{
 struct tracepoint_func VAR_5;
 int VAR_6;

 FUNC_0(&VAR_0);
 VAR_5.func = VAR_2;
 VAR_5.data = VAR_3;
 VAR_5.prio = VAR_4;
 VAR_6 = FUNC_2(VAR_1, &VAR_5, VAR_4);
 FUNC_1(&VAR_0);
 return VAR_6;
}
