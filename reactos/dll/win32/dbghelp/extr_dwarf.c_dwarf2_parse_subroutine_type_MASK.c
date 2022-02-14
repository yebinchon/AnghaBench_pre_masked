
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct vector {int dummy; } ;
struct symt {int dummy; } ;
struct symt_function_signature {struct symt symt; } ;
struct TYPE_13__ {int module; struct symt** symt_cache; } ;
typedef TYPE_2__ dwarf2_parse_context_t ;
struct TYPE_14__ {struct symt* symt; TYPE_1__* abbrev; } ;
typedef TYPE_3__ dwarf2_debug_info_t ;
struct TYPE_12__ {int tag; } ;


 int VAR_0 ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct symt*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*) ;
 struct vector* FUNC_5 (TYPE_2__*,TYPE_3__*) ;
 struct symt* FUNC_6 (TYPE_2__*,TYPE_3__*) ;
 size_t VAR_1 ;
 int FUNC_7 (int ,struct symt_function_signature*,struct symt*) ;
 struct symt_function_signature* FUNC_8 (int ,struct symt*,int ) ;
 scalar_t__ FUNC_9 (struct vector*,unsigned int) ;
 unsigned int FUNC_10 (struct vector*) ;

__attribute__((used)) static struct symt* FUNC_11(dwarf2_parse_context_t* VAR_2,
                                                 dwarf2_debug_info_t* VAR_3)
{
    struct symt* VAR_4;
    struct symt_function_signature* VAR_5;
    struct vector* VAR_6;
    dwarf2_debug_info_t* VAR_7;
    unsigned int VAR_8;

    if (VAR_3->symt) return VAR_3->symt;

    FUNC_0("%s, for %s\n", FUNC_3(VAR_2), FUNC_4(VAR_3));

    if (!(VAR_4 = FUNC_6(VAR_2, VAR_3)))
    {
        VAR_4 = VAR_2->symt_cache[VAR_1];
        FUNC_2(VAR_4);
    }


    VAR_5 = FUNC_8(VAR_2->module, VAR_4, VAR_0);

    VAR_6 = FUNC_5(VAR_2, VAR_3);
    if (VAR_6) for (VAR_8 = 0; VAR_8 < FUNC_10(VAR_6); VAR_8++)
    {
        VAR_7 = *(dwarf2_debug_info_t**)FUNC_9(VAR_6, VAR_8);

        switch (VAR_7->abbrev->tag)
        {
        case 129:
            FUNC_7(VAR_2->module, VAR_5,
                                                  FUNC_6(VAR_2, VAR_7));
            break;
        case 128:
            FUNC_1("Unsupported unspecified parameters\n");
            break;
 }
    }

    return VAR_3->symt = &VAR_5->symt;
}
