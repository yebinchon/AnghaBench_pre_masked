
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_stat_config {char* csv_sep; int output; } ;
struct evsel {TYPE_1__* cgrp; } ;
struct TYPE_2__ {char* name; } ;


 int FUNC_0 (int ,char*,char*,char const*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_1(struct perf_stat_config *VAR_1, struct evsel *VAR_2)
{
 if (VAR_0) {
  const char *VAR_3 = VAR_2->cgrp ? VAR_2->cgrp->name : "";
  FUNC_0(VAR_1->output, "%s%s", VAR_1->csv_sep, VAR_3);
 }
}
