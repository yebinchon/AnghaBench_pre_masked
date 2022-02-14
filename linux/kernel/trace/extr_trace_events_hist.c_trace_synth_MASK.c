
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int (* synth_probe_func_t ) (void*,int *,unsigned int) ;
struct tracepoint_func {void* data; int (* func ) (void*,int *,unsigned int) ;} ;
struct TYPE_2__ {int enabled; } ;
struct tracepoint {int funcs; TYPE_1__ key; } ;
struct synth_event {struct tracepoint* tp; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 struct tracepoint_func* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static inline void FUNC_5(struct synth_event *VAR_0, u64 *VAR_1,
          unsigned int VAR_2)
{
 struct tracepoint *VAR_3 = VAR_0->tp;

 if (FUNC_4(FUNC_0(&VAR_3->key.enabled) > 0)) {
  struct tracepoint_func *VAR_4;
  synth_probe_func_t VAR_5;
  void *VAR_6;

  if (!(FUNC_1(FUNC_2())))
   return;

  VAR_4 = FUNC_3((VAR_3)->funcs);
  if (VAR_4) {
   do {
    VAR_5 = VAR_4->func;
    VAR_6 = VAR_4->data;
    VAR_5(VAR_6, VAR_1, VAR_2);
   } while ((++VAR_4)->func);
  }
 }
}
