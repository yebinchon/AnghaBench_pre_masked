
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int error; int attr; } ;
typedef int HPDF_UINT32 ;
typedef TYPE_1__* HPDF_Stream ;
typedef int HPDF_INT ;
typedef int HPDF_FILEP ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

HPDF_UINT32
FUNC_5 (HPDF_Stream VAR_3)
{
    HPDF_INT VAR_4;
    HPDF_INT VAR_5;
    HPDF_FILEP VAR_6 = (HPDF_FILEP)VAR_3->attr;

    FUNC_3((" HPDF_FileReader_SizeFunc\n"));


    if ((VAR_5 = FUNC_2 (VAR_6)) < 0) {
        FUNC_4 (VAR_3->error, VAR_0,
                FUNC_0(VAR_6));
        return 0;
    }


    if (FUNC_1 (VAR_6, 0, VAR_1) < 0) {
        FUNC_4 (VAR_3->error, VAR_0,
                FUNC_0(VAR_6));
        return 0;
    }


    if ((VAR_4 = FUNC_2 (VAR_6)) < 0) {
        FUNC_4 (VAR_3->error, VAR_0,
                FUNC_0(VAR_6));
        return 0;
    }


    if (FUNC_1 (VAR_6, VAR_5, VAR_2) < 0) {
        FUNC_4 (VAR_3->error, VAR_0,
                FUNC_0(VAR_6));
        return 0;
    }

    return (HPDF_UINT32)VAR_4;
}
