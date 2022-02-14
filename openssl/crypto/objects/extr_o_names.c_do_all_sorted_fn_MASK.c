
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct doall_sorted {scalar_t__ type; int n; TYPE_1__ const** names; } ;
struct TYPE_3__ {scalar_t__ type; } ;
typedef TYPE_1__ OBJ_NAME ;



__attribute__((used)) static void FUNC_0(const OBJ_NAME *VAR_0, void *VAR_1)
{
    struct doall_sorted *VAR_2 = VAR_1;

    if (VAR_0->type != VAR_2->type)
        return;

    VAR_2->names[VAR_2->n++] = VAR_0;
}
