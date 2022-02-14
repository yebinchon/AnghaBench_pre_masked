
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_probe {TYPE_1__* event; } ;
struct list_head {int dummy; } ;
struct TYPE_2__ {struct list_head probes; } ;



__attribute__((used)) static inline struct list_head *FUNC_0(struct trace_probe *VAR_0)
{
 return &VAR_0->event->probes;
}
