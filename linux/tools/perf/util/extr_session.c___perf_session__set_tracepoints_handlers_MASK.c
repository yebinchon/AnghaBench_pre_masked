
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_session {int evlist; } ;
struct evsel_str_handler {int * handler; int name; } ;
struct evsel {int * handler; } ;


 int VAR_0 ;
 struct evsel* FUNC_0 (int ,int ) ;

int FUNC_1(struct perf_session *VAR_1,
          const struct evsel_str_handler *VAR_2,
          size_t VAR_3)
{
 struct evsel *VAR_4;
 size_t VAR_5;
 int VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {




  VAR_4 = FUNC_0(VAR_1->evlist, VAR_2[VAR_5].name);
  if (VAR_4 == ((void*)0))
   continue;

  VAR_6 = -VAR_0;
  if (VAR_4->handler != ((void*)0))
   goto out;
  VAR_4->handler = VAR_2[VAR_5].handler;
 }

 VAR_6 = 0;
out:
 return VAR_6;
}
