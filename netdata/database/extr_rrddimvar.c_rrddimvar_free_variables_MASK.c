
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__* rrdset; } ;
struct TYPE_11__ {int * key_fullnamename; int * key_fullnameid; int * key_contextname; int * key_contextid; int * key_fullidname; int * key_fullidid; int * key_name; int * key_id; int * var_host_chartnamename; int * var_host_chartnameid; int * var_host_chartidname; int * var_host_chartidid; int * var_family_contextname; int * var_family_contextid; int * var_family_name; int * var_family_id; int * var_local_name; int * var_local_id; TYPE_5__* rrddim; } ;
struct TYPE_10__ {int rrdvar_root_index; } ;
struct TYPE_9__ {TYPE_1__* rrdfamily; int rrdvar_root_index; TYPE_3__* rrdhost; } ;
struct TYPE_8__ {int rrdvar_root_index; } ;
typedef TYPE_2__ RRDSET ;
typedef TYPE_3__ RRDHOST ;
typedef TYPE_4__ RRDDIMVAR ;
typedef TYPE_5__ RRDDIM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*,int *,int *) ;

__attribute__((used)) static inline void FUNC_2(RRDDIMVAR *VAR_0) {
    RRDDIM *VAR_1 = VAR_0->rrddim;
    RRDSET *VAR_2 = VAR_1->rrdset;
    RRDHOST *VAR_3 = VAR_2->rrdhost;



    FUNC_1(VAR_3, &VAR_2->rrdvar_root_index, VAR_0->var_local_id);
    VAR_0->var_local_id = ((void*)0);

    FUNC_1(VAR_3, &VAR_2->rrdvar_root_index, VAR_0->var_local_name);
    VAR_0->var_local_name = ((void*)0);



    FUNC_1(VAR_3, &VAR_2->rrdfamily->rrdvar_root_index, VAR_0->var_family_id);
    VAR_0->var_family_id = ((void*)0);

    FUNC_1(VAR_3, &VAR_2->rrdfamily->rrdvar_root_index, VAR_0->var_family_name);
    VAR_0->var_family_name = ((void*)0);

    FUNC_1(VAR_3, &VAR_2->rrdfamily->rrdvar_root_index, VAR_0->var_family_contextid);
    VAR_0->var_family_contextid = ((void*)0);

    FUNC_1(VAR_3, &VAR_2->rrdfamily->rrdvar_root_index, VAR_0->var_family_contextname);
    VAR_0->var_family_contextname = ((void*)0);



    FUNC_1(VAR_3, &VAR_3->rrdvar_root_index, VAR_0->var_host_chartidid);
    VAR_0->var_host_chartidid = ((void*)0);

    FUNC_1(VAR_3, &VAR_3->rrdvar_root_index, VAR_0->var_host_chartidname);
    VAR_0->var_host_chartidname = ((void*)0);

    FUNC_1(VAR_3, &VAR_3->rrdvar_root_index, VAR_0->var_host_chartnameid);
    VAR_0->var_host_chartnameid = ((void*)0);

    FUNC_1(VAR_3, &VAR_3->rrdvar_root_index, VAR_0->var_host_chartnamename);
    VAR_0->var_host_chartnamename = ((void*)0);



    FUNC_0(VAR_0->key_id);
    VAR_0->key_id = ((void*)0);

    FUNC_0(VAR_0->key_name);
    VAR_0->key_name = ((void*)0);

    FUNC_0(VAR_0->key_fullidid);
    VAR_0->key_fullidid = ((void*)0);

    FUNC_0(VAR_0->key_fullidname);
    VAR_0->key_fullidname = ((void*)0);

    FUNC_0(VAR_0->key_contextid);
    VAR_0->key_contextid = ((void*)0);

    FUNC_0(VAR_0->key_contextname);
    VAR_0->key_contextname = ((void*)0);

    FUNC_0(VAR_0->key_fullnameid);
    VAR_0->key_fullnameid = ((void*)0);

    FUNC_0(VAR_0->key_fullnamename);
    VAR_0->key_fullnamename = ((void*)0);
}
