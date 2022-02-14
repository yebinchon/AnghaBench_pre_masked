
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_header {void* size; void* misc; int type; } ;


 void* FUNC_0 (void*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct perf_event_header *VAR_0)
{
 VAR_0->type = FUNC_1(VAR_0->type);
 VAR_0->misc = FUNC_0(VAR_0->misc);
 VAR_0->size = FUNC_0(VAR_0->size);
}
