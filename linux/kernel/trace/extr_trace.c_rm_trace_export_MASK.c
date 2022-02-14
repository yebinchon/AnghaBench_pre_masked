
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_export {struct trace_export* next; } ;


 int FUNC_0 (struct trace_export*,struct trace_export*) ;

__attribute__((used)) static inline int
FUNC_1(struct trace_export **VAR_0, struct trace_export *VAR_1)
{
 struct trace_export **VAR_2;

 for (VAR_2 = VAR_0; *VAR_2 != ((void*)0); VAR_2 = &(*VAR_2)->next)
  if (*VAR_2 == VAR_1)
   break;

 if (*VAR_2 != VAR_1)
  return -1;

 FUNC_0(*VAR_2, (*VAR_2)->next);

 return 0;
}
