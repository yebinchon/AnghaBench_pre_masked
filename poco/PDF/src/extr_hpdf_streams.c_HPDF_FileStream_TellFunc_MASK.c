
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int error; int attr; } ;
typedef TYPE_1__* HPDF_Stream ;
typedef int HPDF_INT32 ;
typedef int HPDF_FILEP ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,int ) ;

HPDF_INT32
FUNC_4 (HPDF_Stream VAR_1)
{
    HPDF_INT32 VAR_2;
    HPDF_FILEP VAR_3 = (HPDF_FILEP)VAR_1->attr;

    FUNC_2((" HPDF_FileReader_TellFunc\n"));

    if ((VAR_2 = FUNC_1 (VAR_3)) < 0) {
        return FUNC_3 (VAR_1->error, VAR_0,
                FUNC_0(VAR_3));
    }

    return VAR_2;
}
