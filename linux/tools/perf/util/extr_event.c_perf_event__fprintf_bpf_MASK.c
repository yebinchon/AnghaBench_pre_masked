
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; int flags; int id; } ;
union perf_event {TYPE_1__ bpf; } ;
typedef int FILE ;


 size_t FUNC_0 (int *,char*,int,int,int) ;

size_t FUNC_1(union perf_event *VAR_0, FILE *VAR_1)
{
 return FUNC_0(VAR_1, " type %u, flags %u, id %u\n",
         VAR_0->bpf.type, VAR_0->bpf.flags, VAR_0->bpf.id);
}
