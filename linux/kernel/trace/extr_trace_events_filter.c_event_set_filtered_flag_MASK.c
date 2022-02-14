
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_event_file {unsigned long flags; } ;


 unsigned long VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static inline void FUNC_1(struct trace_event_file *VAR_1)
{
 unsigned long VAR_2 = VAR_1->flags;

 VAR_1->flags |= VAR_0;

 if (VAR_2 != VAR_1->flags)
  FUNC_0();
}
