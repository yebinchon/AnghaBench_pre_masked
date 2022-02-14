
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_char ;
typedef int njs_vm_t ;
struct TYPE_9__ {int length; int * start; } ;
typedef TYPE_1__ njs_str_t ;
struct TYPE_10__ {scalar_t__ disassemble; } ;
typedef TYPE_2__ njs_opts_t ;
typedef scalar_t__ njs_int_t ;
struct TYPE_11__ {int * vm; } ;
typedef TYPE_3__ njs_console_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,TYPE_2__*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int *,int **,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;

__attribute__((used)) static njs_int_t
FUNC_11(njs_console_t *VAR_2, njs_opts_t *VAR_3,
    const njs_str_t *VAR_4)
{
    u_char *VAR_5;
    njs_vm_t *VAR_6;
    njs_int_t VAR_7;

    VAR_6 = VAR_2->vm;
    VAR_5 = VAR_4->start;

    VAR_7 = FUNC_5(VAR_6, &VAR_5, VAR_5 + VAR_4->length);

    if (VAR_7 == VAR_1) {
        if (VAR_3->disassemble) {
            FUNC_0(VAR_6);
            FUNC_1("\n");
        }

        VAR_7 = FUNC_9(VAR_6);
    }

    for ( ;; ) {
        if (!FUNC_6(VAR_6)) {
            break;
        }

        VAR_7 = FUNC_2(VAR_2, VAR_3);
        if (FUNC_3(VAR_7 != VAR_1)) {
            FUNC_4("njs_process_events() failed\n");
            VAR_7 = VAR_0;
            break;
        }

        if (FUNC_10(VAR_6) && !FUNC_7(VAR_6)) {


            FUNC_4("njs_process_script(): async events unsupported\n");
            VAR_7 = VAR_0;
            break;
        }

        VAR_7 = FUNC_8(VAR_6);
    }

    return VAR_7;
}
