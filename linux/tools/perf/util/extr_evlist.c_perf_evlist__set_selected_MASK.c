
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evsel {int dummy; } ;
struct evlist {struct evsel* selected; } ;



void FUNC_0(struct evlist *VAR_0,
          struct evsel *VAR_1)
{
 VAR_0->selected = VAR_1;
}
