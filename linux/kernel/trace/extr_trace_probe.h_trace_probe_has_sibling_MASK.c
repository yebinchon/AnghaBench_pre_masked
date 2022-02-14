
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_probe {int dummy; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (struct list_head*) ;
 int FUNC_1 (struct list_head*) ;
 struct list_head* FUNC_2 (struct trace_probe*) ;

__attribute__((used)) static inline bool FUNC_3(struct trace_probe *VAR_0)
{
 struct list_head *VAR_1 = FUNC_2(VAR_0);

 return !FUNC_0(VAR_1) && !FUNC_1(VAR_1);
}
