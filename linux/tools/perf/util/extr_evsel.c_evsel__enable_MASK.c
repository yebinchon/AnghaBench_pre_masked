
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evsel {int disabled; int core; } ;


 int FUNC_0 (int *) ;

int FUNC_1(struct evsel *VAR_0)
{
 int VAR_1 = FUNC_0(&VAR_0->core);

 if (!VAR_1)
  VAR_0->disabled = 0;

 return VAR_1;
}
