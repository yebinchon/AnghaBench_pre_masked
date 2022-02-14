
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* field; } ;
struct tep_filter_arg {TYPE_2__ field; } ;
struct tep_event_filter {int dummy; } ;
struct TYPE_3__ {int name; } ;


 char* FUNC_0 (int ) ;

__attribute__((used)) static char *FUNC_1(struct tep_event_filter *VAR_0, struct tep_filter_arg *VAR_1)
{
 return FUNC_0(VAR_1->field.field->name);
}
