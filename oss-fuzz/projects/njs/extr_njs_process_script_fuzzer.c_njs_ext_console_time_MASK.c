
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int retval; } ;
typedef TYPE_1__ njs_vm_t ;
typedef int njs_value_t ;
typedef int njs_uint_t ;
typedef int njs_int_t ;
typedef int njs_index_t ;
struct TYPE_8__ {int time; } ;
typedef TYPE_2__ njs_console_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_1__*,char*) ;
 TYPE_2__* FUNC_5 (TYPE_1__*,int ) ;

__attribute__((used)) static njs_int_t
FUNC_6(njs_vm_t *VAR_3, njs_value_t *VAR_4, njs_uint_t VAR_5,
    njs_index_t VAR_6)
{
    njs_console_t *VAR_7;

    if (!FUNC_3(FUNC_0(VAR_4, VAR_5, 1))) {
        FUNC_4(VAR_3, "labels not implemented");
        return VAR_0;
    }

    VAR_7 = FUNC_5(VAR_3, FUNC_0(VAR_4, VAR_5, 0));
    if (FUNC_1(VAR_7 == ((void*)0))) {
        return VAR_0;
    }

    VAR_7->time = FUNC_2();

    VAR_3->retval = VAR_2;

    return VAR_1;
}
