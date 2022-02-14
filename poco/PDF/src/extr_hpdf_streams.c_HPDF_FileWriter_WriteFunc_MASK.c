
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int error; scalar_t__ attr; } ;
typedef scalar_t__ HPDF_UINT ;
typedef TYPE_1__* HPDF_Stream ;
typedef int HPDF_STATUS ;
typedef scalar_t__ HPDF_FILEP ;
typedef int HPDF_BYTE ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int const*,int,scalar_t__,scalar_t__) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,int ) ;

HPDF_STATUS
FUNC_4 (HPDF_Stream VAR_2,
                            const HPDF_BYTE *VAR_3,
                            HPDF_UINT VAR_4)
{
    HPDF_FILEP VAR_5;
    HPDF_UINT VAR_6;

    FUNC_2((" HPDF_FileWriter_WriteFunc\n"));

    VAR_5 = (HPDF_FILEP)VAR_2->attr;
    VAR_6 = FUNC_1 (VAR_3, 1, VAR_4, VAR_5);

    if (VAR_6 != VAR_4) {
        return FUNC_3 (VAR_2->error, VAR_0, FUNC_0(VAR_5));
    }

    return VAR_1;
}
