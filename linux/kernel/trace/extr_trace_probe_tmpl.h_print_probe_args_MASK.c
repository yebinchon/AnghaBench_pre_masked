
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void u8 ;
struct trace_seq {int dummy; } ;
struct probe_arg {int count; int offset; TYPE_1__* type; int name; } ;
struct TYPE_2__ {int size; int (* print ) (struct trace_seq*,void*,void*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct trace_seq*,void*,void*) ;
 int FUNC_2 (struct trace_seq*,void*,void*) ;
 int FUNC_3 (struct trace_seq*,char*,int ) ;
 int FUNC_4 (struct trace_seq*,char) ;

__attribute__((used)) static inline int
FUNC_5(struct trace_seq *VAR_1, struct probe_arg *VAR_2, int VAR_3,
   u8 *VAR_4, void *VAR_5)
{
 void *VAR_6;
 int VAR_7, VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  struct probe_arg *VAR_9 = VAR_2 + VAR_7;

  FUNC_3(VAR_1, " %s=", VAR_9->name);
  if (FUNC_0(!VAR_9->count)) {
   if (!VAR_9->type->print(VAR_1, VAR_4 + VAR_9->offset, VAR_5))
    return -VAR_0;
   continue;
  }
  FUNC_4(VAR_1, '{');
  VAR_6 = VAR_4 + VAR_9->offset;
  for (VAR_8 = 0; VAR_8 < VAR_9->count; VAR_8++) {
   if (!VAR_9->type->print(VAR_1, VAR_6, VAR_5))
    return -VAR_0;
   FUNC_4(VAR_1, VAR_8 == VAR_9->count - 1 ? '}' : ',');
   VAR_6 += VAR_9->type->size;
  }
 }
 return 0;
}
