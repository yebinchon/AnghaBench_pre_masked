
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* symbol_store_path; struct TYPE_5__* user_agent; struct TYPE_5__* symbol_server; struct TYPE_5__* guid; struct TYPE_5__* dbg_file; } ;
struct TYPE_4__ {scalar_t__ download; TYPE_3__* opt; } ;
typedef TYPE_1__ SPDBDownloader ;


 int FUNC_0 (TYPE_3__*) ;

void FUNC_1(SPDBDownloader *VAR_0) {
 FUNC_0 (VAR_0->opt->dbg_file);
 FUNC_0 (VAR_0->opt->guid);
 FUNC_0 (VAR_0->opt->symbol_server);
 FUNC_0 (VAR_0->opt->user_agent);
 FUNC_0 (VAR_0->opt->symbol_store_path);
 FUNC_0 (VAR_0->opt);
 VAR_0->download = 0;
}
