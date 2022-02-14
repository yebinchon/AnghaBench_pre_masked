
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int declptr; unsigned int dim; unsigned char ptr_def_fc; TYPE_3__* elem; int * size_is; int * length_is; } ;
struct TYPE_8__ {TYPE_1__ array; } ;
struct TYPE_9__ {TYPE_2__ details; int name; } ;
typedef TYPE_3__ type_t ;
typedef int expr_t ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;

type_t *FUNC_2(const char *VAR_1, type_t *VAR_2, int VAR_3,
                       unsigned int VAR_4, expr_t *VAR_5, expr_t *VAR_6,
                       unsigned char VAR_7)
{
    type_t *VAR_8 = FUNC_0(VAR_0);
    if (VAR_1) VAR_8->name = FUNC_1(VAR_1);
    VAR_8->details.array.declptr = VAR_3;
    VAR_8->details.array.length_is = VAR_6;
    if (VAR_5)
        VAR_8->details.array.size_is = VAR_5;
    else
        VAR_8->details.array.dim = VAR_4;
    VAR_8->details.array.elem = VAR_2;
    VAR_8->details.array.ptr_def_fc = VAR_7;
    return VAR_8;
}
