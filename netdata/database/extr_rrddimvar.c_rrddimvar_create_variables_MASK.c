
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int name; int id; TYPE_2__* rrdset; } ;
struct TYPE_11__ {int value; int type; void* key_fullnamename; void* var_host_chartnamename; void* key_fullnameid; void* var_host_chartnameid; void* key_fullidname; void* var_host_chartidname; void* key_fullidid; void* var_host_chartidid; void* key_contextname; void* var_family_contextname; void* key_contextid; void* var_family_contextid; void* key_name; void* var_family_name; void* key_id; void* var_family_id; void* var_local_name; void* var_local_id; int suffix; int prefix; TYPE_5__* rrddim; } ;
struct TYPE_10__ {int rrdvar_root_index; } ;
struct TYPE_9__ {TYPE_1__* rrdfamily; int rrdvar_root_index; int name; int context; int id; TYPE_3__* rrdhost; } ;
struct TYPE_8__ {int rrdvar_root_index; } ;
typedef TYPE_2__ RRDSET ;
typedef TYPE_3__ RRDHOST ;
typedef TYPE_4__ RRDDIMVAR ;
typedef TYPE_5__ RRDDIM ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 void* FUNC_1 (char*,int *,void*,int ,int ,int ) ;
 int FUNC_2 (char*,int ,char*,int ,void*,...) ;
 void* FUNC_3 (char*) ;

__attribute__((used)) static inline void FUNC_4(RRDDIMVAR *VAR_2) {
    FUNC_0(VAR_2);

    RRDDIM *VAR_3 = VAR_2->rrddim;
    RRDSET *VAR_4 = VAR_3->rrdset;
    RRDHOST *VAR_5 = VAR_4->rrdhost;

    char VAR_6[VAR_0 + 1];



    FUNC_2(VAR_6, VAR_0, "%s%s%s", VAR_2->prefix, VAR_3->id, VAR_2->suffix);
    VAR_2->key_id = FUNC_3(VAR_6);

    FUNC_2(VAR_6, VAR_0, "%s%s%s", VAR_2->prefix, VAR_3->name, VAR_2->suffix);
    VAR_2->key_name = FUNC_3(VAR_6);

    FUNC_2(VAR_6, VAR_0, "%s.%s", VAR_4->id, VAR_2->key_id);
    VAR_2->key_fullidid = FUNC_3(VAR_6);

    FUNC_2(VAR_6, VAR_0, "%s.%s", VAR_4->id, VAR_2->key_name);
    VAR_2->key_fullidname = FUNC_3(VAR_6);

    FUNC_2(VAR_6, VAR_0, "%s.%s", VAR_4->context, VAR_2->key_id);
    VAR_2->key_contextid = FUNC_3(VAR_6);

    FUNC_2(VAR_6, VAR_0, "%s.%s", VAR_4->context, VAR_2->key_name);
    VAR_2->key_contextname = FUNC_3(VAR_6);

    FUNC_2(VAR_6, VAR_0, "%s.%s", VAR_4->name, VAR_2->key_id);
    VAR_2->key_fullnameid = FUNC_3(VAR_6);

    FUNC_2(VAR_6, VAR_0, "%s.%s", VAR_4->name, VAR_2->key_name);
    VAR_2->key_fullnamename = FUNC_3(VAR_6);
    VAR_2->var_local_id = FUNC_1("local", &VAR_4->rrdvar_root_index, VAR_2->key_id, VAR_2->type, VAR_1, VAR_2->value);
    VAR_2->var_local_name = FUNC_1("local", &VAR_4->rrdvar_root_index, VAR_2->key_name, VAR_2->type, VAR_1, VAR_2->value);
    VAR_2->var_family_id = FUNC_1("family", &VAR_4->rrdfamily->rrdvar_root_index, VAR_2->key_id, VAR_2->type, VAR_1, VAR_2->value);
    VAR_2->var_family_name = FUNC_1("family", &VAR_4->rrdfamily->rrdvar_root_index, VAR_2->key_name, VAR_2->type, VAR_1, VAR_2->value);
    VAR_2->var_family_contextid = FUNC_1("family", &VAR_4->rrdfamily->rrdvar_root_index, VAR_2->key_contextid, VAR_2->type, VAR_1, VAR_2->value);
    VAR_2->var_family_contextname = FUNC_1("family", &VAR_4->rrdfamily->rrdvar_root_index, VAR_2->key_contextname, VAR_2->type, VAR_1, VAR_2->value);
    VAR_2->var_host_chartidid = FUNC_1("host", &VAR_5->rrdvar_root_index, VAR_2->key_fullidid, VAR_2->type, VAR_1, VAR_2->value);
    VAR_2->var_host_chartidname = FUNC_1("host", &VAR_5->rrdvar_root_index, VAR_2->key_fullidname, VAR_2->type, VAR_1, VAR_2->value);
    VAR_2->var_host_chartnameid = FUNC_1("host", &VAR_5->rrdvar_root_index, VAR_2->key_fullnameid, VAR_2->type, VAR_1, VAR_2->value);
    VAR_2->var_host_chartnamename = FUNC_1("host", &VAR_5->rrdvar_root_index, VAR_2->key_fullnamename, VAR_2->type, VAR_1, VAR_2->value);
}
