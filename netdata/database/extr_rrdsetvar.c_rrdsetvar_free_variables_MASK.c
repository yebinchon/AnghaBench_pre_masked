
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int rrdvar_root_index; } ;
struct TYPE_9__ {TYPE_1__* rrdfamily; int rrdvar_root_index; TYPE_4__* rrdhost; } ;
struct TYPE_8__ {int * key_fullname; int * key_fullid; int * var_host_name; int * var_host; int * var_family_name; int * var_family; int * var_local; TYPE_3__* rrdset; } ;
struct TYPE_7__ {int rrdvar_root_index; } ;
typedef TYPE_2__ RRDSETVAR ;
typedef TYPE_3__ RRDSET ;
typedef TYPE_4__ RRDHOST ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_4__*,int *,int *) ;

__attribute__((used)) static inline void FUNC_2(RRDSETVAR *VAR_0) {
    RRDSET *VAR_1 = VAR_0->rrdset;
    RRDHOST *VAR_2 = VAR_1->rrdhost;



    FUNC_1(VAR_2, &VAR_1->rrdvar_root_index, VAR_0->var_local);
    VAR_0->var_local = ((void*)0);



    FUNC_1(VAR_2, &VAR_1->rrdfamily->rrdvar_root_index, VAR_0->var_family);
    VAR_0->var_family = ((void*)0);

    FUNC_1(VAR_2, &VAR_1->rrdfamily->rrdvar_root_index, VAR_0->var_family_name);
    VAR_0->var_family_name = ((void*)0);



    FUNC_1(VAR_2, &VAR_2->rrdvar_root_index, VAR_0->var_host);
    VAR_0->var_host = ((void*)0);

    FUNC_1(VAR_2, &VAR_2->rrdvar_root_index, VAR_0->var_host_name);
    VAR_0->var_host_name = ((void*)0);



    FUNC_0(VAR_0->key_fullid);
    VAR_0->key_fullid = ((void*)0);

    FUNC_0(VAR_0->key_fullname);
    VAR_0->key_fullname = ((void*)0);
}
