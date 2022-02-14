
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; } ;
union perf_event {TYPE_1__ header; } ;
typedef int u64 ;
struct perf_sample {int dummy; } ;


 int FUNC_0 (struct perf_sample*,int ,int ) ;
 int FUNC_1 (union perf_event*,int ,int ,struct perf_sample*) ;

__attribute__((used)) static int FUNC_2(union perf_event *VAR_0,
     struct perf_sample *VAR_1, u64 VAR_2)
{
 VAR_0->header.size = FUNC_0(VAR_1, VAR_2, 0);
 return FUNC_1(VAR_0, VAR_2, 0, VAR_1);
}
