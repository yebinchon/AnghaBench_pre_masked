
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_event_call {struct module* mod; int list; } ;
struct module {int dummy; } ;


 int FUNC_0 (struct trace_event_call*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int
FUNC_2(struct trace_event_call *VAR_1, struct module *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3 < 0)
  return VAR_3;

 FUNC_1(&VAR_1->list, &VAR_0);
 VAR_1->mod = VAR_2;

 return 0;
}
