
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tep_format_field {int dummy; } ;
struct TYPE_2__ {int fields; int nr_fields; } ;
struct tep_event {TYPE_1__ format; int name; } ;


 struct tep_format_field** FUNC_0 (char*,int ,int ,int ) ;

struct tep_format_field **FUNC_1(struct tep_event *VAR_0)
{
 return FUNC_0("event", VAR_0->name,
    VAR_0->format.nr_fields,
    VAR_0->format.fields);
}
