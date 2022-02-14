
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int error; int attr; } ;
typedef int HPDF_WhenceMode ;
typedef TYPE_1__* HPDF_Stream ;
typedef int HPDF_STATUS ;
typedef int HPDF_INT ;
typedef int HPDF_FILEP ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;


 int FUNC_3 (int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

HPDF_STATUS
FUNC_4 (HPDF_Stream VAR_5,
                           HPDF_INT VAR_6,
                           HPDF_WhenceMode VAR_7)
{
    HPDF_FILEP VAR_8 = (HPDF_FILEP)VAR_5->attr;
    HPDF_INT VAR_9;

    FUNC_2((" HPDF_FileReader_SeekFunc\n"));

    switch (VAR_7) {
        case 129:
            VAR_9 = VAR_2;
            break;
        case 128:
            VAR_9 = VAR_3;
            break;
        default:
            VAR_9 = VAR_4;
    }

    if (FUNC_1 (VAR_8, VAR_6, VAR_9) != 0) {
        return FUNC_3 (VAR_5->error, VAR_0, FUNC_0(VAR_8));
    }

    return VAR_1;
}
