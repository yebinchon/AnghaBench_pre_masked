
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct vector {int dummy; } ;
struct symt_enum {int dummy; } ;
struct symt_basic {int symt; } ;
struct symt {int dummy; } ;
struct TYPE_16__ {int uvalue; int * string; } ;
struct attribute {TYPE_1__ u; } ;
struct TYPE_18__ {int module; } ;
typedef TYPE_3__ dwarf2_parse_context_t ;
struct TYPE_19__ {struct symt* symt; TYPE_2__* abbrev; } ;
typedef TYPE_4__ dwarf2_debug_info_t ;
struct TYPE_20__ {struct symt symt; } ;
struct TYPE_17__ {int tag; } ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (char*,int,int ,int ) ;
 int FUNC_1 (char*,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_4__*,int ,struct attribute*) ;
 struct vector* FUNC_5 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_6 (TYPE_3__*,TYPE_4__*,struct symt_enum*) ;
 struct symt_basic* FUNC_7 (int ,int ,char*,int) ;
 TYPE_5__* FUNC_8 (int ,int *,int *) ;
 scalar_t__ FUNC_9 (struct vector*,unsigned int) ;
 unsigned int FUNC_10 (struct vector*) ;

__attribute__((used)) static struct symt* FUNC_11(dwarf2_parse_context_t* VAR_3,
                                                  dwarf2_debug_info_t* VAR_4)
{
    struct attribute VAR_5;
    struct attribute VAR_6;
    struct symt_basic* VAR_7;
    struct vector* VAR_8;
    dwarf2_debug_info_t*VAR_9;
    unsigned int VAR_10;

    if (VAR_4->symt) return VAR_4->symt;

    FUNC_1("%s, for %s\n", FUNC_2(VAR_3), FUNC_3(VAR_4));

    if (!FUNC_4(VAR_3, VAR_4, VAR_1, &VAR_5)) VAR_5.u.string = ((void*)0);
    if (!FUNC_4(VAR_3, VAR_4, VAR_0, &VAR_6)) VAR_6.u.uvalue = 4;

    switch (VAR_6.u.uvalue)
    {
    case 1: VAR_7 = FUNC_7(VAR_3->module, VAR_2, "char", 1); break;
    case 2: VAR_7 = FUNC_7(VAR_3->module, VAR_2, "short", 2); break;
    default:
    case 4: VAR_7 = FUNC_7(VAR_3->module, VAR_2, "int", 4); break;
    }

    VAR_4->symt = &FUNC_8(VAR_3->module, VAR_5.u.string, &VAR_7->symt)->symt;

    VAR_8 = FUNC_5(VAR_3, VAR_4);

    if (VAR_8) for (VAR_10 = 0; VAR_10 < FUNC_10(VAR_8); VAR_10++)
    {
        VAR_9 = *(dwarf2_debug_info_t**)FUNC_9(VAR_8, VAR_10);

        switch (VAR_9->abbrev->tag)
        {
        case 128:
            FUNC_6(VAR_3, VAR_9, (struct symt_enum*)VAR_4->symt);
            break;
        default:
            FUNC_0("Unhandled Tag type 0x%lx at %s, for %s\n",
                  VAR_4->abbrev->tag, FUNC_2(VAR_3), FUNC_3(VAR_4));
 }
    }
    return VAR_4->symt;
}
