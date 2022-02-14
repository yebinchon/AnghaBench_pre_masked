
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ftrace_event_field {scalar_t__ filter_type; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct ftrace_event_field *VAR_1)
{
 return VAR_1->filter_type == VAR_0;
}
