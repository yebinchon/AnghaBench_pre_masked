
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_47__ TYPE_9__ ;
typedef struct TYPE_46__ TYPE_6__ ;
typedef struct TYPE_45__ TYPE_5__ ;
typedef struct TYPE_44__ TYPE_4__ ;
typedef struct TYPE_43__ TYPE_3__ ;
typedef struct TYPE_42__ TYPE_39__ ;
typedef struct TYPE_41__ TYPE_2__ ;
typedef struct TYPE_40__ TYPE_1__ ;


struct vector {int dummy; } ;
struct symt_function_signature {int symt; } ;
struct symt {int dummy; } ;
struct TYPE_40__ {scalar_t__ uvalue; int string; } ;
struct attribute {scalar_t__ gotten_from; TYPE_1__ u; } ;
struct TYPE_47__ {scalar_t__ kind; scalar_t__ offset; int reg; } ;
struct TYPE_43__ {TYPE_6__* func; TYPE_4__* ctx; TYPE_9__ frame; scalar_t__ non_computed_variable; } ;
typedef TYPE_3__ dwarf2_subprogram_t ;
struct TYPE_44__ {int module; scalar_t__ load_offset; int compiland; struct symt** symt_cache; int thunks; } ;
typedef TYPE_4__ dwarf2_parse_context_t ;
struct TYPE_45__ {struct symt* symt; TYPE_2__* abbrev; } ;
typedef TYPE_5__ dwarf2_debug_info_t ;
struct TYPE_46__ {struct symt symt; } ;
struct TYPE_42__ {int frame_regno; } ;
struct TYPE_41__ {int tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*,int,int ,scalar_t__) ;
 int VAR_7 ;
 int FUNC_1 (char*,int ,scalar_t__) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct symt*) ;
 scalar_t__ VAR_8 ;
 TYPE_39__* VAR_9 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*,TYPE_5__*,int ,TYPE_9__*,int *) ;
 int FUNC_6 (TYPE_4__*) ;
 scalar_t__ FUNC_7 (TYPE_5__*) ;
 scalar_t__ FUNC_8 (TYPE_4__*,TYPE_5__*,int ,struct attribute*) ;
 int FUNC_9 (TYPE_4__*,TYPE_5__*,int ) ;
 struct vector* FUNC_10 (TYPE_4__*,TYPE_5__*) ;
 struct symt* FUNC_11 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_12 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_13 (TYPE_3__*,int *,TYPE_5__*) ;
 int FUNC_14 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_15 (TYPE_3__*,int *,TYPE_5__*) ;
 int FUNC_16 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_17 (TYPE_3__*,int *,TYPE_5__*) ;
 int FUNC_18 (TYPE_4__*,TYPE_5__*,unsigned long*,unsigned long*) ;
 scalar_t__ FUNC_19 (scalar_t__,int ) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 size_t VAR_12 ;
 int FUNC_20 (int ,TYPE_6__*,int ,TYPE_9__*,int *) ;
 TYPE_6__* FUNC_21 (int ,int ,int ,scalar_t__,unsigned long,int *) ;
 struct symt_function_signature* FUNC_22 (int ,struct symt*,int ) ;
 int FUNC_23 (int ,TYPE_6__*) ;
 scalar_t__ FUNC_24 (struct vector*,unsigned int) ;
 unsigned int FUNC_25 (struct vector*) ;

