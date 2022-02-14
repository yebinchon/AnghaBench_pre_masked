
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int error; } ;
typedef scalar_t__ HPDF_UINT ;
typedef TYPE_1__* HPDF_Stream ;
typedef scalar_t__ HPDF_STATUS ;
typedef int HPDF_BYTE ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int const**,scalar_t__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_1 ;

HPDF_STATUS
FUNC_3 (HPDF_Stream VAR_2,
                           const HPDF_BYTE *VAR_3,
                           HPDF_UINT VAR_4)
{
    HPDF_UINT VAR_5 = VAR_4;

    FUNC_2((" HPDF_MemStream_WriteFunc\n"));

    if (FUNC_0 (VAR_2->error) != 0)
        return VAR_1;

    while (VAR_5 > 0) {
        HPDF_STATUS VAR_6 = FUNC_1 (VAR_2, &VAR_3, &VAR_5);
        if (VAR_6 != VAR_0)
            return VAR_6;
    }

    return VAR_0;
}
