
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct tracing_map_elt {int dummy; } ;
struct ring_buffer_event {int dummy; } ;
struct hist_field {TYPE_1__* field; } ;
struct TYPE_2__ {int offset; } ;



__attribute__((used)) static u64 FUNC_0(struct hist_field *VAR_0,
        struct tracing_map_elt *VAR_1,
        struct ring_buffer_event *VAR_2,
        void *VAR_3)
{
 char *VAR_4 = (char *)(VAR_3 + VAR_0->field->offset);

 return (u64)(unsigned long)VAR_4;
}
