
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct annotation {int nr_events; TYPE_1__* options; } ;
struct TYPE_2__ {scalar_t__ show_total_period; } ;



__attribute__((used)) static inline int FUNC_0(struct annotation *VAR_0)
{
 return (VAR_0->options->show_total_period ? 12 : 7) * VAR_0->nr_events;
}
