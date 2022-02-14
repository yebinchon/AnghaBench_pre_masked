
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct perf_probe_event {int nargs; int * args; int point; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char**,char*,char const*,char const*) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct strbuf*,char*,int) ;
 int FUNC_3 (struct strbuf*,char) ;
 int FUNC_4 (struct strbuf*,char*,char const*) ;
 int FUNC_5 (struct strbuf*,char*) ;
 char* FUNC_6 (int *) ;
 char* FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(const char *VAR_2, const char *VAR_3,
         struct perf_probe_event *VAR_4,
         const char *VAR_5,
         struct strbuf *VAR_6)
{
 int VAR_7, VAR_8;
 char *VAR_9;

 if (FUNC_0(&VAR_9, "%s:%s", VAR_2, VAR_3) < 0)
  return -VAR_1;
 VAR_8 = FUNC_4(VAR_6, "  %-20s (on ", VAR_9);
 FUNC_1(VAR_9);
 if (VAR_8)
  return VAR_8;


 VAR_9 = FUNC_7(&VAR_4->point);
 if (!VAR_9)
  return -VAR_0;
 VAR_8 = FUNC_5(VAR_6, VAR_9);
 FUNC_1(VAR_9);

 if (!VAR_8 && VAR_5)
  VAR_8 = FUNC_4(VAR_6, " in %s", VAR_5);

 if (!VAR_8 && VAR_4->nargs > 0) {
  VAR_8 = FUNC_2(VAR_6, " with", 5);
  for (VAR_7 = 0; !VAR_8 && VAR_7 < VAR_4->nargs; VAR_7++) {
   VAR_9 = FUNC_6(&VAR_4->args[VAR_7]);
   if (!VAR_9)
    return -VAR_0;
   VAR_8 = FUNC_4(VAR_6, " %s", VAR_9);
   FUNC_1(VAR_9);
  }
 }
 if (!VAR_8)
  VAR_8 = FUNC_3(VAR_6, ')');

 return VAR_8;
}
