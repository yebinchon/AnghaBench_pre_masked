
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct tracing_map_elt {int dummy; } ;
struct ring_buffer_event {int dummy; } ;
struct hist_field {TYPE_1__* field; } ;
struct TYPE_2__ {int offset; } ;



__attribute__((used)) static u64 FUNC_0(struct hist_field *VAR_0,
    struct tracing_map_elt *VAR_1,
    struct ring_buffer_event *VAR_2,
    void *VAR_3)
{
 u32 VAR_4 = *(u32 *)(VAR_3 + VAR_0->field->offset);
 int VAR_5 = VAR_4 & 0xffff;
 char *VAR_6 = (char *)(VAR_3 + VAR_5);

 return (u64)(unsigned long)VAR_6;
}
