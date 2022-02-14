
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tracepoint_path {int system; int name; struct tracepoint_path* next; } ;


 int FUNC_0 (struct tracepoint_path*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct tracepoint_path *VAR_0)
{
 while (VAR_0) {
  struct tracepoint_path *VAR_1 = VAR_0;

  VAR_0 = VAR_0->next;
  FUNC_1(&VAR_1->name);
  FUNC_1(&VAR_1->system);
  FUNC_0(VAR_1);
 }
}
