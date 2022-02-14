
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int threads; int own_cpus; int cpus; int node; } ;
struct evsel {int name; int group_name; TYPE_2__ core; int cgrp; int * evlist; } ;
struct TYPE_4__ {int (* fini ) (struct evsel*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct evsel*) ;
 int FUNC_5 (struct evsel*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct evsel*) ;
 int FUNC_10 (int *) ;

void FUNC_11(struct evsel *VAR_1)
{
 FUNC_0(FUNC_2(&VAR_1->core.node));
 FUNC_0(VAR_1->evlist == ((void*)0));
 FUNC_5(VAR_1);
 FUNC_6(&VAR_1->core);
 FUNC_7(&VAR_1->core);
 FUNC_4(VAR_1);
 FUNC_1(VAR_1->cgrp);
 FUNC_3(VAR_1->core.cpus);
 FUNC_3(VAR_1->core.own_cpus);
 FUNC_8(VAR_1->core.threads);
 FUNC_10(&VAR_1->group_name);
 FUNC_10(&VAR_1->name);
 VAR_0.fini(VAR_1);
}
