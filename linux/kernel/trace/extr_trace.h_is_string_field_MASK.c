
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ftrace_event_field {scalar_t__ filter_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static inline bool FUNC_0(struct ftrace_event_field *VAR_4)
{
 return VAR_4->filter_type == VAR_1 ||
        VAR_4->filter_type == VAR_3 ||
        VAR_4->filter_type == VAR_2 ||
        VAR_4->filter_type == VAR_0;
}
