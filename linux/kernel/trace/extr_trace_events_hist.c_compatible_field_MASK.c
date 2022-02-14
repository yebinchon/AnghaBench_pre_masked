
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ftrace_event_field {scalar_t__ size; scalar_t__ is_signed; int type; int name; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static bool FUNC_1(struct ftrace_event_field *VAR_0,
        struct ftrace_event_field *VAR_1)
{
 if (VAR_0 == VAR_1)
  return 1;
 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
  return 0;
 if (FUNC_0(VAR_0->name, VAR_1->name) != 0)
  return 0;
 if (FUNC_0(VAR_0->type, VAR_1->type) != 0)
  return 0;
 if (VAR_0->size != VAR_1->size)
  return 0;
 if (VAR_0->is_signed != VAR_1->is_signed)
  return 0;

 return 1;
}
