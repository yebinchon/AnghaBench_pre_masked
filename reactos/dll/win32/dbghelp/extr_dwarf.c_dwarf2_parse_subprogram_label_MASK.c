
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct location {scalar_t__ offset; int kind; } ;
struct TYPE_6__ {int * string; scalar_t__ uvalue; } ;
struct attribute {TYPE_1__ u; } ;
struct TYPE_7__ {int func; TYPE_4__* ctx; } ;
typedef TYPE_2__ dwarf2_subprogram_t ;
typedef int dwarf2_debug_info_t ;
struct TYPE_8__ {int module; scalar_t__ load_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (TYPE_4__*,int const*,int ,struct attribute*) ;
 int VAR_3 ;
 int FUNC_4 (int ,int ,int ,struct location*,int *) ;

__attribute__((used)) static void FUNC_5(dwarf2_subprogram_t* VAR_4,
                                          const dwarf2_debug_info_t* VAR_5)
{
    struct attribute VAR_6;
    struct attribute VAR_7;
    struct location VAR_8;

    FUNC_0("%s, for %s\n", FUNC_1(VAR_4->ctx), FUNC_2(VAR_5));

    if (!FUNC_3(VAR_4->ctx, VAR_5, VAR_0, &VAR_7)) VAR_7.u.uvalue = 0;
    if (!FUNC_3(VAR_4->ctx, VAR_5, VAR_1, &VAR_6))
        VAR_6.u.string = ((void*)0);

    VAR_8.kind = VAR_3;
    VAR_8.offset = VAR_4->ctx->load_offset + VAR_7.u.uvalue;
    FUNC_4(VAR_4->ctx->module, VAR_4->func, VAR_2,
                            &VAR_8, VAR_6.u.string);
}
