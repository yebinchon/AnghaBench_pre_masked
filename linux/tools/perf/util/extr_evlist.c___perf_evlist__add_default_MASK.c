
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evsel {int dummy; } ;
struct evlist {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct evlist*,struct evsel*) ;
 struct evsel* FUNC_1 (int) ;

int FUNC_2(struct evlist *VAR_1, bool VAR_2)
{
 struct evsel *VAR_3 = FUNC_1(VAR_2);

 if (VAR_3 == ((void*)0))
  return -VAR_0;

 FUNC_0(VAR_1, VAR_3);
 return 0;
}
