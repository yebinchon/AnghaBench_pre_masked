
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ type; } ;
struct TYPE_12__ {scalar_t__ type; } ;
struct TYPE_11__ {TYPE_7__* base; } ;
struct TYPE_10__ {int excludedSubtrees; int permittedSubtrees; } ;
typedef TYPE_1__ NAME_CONSTRAINTS ;
typedef TYPE_2__ GENERAL_SUBTREE ;
typedef TYPE_3__ GENERAL_NAME ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,TYPE_7__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(GENERAL_NAME *VAR_4, NAME_CONSTRAINTS *VAR_5)
{
    GENERAL_SUBTREE *VAR_6;
    int VAR_7, VAR_8, VAR_9 = 0;






    for (VAR_7 = 0; VAR_7 < FUNC_2(VAR_5->permittedSubtrees); VAR_7++) {
        VAR_6 = FUNC_3(VAR_5->permittedSubtrees, VAR_7);
        if (VAR_4->type != VAR_6->base->type)
            continue;
        if (!FUNC_1(VAR_6))
            return VAR_2;

        if (VAR_9 == 2)
            continue;
        if (VAR_9 == 0)
            VAR_9 = 1;
        VAR_8 = FUNC_0(VAR_4, VAR_6->base);
        if (VAR_8 == VAR_3)
            VAR_9 = 2;
        else if (VAR_8 != VAR_1)
            return VAR_8;
    }

    if (VAR_9 == 1)
        return VAR_1;



    for (VAR_7 = 0; VAR_7 < FUNC_2(VAR_5->excludedSubtrees); VAR_7++) {
        VAR_6 = FUNC_3(VAR_5->excludedSubtrees, VAR_7);
        if (VAR_4->type != VAR_6->base->type)
            continue;
        if (!FUNC_1(VAR_6))
            return VAR_2;

        VAR_8 = FUNC_0(VAR_4, VAR_6->base);
        if (VAR_8 == VAR_3)
            return VAR_0;
        else if (VAR_8 != VAR_1)
            return VAR_8;

    }

    return VAR_3;

}
