
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_event_file {int flags; } ;


 int VAR_0 ;

__attribute__((used)) static inline bool
FUNC_0(struct trace_event_file *VAR_1)
{
 if (VAR_1->flags & VAR_0)
  return 1;

 return 0;
}
