
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_kprobe {int nhit; struct trace_kprobe* symbol; int tp; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct trace_kprobe*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct trace_kprobe *VAR_0)
{
 if (VAR_0) {
  FUNC_2(&VAR_0->tp);
  FUNC_1(VAR_0->symbol);
  FUNC_0(VAR_0->nhit);
  FUNC_1(VAR_0);
 }
}
