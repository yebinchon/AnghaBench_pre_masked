
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct perf_probe_point {char* function; char* offset; char* line; char* file; scalar_t__ retprobe; } ;


 int FUNC_0 (struct strbuf*,char*,char*) ;
 int FUNC_1 (struct strbuf*,char*) ;
 char* FUNC_2 (struct strbuf*,int *) ;
 scalar_t__ FUNC_3 (struct strbuf*,int) ;
 int FUNC_4 (struct strbuf*) ;
 char* FUNC_5 (char*,char) ;
 int FUNC_6 (char*) ;

char *FUNC_7(struct perf_probe_point *VAR_0)
{
 struct strbuf VAR_1;
 char *VAR_2, *VAR_3 = ((void*)0);
 int VAR_4, VAR_5 = 0;

 if (FUNC_3(&VAR_1, 64) < 0)
  return ((void*)0);

 if (VAR_0->function) {
  if (FUNC_1(&VAR_1, VAR_0->function) < 0)
   goto out;
  if (VAR_0->offset)
   VAR_5 = FUNC_0(&VAR_1, "+%lu", VAR_0->offset);
  else if (VAR_0->line)
   VAR_5 = FUNC_0(&VAR_1, ":%d", VAR_0->line);
  else if (VAR_0->retprobe)
   VAR_5 = FUNC_1(&VAR_1, "%return");
  if (VAR_5)
   goto out;
 }
 if (VAR_0->file) {
  VAR_2 = VAR_0->file;
  VAR_4 = FUNC_6(VAR_2);
  if (VAR_4 > 30) {
   VAR_2 = FUNC_5(VAR_0->file + VAR_4 - 30, '/');
   VAR_2 = VAR_2 ? VAR_2 + 1 : VAR_0->file + VAR_4 - 30;
  }
  VAR_5 = FUNC_0(&VAR_1, "@%s", VAR_2);
  if (!VAR_5 && !VAR_0->function && VAR_0->line)
   VAR_5 = FUNC_0(&VAR_1, ":%d", VAR_0->line);
 }
 if (!VAR_5)
  VAR_3 = FUNC_2(&VAR_1, ((void*)0));
out:
 FUNC_4(&VAR_1);
 return VAR_3;
}
