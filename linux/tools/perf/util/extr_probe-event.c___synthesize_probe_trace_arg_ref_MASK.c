
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct probe_trace_arg_ref {int offset; struct probe_trace_arg_ref* next; } ;


 int FUNC_0 (struct strbuf*,char*,int ) ;

__attribute__((used)) static int FUNC_1(struct probe_trace_arg_ref *VAR_0,
         struct strbuf *VAR_1, int VAR_2)
{
 int VAR_3;
 if (VAR_0->next) {
  VAR_2 = FUNC_1(VAR_0->next, VAR_1,
        VAR_2 + 1);
  if (VAR_2 < 0)
   return VAR_2;
 }
 VAR_3 = FUNC_0(VAR_1, "%+ld(", VAR_0->offset);
 return (VAR_3 < 0) ? VAR_3 : VAR_2;
}
