
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ len; scalar_t__ value; int error; int mmgr; } ;
typedef scalar_t__ HPDF_UINT ;
typedef TYPE_1__* HPDF_String ;
typedef int HPDF_STATUS ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (char*) ;
 int VAR_2 ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (char*,char const*,char*) ;
 scalar_t__ FUNC_6 (char const*,scalar_t__) ;

HPDF_STATUS
FUNC_7 (HPDF_String VAR_3,
                       const char *VAR_4)
{
    HPDF_UINT VAR_5;
    HPDF_STATUS VAR_6 = VAR_1;

    FUNC_3((" HPDF_String_SetValue\n"));

    if (VAR_3->value) {
        FUNC_1 (VAR_3->mmgr, VAR_3->value);
        VAR_3->len = 0;
    }

    VAR_5 = FUNC_6(VAR_4, VAR_0 + 1);

    if (VAR_5 > VAR_0)
        return FUNC_4 (VAR_3->error, VAR_2, 0);

    VAR_3->value = FUNC_2 (VAR_3->mmgr, VAR_5 + 1);
    if (!VAR_3->value)
        return FUNC_0 (VAR_3->error);

    FUNC_5 ((char *)VAR_3->value, VAR_4, (char *)VAR_3->value + VAR_5);
    VAR_3->len = VAR_5;

    return VAR_6;
}
