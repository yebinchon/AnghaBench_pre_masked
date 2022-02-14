
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int error; scalar_t__ bytes; TYPE_2__* type; } ;
struct TYPE_6__ {int name; TYPE_1__* module; } ;
struct TYPE_5__ {int options; int name; } ;
typedef TYPE_3__ RedisModuleIO ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int ,int ,unsigned long long) ;

void FUNC_2(RedisModuleIO *VAR_2) {
    if (VAR_2->type->module->options & VAR_1) {
        VAR_2->error = 1;
        return;
    }
    FUNC_1(VAR_0,
        "Error loading data from RDB (short read or EOF). "
        "Read performed by module '%s' about type '%s' "
        "after reading '%llu' bytes of a value.",
        VAR_2->type->module->name,
        VAR_2->type->name,
        (unsigned long long)VAR_2->bytes);
    FUNC_0(1);
}
