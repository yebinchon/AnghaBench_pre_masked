
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * addr; scalar_t__ symbol_name; int list; int hlist; } ;
struct TYPE_3__ {TYPE_2__ kp; } ;
struct trace_kprobe {TYPE_1__ rp; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct trace_kprobe*) ;
 scalar_t__ FUNC_3 (struct trace_kprobe*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(struct trace_kprobe *VAR_0)
{
 if (FUNC_2(VAR_0)) {
  if (FUNC_3(VAR_0))
   FUNC_5(&VAR_0->rp);
  else
   FUNC_4(&VAR_0->rp.kp);

  FUNC_0(&VAR_0->rp.kp.hlist);
  FUNC_1(&VAR_0->rp.kp.list);
  if (VAR_0->rp.kp.symbol_name)
   VAR_0->rp.kp.addr = ((void*)0);
 }
}
