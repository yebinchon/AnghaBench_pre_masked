
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_7__ {int retval; } ;
typedef TYPE_1__ njs_vm_t ;
typedef int njs_value_t ;
typedef int njs_uint_t ;
typedef int njs_int_t ;
typedef int njs_index_t ;
struct TYPE_8__ {scalar_t__ time; } ;
typedef TYPE_2__ njs_console_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int ,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 int FUNC_6 (TYPE_1__*,char*) ;
 TYPE_2__* FUNC_7 (TYPE_1__*,int ) ;

__attribute__((used)) static njs_int_t
FUNC_8(njs_vm_t *VAR_4, njs_value_t *VAR_5, njs_uint_t VAR_6,
    njs_index_t VAR_7)
{
    uint64_t VAR_8, VAR_9;
    njs_console_t *VAR_10;

    VAR_8 = FUNC_4();

    if (!FUNC_5(FUNC_0(VAR_5, VAR_6, 1))) {
        FUNC_6(VAR_4, "labels not implemented");
        return VAR_0;
    }

    VAR_10 = FUNC_7(VAR_4, FUNC_0(VAR_5, VAR_6, 0));
    if (FUNC_3(VAR_10 == ((void*)0))) {
        return VAR_0;
    }

    if (FUNC_1(VAR_10->time != VAR_2)) {

        VAR_8 = VAR_8 - VAR_10->time;

        VAR_9 = VAR_8 / 1000000;
        VAR_8 = VAR_8 % 1000000;

        FUNC_2("default: %uL.%06uLms\n", VAR_9, VAR_8);

        VAR_10->time = VAR_2;

    } else {
        FUNC_2("Timer \"default\" doesn’t exist.\n");
    }

    VAR_4->retval = VAR_3;

    return VAR_1;
}
