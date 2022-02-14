
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct probe_trace_arg_ref {int offset; struct probe_trace_arg_ref* next; } ;
struct probe_trace_arg {char* value; scalar_t__ type; struct probe_trace_arg_ref* ref; scalar_t__ name; } ;


 int FUNC_0 (struct probe_trace_arg_ref*,struct strbuf*,int) ;
 int FUNC_1 (struct strbuf*,char) ;
 int FUNC_2 (struct strbuf*,char*,char*,...) ;
 int FUNC_3 (struct strbuf*,char*) ;

__attribute__((used)) static int FUNC_4(struct probe_trace_arg *VAR_0,
          struct strbuf *VAR_1)
{
 struct probe_trace_arg_ref *VAR_2 = VAR_0->ref;
 int VAR_3 = 0, VAR_4;


 if (VAR_0->name)
  VAR_4 = FUNC_2(VAR_1, " %s=", VAR_0->name);
 else
  VAR_4 = FUNC_1(VAR_1, ' ');
 if (VAR_4)
  return VAR_4;


 if (VAR_0->value[0] == '@' && VAR_0->ref)
   VAR_2 = VAR_2->next;


 if (VAR_2) {
  VAR_3 = FUNC_0(VAR_2, VAR_1, 1);
  if (VAR_3 < 0)
   return VAR_3;
 }


 if (VAR_0->value[0] == '@' && VAR_0->ref)
  VAR_4 = FUNC_2(VAR_1, "%s%+ld", VAR_0->value, VAR_0->ref->offset);
 else
  VAR_4 = FUNC_3(VAR_1, VAR_0->value);


 while (!VAR_4 && VAR_3--)
  VAR_4 = FUNC_1(VAR_1, ')');


 if (!VAR_4 && VAR_0->type)
  VAR_4 = FUNC_2(VAR_1, ":%s", VAR_0->type);

 return VAR_4;
}
