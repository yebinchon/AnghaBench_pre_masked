
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; } ;
struct perf_probe_event {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char const*,char const*,struct perf_probe_event*,char const*,struct strbuf*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (struct strbuf*) ;

int FUNC_4(const char *VAR_1, const char *VAR_2,
     struct perf_probe_event *VAR_3,
     const char *VAR_4, bool VAR_5)
{
 struct strbuf VAR_6 = VAR_0;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, &VAR_6);
 if (VAR_7 >= 0) {
  if (VAR_5)
   FUNC_2("%s\n", VAR_6.buf);
  else
   FUNC_1("%s\n", VAR_6.buf);
 }
 FUNC_3(&VAR_6);

 return VAR_7;
}
