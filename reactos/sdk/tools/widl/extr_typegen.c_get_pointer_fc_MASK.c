
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int const* attrs; } ;
typedef TYPE_1__ type_t ;
typedef int attr_list_t ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int const*,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__ const*) ;
 scalar_t__ FUNC_3 (TYPE_1__ const*) ;
 TYPE_1__* FUNC_4 (TYPE_1__ const*) ;
 unsigned char FUNC_5 (TYPE_1__ const*) ;
 scalar_t__ FUNC_6 (TYPE_1__ const*) ;
 unsigned char FUNC_7 (TYPE_1__ const*) ;

unsigned char FUNC_8(const type_t *VAR_2, const attr_list_t *VAR_3, int VAR_4)
{
    const type_t *VAR_5;
    int VAR_6;

    FUNC_0(FUNC_3(VAR_2) || FUNC_2(VAR_2));

    VAR_6 = FUNC_1(VAR_3, VAR_0);
    if (VAR_6)
        return VAR_6;

    for (VAR_5 = VAR_2; FUNC_6(VAR_5); VAR_5 = FUNC_4(VAR_5))
    {
        VAR_6 = FUNC_1(VAR_5->attrs, VAR_0);
        if (VAR_6)
            return VAR_6;
    }

    if (VAR_4)
        return VAR_1;
    else if (FUNC_3(VAR_2))
        return FUNC_7(VAR_2);
    else
        return FUNC_5(VAR_2);
}
