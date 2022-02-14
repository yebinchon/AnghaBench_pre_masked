
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int error; int attr; } ;
typedef scalar_t__ HPDF_UINT ;
typedef TYPE_1__* HPDF_Stream ;
typedef int HPDF_STATUS ;
typedef int HPDF_FILEP ;
typedef int HPDF_BYTE ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *,int,scalar_t__,int ) ;
 int FUNC_3 (int *,int ,scalar_t__) ;
 int VAR_1 ;
 int FUNC_4 (char*) ;
 int VAR_2 ;
 int FUNC_5 (int ,int ,int ) ;

HPDF_STATUS
FUNC_6 (HPDF_Stream VAR_3,
                          HPDF_BYTE *VAR_4,
                          HPDF_UINT *VAR_5)
{
    HPDF_FILEP VAR_6 = (HPDF_FILEP)VAR_3->attr;
    HPDF_UINT VAR_7;

    FUNC_4((" HPDF_FileReader_ReadFunc\n"));

    FUNC_3(VAR_4, 0, *VAR_5);
    VAR_7 = FUNC_2(VAR_4, 1, *VAR_5, VAR_6);

    if (VAR_7 != *VAR_5) {
        if (FUNC_0(VAR_6)) {

            *VAR_5 = VAR_7;

            return VAR_2;
        }

        return FUNC_5 (VAR_3->error, VAR_0, FUNC_1(VAR_6));
    }

    return VAR_1;
}
