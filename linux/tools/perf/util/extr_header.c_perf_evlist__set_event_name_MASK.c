
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evsel {scalar_t__ name; int idx; } ;
struct evlist {int dummy; } ;


 struct evsel* FUNC_0 (struct evlist*,int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct evlist *VAR_0,
       struct evsel *VAR_1)
{
 struct evsel *VAR_2;

 if (!VAR_1->name)
  return;

 VAR_2 = FUNC_0(VAR_0, VAR_1->idx);
 if (!VAR_2)
  return;

 if (VAR_2->name)
  return;

 VAR_2->name = FUNC_1(VAR_1->name);
}
