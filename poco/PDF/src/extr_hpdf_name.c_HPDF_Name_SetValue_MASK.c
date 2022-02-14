
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ value; int error; } ;
typedef int HPDF_STATUS ;
typedef TYPE_1__* HPDF_Name ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (scalar_t__,char const*,scalar_t__) ;
 scalar_t__ FUNC_2 (char const*,scalar_t__) ;

HPDF_STATUS
FUNC_3 (HPDF_Name VAR_4,
                     const char *VAR_5)
{
    if (!VAR_5 || VAR_5[0] == 0)
        return FUNC_0 (VAR_4->error, VAR_1, 0);

    if (FUNC_2 (VAR_5, VAR_0 + 1) >
            VAR_0)
        return FUNC_0 (VAR_4->error, VAR_2, 0);

    FUNC_1 (VAR_4->value, VAR_5, VAR_4->value + VAR_0);

    return VAR_3;
}
