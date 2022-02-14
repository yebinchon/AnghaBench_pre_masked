
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct vector {int dummy; } ;
struct symt_block {int dummy; } ;
struct TYPE_21__ {TYPE_4__* func; TYPE_6__* ctx; } ;
typedef TYPE_2__ dwarf2_subprogram_t ;
struct TYPE_22__ {TYPE_1__* abbrev; } ;
typedef TYPE_3__ dwarf2_debug_info_t ;
struct TYPE_24__ {int module; scalar_t__ load_offset; } ;
struct TYPE_23__ {scalar_t__ address; } ;
struct TYPE_20__ {int tag; } ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (TYPE_3__*) ;
 struct vector* FUNC_4 (TYPE_6__*,TYPE_3__*) ;
 int FUNC_5 (TYPE_2__*,struct symt_block*,TYPE_3__*) ;
 int FUNC_6 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_7 (TYPE_2__*,struct symt_block*,TYPE_3__*) ;
 int FUNC_8 (TYPE_6__*,TYPE_3__*,unsigned long*,unsigned long*) ;
 int FUNC_9 (int ,TYPE_4__*,struct symt_block*,int ) ;
 struct symt_block* FUNC_10 (int ,TYPE_4__*,struct symt_block*,scalar_t__,unsigned long) ;
 scalar_t__ FUNC_11 (struct vector*,unsigned int) ;
 unsigned int FUNC_12 (struct vector*) ;

__attribute__((used)) static void FUNC_13(dwarf2_subprogram_t* VAR_0,
                                            struct symt_block* VAR_1,
                                            dwarf2_debug_info_t* VAR_2)
{
    struct symt_block* VAR_3;
    unsigned long VAR_4, VAR_5;
    struct vector* VAR_6;
    dwarf2_debug_info_t*VAR_7;
    unsigned int VAR_8;

    FUNC_1("%s, for %s\n", FUNC_2(VAR_0->ctx), FUNC_3(VAR_2));

    if (!FUNC_8(VAR_0->ctx, VAR_2, &VAR_4, &VAR_5))
    {
        FUNC_0("cannot read range\n");
        return;
    }

    VAR_3 = FUNC_10(VAR_0->ctx->module, VAR_0->func, VAR_1,
                                 VAR_0->ctx->load_offset + VAR_4 - VAR_0->func->address,
                                 VAR_5 - VAR_4);

    VAR_6 = FUNC_4(VAR_0->ctx, VAR_2);
    if (VAR_6) for (VAR_8 = 0; VAR_8 < FUNC_12(VAR_6); VAR_8++)
    {
        VAR_7 = *(dwarf2_debug_info_t**)FUNC_11(VAR_6, VAR_8);

        switch (VAR_7->abbrev->tag)
        {
        case 132:
        case 128:
            FUNC_7(VAR_0, VAR_3, VAR_7);
            break;
        case 129:
            FUNC_5(VAR_0, VAR_3, VAR_7);
            break;
        case 131:
            FUNC_13(VAR_0, VAR_3, VAR_7);
            break;
        case 130:
            FUNC_6(VAR_0, VAR_7);
            break;
        case 133:

            break;
        default:
            FUNC_0("Unhandled Tag type 0x%lx at %s, for %s\n",
                  VAR_7->abbrev->tag, FUNC_2(VAR_0->ctx),
                  FUNC_3(VAR_2));
        }
    }
    FUNC_9(VAR_0->ctx->module, VAR_0->func, VAR_3, 0);
}
