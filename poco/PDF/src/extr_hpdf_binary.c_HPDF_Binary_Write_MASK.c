
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ len; int value; } ;
typedef int HPDF_Stream ;
typedef int HPDF_STATUS ;
typedef scalar_t__ HPDF_Encrypt ;
typedef TYPE_1__* HPDF_Binary ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,char) ;
 int FUNC_3 (int ,char*) ;

HPDF_STATUS
FUNC_4 (HPDF_Binary VAR_1,
                    HPDF_Stream VAR_2,
                    HPDF_Encrypt VAR_3)
{
    HPDF_STATUS VAR_4;

    if (VAR_1->len == 0)
        return FUNC_3 (VAR_2, "<>");

    if ((VAR_4 = FUNC_2 (VAR_2, '<')) != VAR_0)
        return VAR_4;

    if (VAR_3)
        FUNC_0 (VAR_3);

    if ((VAR_4 = FUNC_1 (VAR_2, VAR_1->value, VAR_1->len, VAR_3)) !=
                    VAR_0)
        return VAR_4;

    return FUNC_2 (VAR_2, '>');
}
