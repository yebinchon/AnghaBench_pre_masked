
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {TYPE_4__ const* bits; TYPE_3__* field; } ;
struct TYPE_11__ {TYPE_1__ bitfield; } ;
struct TYPE_12__ {TYPE_2__ details; } ;
typedef TYPE_3__ type_t ;
struct TYPE_13__ {scalar_t__ cval; } ;
typedef TYPE_4__ expr_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 (int ) ;

type_t *FUNC_3(type_t *VAR_1, const expr_t *VAR_2)
{
    type_t *VAR_3;

    if (!FUNC_1(VAR_1))
        FUNC_0("bit-field has invalid type\n");

    if (VAR_2->cval < 0)
        FUNC_0("negative width for bit-field\n");



    VAR_3 = FUNC_2(VAR_0);
    VAR_3->details.bitfield.field = VAR_1;
    VAR_3->details.bitfield.bits = VAR_2;
    return VAR_3;
}
