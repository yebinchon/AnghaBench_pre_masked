
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* flags; void* aux_size; void* aux_offset; } ;
union perf_event {TYPE_1__ aux; } ;


 void* FUNC_0 (void*) ;
 int FUNC_1 (union perf_event*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(union perf_event *VAR_0, bool VAR_1)
{
 VAR_0->aux.aux_offset = FUNC_0(VAR_0->aux.aux_offset);
 VAR_0->aux.aux_size = FUNC_0(VAR_0->aux.aux_size);
 VAR_0->aux.flags = FUNC_0(VAR_0->aux.flags);

 if (VAR_1)
  FUNC_1(VAR_0, &VAR_0->aux + 1);
}
