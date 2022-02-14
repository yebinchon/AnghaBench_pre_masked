
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hist_field {size_t size; int flags; int offset; struct ftrace_event_field* field; } ;
struct ftrace_event_field {scalar_t__ filter_type; int offset; size_t size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,void*,size_t) ;
 size_t FUNC_1 (void*) ;
 int FUNC_2 (char*,char*,size_t) ;

__attribute__((used)) static inline void FUNC_3(char *VAR_4, void *VAR_5,
         struct hist_field *VAR_6, void *VAR_7)
{
 size_t VAR_8 = VAR_6->size;

 if (VAR_6->flags & VAR_3) {
  struct ftrace_event_field *VAR_9;

  VAR_9 = VAR_6->field;
  if (VAR_9->filter_type == VAR_0)
   VAR_8 = *(u32 *)(VAR_7 + VAR_9->offset) >> 16;
  else if (VAR_9->filter_type == VAR_1)
   VAR_8 = FUNC_1(VAR_5);
  else if (VAR_9->filter_type == VAR_2)
   VAR_8 = VAR_9->size;


  if (VAR_8 > VAR_6->size - 1)
   VAR_8 = VAR_6->size - 1;

  FUNC_2(VAR_4 + VAR_6->offset, (char *)VAR_5, VAR_8);
 } else
  FUNC_0(VAR_4 + VAR_6->offset, VAR_5, VAR_8);
}
