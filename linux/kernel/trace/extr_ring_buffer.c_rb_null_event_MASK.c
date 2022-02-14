
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer_event {scalar_t__ type_len; int time_delta; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct ring_buffer_event *VAR_1)
{
 return VAR_1->type_len == VAR_0 && !VAR_1->time_delta;
}
