
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
struct symt {int dummy; } ;
struct TYPE_17__ {int uvalue; } ;
struct attribute {TYPE_2__ u; } ;
struct TYPE_18__ {int module; struct symt** symt_cache; } ;
typedef TYPE_3__ dwarf2_parse_context_t ;
struct TYPE_19__ {struct symt* symt; TYPE_1__* abbrev; } ;
typedef TYPE_4__ dwarf2_debug_info_t ;
struct TYPE_20__ {struct symt symt; } ;
struct TYPE_16__ {int tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_0 (char*,int,int ,int ) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_4__*,int ,struct attribute*) ;
 struct vector* FUNC_5 (TYPE_3__*,TYPE_4__*) ;
 struct symt* FUNC_6 (TYPE_3__*,TYPE_4__*) ;
 size_t VAR_3 ;
 TYPE_5__* FUNC_7 (int ,int,int,struct symt*,struct symt*) ;
 scalar_t__ FUNC_8 (struct vector const*,unsigned int) ;
 unsigned int FUNC_9 (struct vector const*) ;

__attribute__((used)) static struct symt* FUNC_10(dwarf2_parse_context_t* VAR_4,
                                            dwarf2_debug_info_t* VAR_5)
{
    struct symt* VAR_6;
    struct symt* VAR_7 = ((void*)0);
    struct attribute VAR_8, VAR_9, VAR_10;
    dwarf2_debug_info_t* VAR_11;
    unsigned int VAR_12;
    const struct vector* VAR_13;

    if (VAR_5->symt) return VAR_5->symt;

    FUNC_1("%s, for %s\n", FUNC_2(VAR_4), FUNC_3(VAR_5));

    VAR_6 = FUNC_6(VAR_4, VAR_5);

    if (!(VAR_13 = FUNC_5(VAR_4, VAR_5)))
    {


        VAR_7 = VAR_4->symt_cache[VAR_3];
        VAR_8.u.uvalue = 0;
        VAR_9.u.uvalue = -1;
    }
    else for (VAR_12 = 0; VAR_12 < FUNC_9(VAR_13); VAR_12++)
    {
        VAR_11 = *(dwarf2_debug_info_t**)FUNC_8(VAR_13, VAR_12);
        switch (VAR_11->abbrev->tag)
        {
        case 128:
            VAR_7 = FUNC_6(VAR_4, VAR_11);
            if (!FUNC_4(VAR_4, VAR_11, VAR_1, &VAR_8))
                VAR_8.u.uvalue = 0;
            if (!FUNC_4(VAR_4, VAR_11, VAR_2, &VAR_9))
                VAR_9.u.uvalue = 0;
            if (FUNC_4(VAR_4, VAR_11, VAR_0, &VAR_10))
                VAR_9.u.uvalue = VAR_8.u.uvalue + VAR_10.u.uvalue;
            break;
        default:
            FUNC_0("Unhandled Tag type 0x%lx at %s, for %s\n",
                  VAR_11->abbrev->tag, FUNC_2(VAR_4), FUNC_3(VAR_5));
            break;
        }
    }
    VAR_5->symt = &FUNC_7(VAR_4->module, VAR_8.u.uvalue, VAR_9.u.uvalue, VAR_6, VAR_7)->symt;
    return VAR_5->symt;
}
