
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct vector {int dummy; } ;
struct TYPE_11__ {scalar_t__* symt_cache; } ;
typedef TYPE_1__ dwarf2_parse_context_t ;
struct TYPE_12__ {scalar_t__ symt; } ;
typedef TYPE_2__ dwarf2_debug_info_t ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*) ;
 struct vector* FUNC_3 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*) ;
 size_t VAR_0 ;
 scalar_t__ FUNC_5 (struct vector*,unsigned int) ;
 unsigned int FUNC_6 (struct vector*) ;

__attribute__((used)) static void FUNC_7(dwarf2_parse_context_t* VAR_1,
                                   dwarf2_debug_info_t* VAR_2)
{
    struct vector* VAR_3;
    dwarf2_debug_info_t* VAR_4;
    unsigned int VAR_5;

    if (VAR_2->symt) return;

    FUNC_0("%s, for %s\n", FUNC_1(VAR_1), FUNC_2(VAR_2));

    VAR_2->symt = VAR_1->symt_cache[VAR_0];

    VAR_3 = FUNC_3(VAR_1, VAR_2);
    if (VAR_3) for (VAR_5 = 0; VAR_5 < FUNC_6(VAR_3); VAR_5++)
    {
        VAR_4 = *(dwarf2_debug_info_t**)FUNC_5(VAR_3, VAR_5);
        FUNC_4(VAR_1, VAR_4);
    }
}
