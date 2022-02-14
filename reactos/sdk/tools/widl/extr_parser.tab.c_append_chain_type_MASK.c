
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {TYPE_4__* elem; } ;
struct TYPE_12__ {TYPE_4__* ref; } ;
struct TYPE_14__ {TYPE_2__ array; TYPE_1__ pointer; } ;
struct TYPE_15__ {TYPE_3__ details; } ;
typedef TYPE_4__ type_t ;


 int FUNC_0 (int ) ;
 TYPE_4__* FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;

__attribute__((used)) static type_t *FUNC_4(type_t *VAR_0, type_t *VAR_1)
{
    type_t *VAR_2;

    if (!VAR_0)
        return VAR_1;
    for (VAR_2 = VAR_0; FUNC_1(VAR_2); VAR_2 = FUNC_1(VAR_2))
        ;

    if (FUNC_3(VAR_2))
        VAR_2->details.pointer.ref = VAR_1;
    else if (FUNC_2(VAR_2))
        VAR_2->details.array.elem = VAR_1;
    else
        FUNC_0(0);

    return VAR_0;
}
