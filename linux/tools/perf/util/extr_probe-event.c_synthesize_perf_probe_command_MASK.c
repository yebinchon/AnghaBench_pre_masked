
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct perf_probe_event {int nargs; scalar_t__ args; int point; scalar_t__ event; scalar_t__ group; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct strbuf*,char*,char*,...) ;
 scalar_t__ FUNC_2 (struct strbuf*,char*) ;
 char* FUNC_3 (struct strbuf*,int *) ;
 scalar_t__ FUNC_4 (struct strbuf*,int) ;
 int FUNC_5 (struct strbuf*) ;
 char* FUNC_6 (scalar_t__) ;
 char* FUNC_7 (int *) ;

char *FUNC_8(struct perf_probe_event *VAR_1)
{
 struct strbuf VAR_2;
 char *VAR_3, *VAR_4 = ((void*)0);
 int VAR_5;

 if (FUNC_4(&VAR_2, 64))
  return ((void*)0);
 if (VAR_1->event)
  if (FUNC_1(&VAR_2, "%s:%s=", VAR_1->group ?: VAR_0,
    VAR_1->event) < 0)
   goto out;

 VAR_3 = FUNC_7(&VAR_1->point);
 if (!VAR_3 || FUNC_2(&VAR_2, VAR_3) < 0)
  goto out;
 FUNC_0(VAR_3);

 for (VAR_5 = 0; VAR_5 < VAR_1->nargs; VAR_5++) {
  VAR_3 = FUNC_6(VAR_1->args + VAR_5);
  if (!VAR_3 || FUNC_1(&VAR_2, " %s", VAR_3) < 0)
   goto out;
  FUNC_0(VAR_3);
 }

 VAR_4 = FUNC_3(&VAR_2, ((void*)0));
out:
 FUNC_5(&VAR_2);
 return VAR_4;
}
