
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct perf_probe_arg_field {char* name; struct perf_probe_arg_field* next; scalar_t__ ref; } ;
struct perf_probe_arg {char* var; int type; scalar_t__ name; struct perf_probe_arg_field* field; } ;


 int FUNC_0 (struct strbuf*,char*,char*,...) ;
 int FUNC_1 (struct strbuf*,char*) ;
 char* FUNC_2 (struct strbuf*,int *) ;
 scalar_t__ FUNC_3 (struct strbuf*,int) ;
 int FUNC_4 (struct strbuf*) ;

char *FUNC_5(struct perf_probe_arg *VAR_0)
{
 struct perf_probe_arg_field *VAR_1 = VAR_0->field;
 struct strbuf VAR_2;
 char *VAR_3 = ((void*)0);
 int VAR_4;

 if (FUNC_3(&VAR_2, 64) < 0)
  return ((void*)0);

 if (VAR_0->name && VAR_0->var)
  VAR_4 = FUNC_0(&VAR_2, "%s=%s", VAR_0->name, VAR_0->var);
 else
  VAR_4 = FUNC_1(&VAR_2, VAR_0->name ?: VAR_0->var);
 if (VAR_4)
  goto out;

 while (VAR_1) {
  if (VAR_1->name[0] == '[')
   VAR_4 = FUNC_1(&VAR_2, VAR_1->name);
  else
   VAR_4 = FUNC_0(&VAR_2, "%s%s", VAR_1->ref ? "->" : ".",
       VAR_1->name);
  VAR_1 = VAR_1->next;
  if (VAR_4)
   goto out;
 }

 if (VAR_0->type)
  if (FUNC_0(&VAR_2, ":%s", VAR_0->type) < 0)
   goto out;

 VAR_3 = FUNC_2(&VAR_2, ((void*)0));
out:
 FUNC_4(&VAR_2);
 return VAR_3;
}
