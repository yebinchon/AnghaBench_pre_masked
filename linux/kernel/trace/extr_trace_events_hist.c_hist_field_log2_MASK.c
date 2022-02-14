
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct tracing_map_elt {int dummy; } ;
struct ring_buffer_event {int dummy; } ;
struct hist_field {int (* fn ) (struct hist_field*,struct tracing_map_elt*,struct ring_buffer_event*,void*) ;struct hist_field** operands; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hist_field*,struct tracing_map_elt*,struct ring_buffer_event*,void*) ;

__attribute__((used)) static u64 FUNC_3(struct hist_field *VAR_0,
      struct tracing_map_elt *VAR_1,
      struct ring_buffer_event *VAR_2,
      void *VAR_3)
{
 struct hist_field *VAR_4 = VAR_0->operands[0];

 u64 VAR_5 = VAR_4->fn(VAR_4, VAR_1, VAR_2, VAR_3);

 return (u64) FUNC_0(FUNC_1(VAR_5));
}
