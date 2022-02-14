
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


struct vector {int dummy; } ;
struct symt_udt {int dummy; } ;
struct symt {int dummy; } ;
struct TYPE_26__ {char* string; scalar_t__ uvalue; } ;
struct attribute {TYPE_1__ u; } ;
typedef enum UdtKind { ____Placeholder_UdtKind } UdtKind ;
struct TYPE_28__ {int module; } ;
typedef TYPE_3__ dwarf2_parse_context_t ;
struct TYPE_29__ {struct symt* symt; TYPE_2__* abbrev; } ;
typedef TYPE_4__ dwarf2_debug_info_t ;
struct TYPE_30__ {struct symt symt; } ;
struct TYPE_27__ {int tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int ,int ) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_4__*,int ,struct attribute*) ;
 int FUNC_5 (TYPE_3__*,TYPE_4__*,char*) ;
 struct vector* FUNC_6 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_7 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_8 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_9 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_10 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_11 (TYPE_3__*,TYPE_4__*,struct symt_udt*) ;
 TYPE_5__* FUNC_12 (int ,int ,scalar_t__,int) ;
 scalar_t__ FUNC_13 (struct vector*,unsigned int) ;
 unsigned int FUNC_14 (struct vector*) ;

__attribute__((used)) static struct symt* FUNC_15(dwarf2_parse_context_t* VAR_2,
                                          dwarf2_debug_info_t* VAR_3,
                                          enum UdtKind VAR_4)
{
    struct attribute VAR_5;
    struct attribute VAR_6;
    struct vector* VAR_7;
    dwarf2_debug_info_t*VAR_8;
    unsigned int VAR_9;

    if (VAR_3->symt) return VAR_3->symt;

    FUNC_1("%s, for %s\n", FUNC_2(VAR_2), FUNC_3(VAR_3));


    if (!FUNC_4(VAR_2, VAR_3, VAR_1, &VAR_5))
        VAR_5.u.string = "zz_anon_zz";
    if (!FUNC_4(VAR_2, VAR_3, VAR_0, &VAR_6)) VAR_6.u.uvalue = 0;

    VAR_3->symt = &FUNC_12(VAR_2->module, FUNC_5(VAR_2, VAR_3, VAR_5.u.string),
                             VAR_6.u.uvalue, VAR_4)->symt;

    VAR_7 = FUNC_6(VAR_2, VAR_3);
    if (VAR_7) for (VAR_9 = 0; VAR_9 < FUNC_14(VAR_7); VAR_9++)
    {
        VAR_8 = *(dwarf2_debug_info_t**)FUNC_13(VAR_7, VAR_9);

        switch (VAR_8->abbrev->tag)
        {
        case 142:
            FUNC_7(VAR_2, VAR_3);
            break;
        case 136:

            FUNC_11(VAR_2, VAR_8, (struct symt_udt*)VAR_3->symt);
            break;
        case 139:
            FUNC_9(VAR_2, VAR_8);
            break;
        case 133:
            FUNC_10(VAR_2, VAR_8);
            break;
        case 140:
            FUNC_8(VAR_2, VAR_8);
            break;
        case 134:
        case 141:
        case 129:
        case 130:

        case 137:
        case 132:
        case 131:
        case 128:
        case 138:
        case 135:
        case 143:
        case 144:

            break;
        default:
            FUNC_0("Unhandled Tag type 0x%lx at %s, for %s\n",
                  VAR_8->abbrev->tag, FUNC_2(VAR_2), FUNC_3(VAR_3));
            break;
        }
    }

    return VAR_3->symt;
}
