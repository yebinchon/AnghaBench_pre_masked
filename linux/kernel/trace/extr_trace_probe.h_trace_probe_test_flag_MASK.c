
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_probe {TYPE_1__* event; } ;
struct TYPE_2__ {unsigned int flags; } ;



__attribute__((used)) static inline bool FUNC_0(struct trace_probe *VAR_0,
      unsigned int VAR_1)
{
 return !!(VAR_0->event->flags & VAR_1);
}
