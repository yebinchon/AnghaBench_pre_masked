
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tracepoint_func {void* data; void* func; } ;
struct tracepoint {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tracepoint*,struct tracepoint_func*) ;
 int VAR_0 ;

int FUNC_3(struct tracepoint *VAR_1, void *VAR_2, void *VAR_3)
{
 struct tracepoint_func VAR_4;
 int VAR_5;

 FUNC_0(&VAR_0);
 VAR_4.func = VAR_2;
 VAR_4.data = VAR_3;
 VAR_5 = FUNC_2(VAR_1, &VAR_4);
 FUNC_1(&VAR_0);
 return VAR_5;
}
