
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct record_opts {int dummy; } ;
struct evsel {int dummy; } ;
struct callchain_param {scalar_t__ enabled; } ;


 void FUNC_0 (struct evsel*,struct record_opts*,struct callchain_param*) ;

void FUNC_1(struct evsel *VAR_0,
      struct record_opts *VAR_1,
      struct callchain_param *VAR_2)
{
 if (VAR_2->enabled)
  return FUNC_0(VAR_0, VAR_1, VAR_2);
}
