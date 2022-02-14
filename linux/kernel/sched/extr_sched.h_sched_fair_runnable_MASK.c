
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ nr_running; } ;
struct rq {TYPE_1__ cfs; } ;



__attribute__((used)) static inline bool FUNC_0(struct rq *VAR_0)
{
 return VAR_0->cfs.nr_running > 0;
}
