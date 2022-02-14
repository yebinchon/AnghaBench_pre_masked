
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int retval; } ;
typedef TYPE_1__ njs_vm_t ;
typedef int njs_value_t ;
typedef int njs_uint_t ;
struct TYPE_7__ {int length; int start; } ;
typedef TYPE_2__ njs_str_t ;
typedef scalar_t__ njs_int_t ;
typedef int njs_index_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,...) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (TYPE_1__*,TYPE_2__*,int ,int,int) ;

__attribute__((used)) static njs_int_t
FUNC_4(njs_vm_t *VAR_3, njs_value_t *VAR_4, njs_uint_t VAR_5,
    njs_index_t VAR_6)
{
    njs_str_t VAR_7;
    njs_uint_t VAR_8;

    VAR_8 = 1;

    while (VAR_8 < VAR_5) {
        if (FUNC_3(VAR_3, &VAR_7, FUNC_0(VAR_4, VAR_8), 1, 1)
            == VAR_0)
        {
            return VAR_0;
        }

        FUNC_2("%s", (VAR_8 != 1) ? " " : "");
        FUNC_1(VAR_7.start, VAR_7.length);

        VAR_8++;
    }

    if (VAR_5 > 1) {
        FUNC_2("\n");
    }

    VAR_3->retval = VAR_2;

    return VAR_1;
}
