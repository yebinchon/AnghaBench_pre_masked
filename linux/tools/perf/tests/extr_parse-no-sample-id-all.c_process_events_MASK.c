
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union perf_event {int dummy; } perf_event ;
struct evlist {int dummy; } ;


 int FUNC_0 (struct evlist*) ;
 int FUNC_1 (struct evlist**,union perf_event*) ;

__attribute__((used)) static int FUNC_2(union perf_event **VAR_0, size_t VAR_1)
{
 struct evlist *VAR_2 = ((void*)0);
 int VAR_3 = 0;
 size_t VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1 && !VAR_3; VAR_4++)
  VAR_3 = FUNC_1(&VAR_2, VAR_0[VAR_4]);

 FUNC_0(VAR_2);

 return VAR_3;
}
