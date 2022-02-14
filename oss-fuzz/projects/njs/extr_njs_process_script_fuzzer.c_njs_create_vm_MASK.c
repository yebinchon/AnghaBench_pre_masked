
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_char ;
typedef int njs_vm_t ;
struct TYPE_8__ {int external; } ;
typedef TYPE_1__ njs_vm_opt_t ;
typedef size_t njs_uint_t ;
struct TYPE_9__ {size_t length; int * start; } ;
typedef TYPE_2__ njs_str_t ;
struct TYPE_10__ {size_t n_paths; int ** paths; } ;
typedef TYPE_3__ njs_opts_t ;
typedef scalar_t__ njs_int_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (int *,char) ;
 size_t FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,TYPE_2__*) ;
 int * FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static njs_vm_t *
FUNC_7(njs_opts_t *VAR_1, njs_vm_opt_t *VAR_2)
{
    u_char *VAR_3, *VAR_4;
    njs_vm_t *VAR_5;
    njs_int_t VAR_6;
    njs_str_t VAR_7;
    njs_uint_t VAR_8;

    VAR_5 = FUNC_6(VAR_2);
    if (VAR_5 == ((void*)0)) {
        FUNC_2("failed to create vm\n");
        return ((void*)0);
    }

    if (FUNC_1(VAR_5, VAR_2->external) != VAR_0) {
        FUNC_2("failed to add external protos\n");
        return ((void*)0);
    }

    for (VAR_8 = 0; VAR_8 < VAR_1->n_paths; VAR_8++) {
        VAR_7.start = (u_char *) VAR_1->paths[VAR_8];
        VAR_7.length = FUNC_4(VAR_1->paths[VAR_8]);

        VAR_6 = FUNC_5(VAR_5, &VAR_7);
        if (VAR_6 != VAR_0) {
            FUNC_2("failed to add path\n");
            return ((void*)0);
        }
    }

    VAR_4 = (u_char *) FUNC_0("NJS_PATH");
    if (VAR_4 == ((void*)0)) {
        return VAR_5;
    }

    for ( ;; ) {
        VAR_3 = FUNC_3(VAR_4, ':');

        VAR_7.start = VAR_4;
        VAR_7.length = (VAR_3 != ((void*)0)) ? (size_t) (VAR_3 - VAR_4) : FUNC_4(VAR_4);

        VAR_6 = FUNC_5(VAR_5, &VAR_7);
        if (VAR_6 != VAR_0) {
            FUNC_2("failed to add path\n");
            return ((void*)0);
        }

        if (VAR_3 == ((void*)0)) {
            break;
        }

        VAR_4 = VAR_3 + 1;
    }

    return VAR_5;
}
