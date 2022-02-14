
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evsel {int * cgrp; } ;
struct cgroup {int dummy; } ;


 int * FUNC_0 (struct cgroup*) ;

__attribute__((used)) static void FUNC_1(struct evsel *VAR_0, struct cgroup *VAR_1)
{
 if (VAR_0->cgrp == ((void*)0))
  VAR_0->cgrp = FUNC_0(VAR_1);
}
