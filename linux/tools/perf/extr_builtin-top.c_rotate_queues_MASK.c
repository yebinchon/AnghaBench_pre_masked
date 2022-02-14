
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct ordered_events* data; struct ordered_events* in; } ;
struct perf_top {TYPE_1__ qe; } ;
struct ordered_events {int dummy; } ;



__attribute__((used)) static struct ordered_events *FUNC_0(struct perf_top *VAR_0)
{
 struct ordered_events *VAR_1 = VAR_0->qe.in;

 if (VAR_0->qe.in == &VAR_0->qe.data[1])
  VAR_0->qe.in = &VAR_0->qe.data[0];
 else
  VAR_0->qe.in = &VAR_0->qe.data[1];

 return VAR_1;
}
