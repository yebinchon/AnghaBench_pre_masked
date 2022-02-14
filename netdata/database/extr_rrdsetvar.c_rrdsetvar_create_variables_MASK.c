
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int rrdvar_root_index; } ;
struct TYPE_9__ {TYPE_1__* rrdfamily; int rrdvar_root_index; int name; int id; TYPE_4__* rrdhost; } ;
struct TYPE_8__ {int options; int value; int type; void* key_fullname; void* var_host_name; void* key_fullid; void* var_host; void* var_family_name; void* var_family; void* variable; void* var_local; TYPE_3__* rrdset; } ;
struct TYPE_7__ {int rrdvar_root_index; } ;
typedef int RRDVAR_OPTIONS ;
typedef TYPE_2__ RRDSETVAR ;
typedef TYPE_3__ RRDSET ;
typedef TYPE_4__ RRDHOST ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 void* FUNC_1 (char*,int *,void*,int ,int,int ) ;
 int FUNC_2 (char*,int ,char*,int ,void*) ;
 void* FUNC_3 (char*) ;

__attribute__((used)) static inline void FUNC_4(RRDSETVAR *VAR_2) {
    RRDSET *VAR_3 = VAR_2->rrdset;
    RRDHOST *VAR_4 = VAR_3->rrdhost;

    RRDVAR_OPTIONS VAR_5 = VAR_2->options;
    if(VAR_2->options & VAR_1)
        VAR_5 &= ~ VAR_1;




    FUNC_0(VAR_2);




    char VAR_6[VAR_0 + 1];
    FUNC_2(VAR_6, VAR_0, "%s.%s", VAR_3->id, VAR_2->variable);
    VAR_2->key_fullid = FUNC_3(VAR_6);

    FUNC_2(VAR_6, VAR_0, "%s.%s", VAR_3->name, VAR_2->variable);
    VAR_2->key_fullname = FUNC_3(VAR_6);



    VAR_2->var_local = FUNC_1("local", &VAR_3->rrdvar_root_index, VAR_2->variable, VAR_2->type, VAR_5, VAR_2->value);



    VAR_2->var_family = FUNC_1("family", &VAR_3->rrdfamily->rrdvar_root_index, VAR_2->key_fullid, VAR_2->type, VAR_5, VAR_2->value);
    VAR_2->var_family_name = FUNC_1("family", &VAR_3->rrdfamily->rrdvar_root_index, VAR_2->key_fullname, VAR_2->type, VAR_5, VAR_2->value);



    VAR_2->var_host = FUNC_1("host", &VAR_4->rrdvar_root_index, VAR_2->key_fullid, VAR_2->type, VAR_5, VAR_2->value);
    VAR_2->var_host_name = FUNC_1("host", &VAR_4->rrdvar_root_index, VAR_2->key_fullname, VAR_2->type, VAR_5, VAR_2->value);
}