__attribute__((used)) static struct symt* FUNC_26(dwarf2_parse_context_t* VAR_13,
                                            dwarf2_debug_info_t* VAR_14)
{
    struct attribute VAR_15;
    unsigned long VAR_16, VAR_17;
    struct attribute VAR_18;
    struct attribute VAR_19;
    struct symt* VAR_20;
    struct symt_function_signature* VAR_21;
    dwarf2_subprogram_t VAR_22;
    struct vector* VAR_23;
    dwarf2_debug_info_t* VAR_24;
    unsigned int VAR_25;

    if (VAR_14->symt) return VAR_14->symt;

    FUNC_1("%s, for %s\n", FUNC_6(VAR_13), FUNC_7(VAR_14));

    if (!FUNC_8(VAR_13, VAR_14, VAR_4, &VAR_15))
    {
        FUNC_2("No name for function... dropping function\n");
        return ((void*)0);
    }



    if (FUNC_8(VAR_13, VAR_14, VAR_3, &VAR_19) &&
        VAR_19.u.uvalue != VAR_5)
    {
        FUNC_1("Function %s declared as inlined (%ld)... skipping\n",
              FUNC_4(VAR_15.u.string), VAR_19.u.uvalue);
        return ((void*)0);
    }

    if (FUNC_8(VAR_13, VAR_14, VAR_1, &VAR_18) &&
        VAR_18.u.uvalue && VAR_18.gotten_from == VAR_8)
    {

        return ((void*)0);
    }
    if (!FUNC_18(VAR_13, VAR_14, &VAR_16, &VAR_17))
    {
        FUNC_2("cannot get range for %s\n", VAR_15.u.string);
        return ((void*)0);
    }





    if (FUNC_19(VAR_13->load_offset + VAR_16, VAR_13->thunks) >= 0)
        return ((void*)0);

    if (!(VAR_20 = FUNC_11(VAR_13, VAR_14)))
    {
        VAR_20 = VAR_13->symt_cache[VAR_12];
        FUNC_3(VAR_20);
    }

    VAR_21 = FUNC_22(VAR_13->module, VAR_20, VAR_0);
    VAR_22.func = FUNC_21(VAR_13->module, VAR_13->compiland,
                                    FUNC_9(VAR_13, VAR_14, VAR_15.u.string),
                                    VAR_13->load_offset + VAR_16, VAR_17 - VAR_16,
                                    &VAR_21->symt);
    VAR_14->symt = &VAR_22.func->symt;
    VAR_22.ctx = VAR_13;
    if (!FUNC_5(VAR_13, VAR_14, VAR_2,
                                      &VAR_22.frame, ((void*)0)))
    {

        VAR_22.frame.kind = VAR_10;
        VAR_22.frame.reg = VAR_9->frame_regno;
        VAR_22.frame.offset = 0;
    }
    VAR_22.non_computed_variable = VAR_6;

    VAR_23 = FUNC_10(VAR_13, VAR_14);
    if (VAR_23) for (VAR_25 = 0; VAR_25 < FUNC_25(VAR_23); VAR_25++)
    {
        VAR_24 = *(dwarf2_debug_info_t**)FUNC_24(VAR_23, VAR_25);

        switch (VAR_24->abbrev->tag)
        {
        case 128:
        case 140:
            FUNC_17(&VAR_22, ((void*)0), VAR_24);
            break;
        case 137:
            FUNC_15(&VAR_22, ((void*)0), VAR_24);
            break;
        case 139:
            FUNC_13(&VAR_22, ((void*)0), VAR_24);
            break;
        case 136:
            FUNC_14(VAR_22.ctx, VAR_14);
            break;
        case 142:
            FUNC_12(VAR_22.ctx, VAR_14);
            break;
        case 134:



            break;
        case 138:
            FUNC_16(&VAR_22, VAR_24);
            break;
        case 143:
        case 135:
        case 130:
        case 141:
        case 131:

            break;
        case 129:
        case 133:
        case 132:
        case 146:
        case 144:
        case 145:

            break;
        default:
            FUNC_0("Unhandled Tag type 0x%lx at %s, for %s\n",
                  VAR_24->abbrev->tag, FUNC_6(VAR_13), FUNC_7(VAR_14));
 }
    }

    if (VAR_22.non_computed_variable || VAR_22.frame.kind >= VAR_11)
    {
        FUNC_20(VAR_13->module, VAR_22.func, VAR_7,
                                &VAR_22.frame, ((void*)0));
    }
    if (VAR_22.func) FUNC_23(VAR_22.ctx->module, VAR_22.func);

    return VAR_14->symt;
}
