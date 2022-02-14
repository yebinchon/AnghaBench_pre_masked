
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * attr; } ;
typedef TYPE_1__* HPDF_Stream ;
typedef scalar_t__ HPDF_FILEP ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*) ;

void
FUNC_2 (HPDF_Stream VAR_0)
{
    HPDF_FILEP VAR_1;

    FUNC_1((" HPDF_FileStream_FreeFunc\n"));

    VAR_1 = (HPDF_FILEP)VAR_0->attr;

    if (VAR_1)
        FUNC_0(VAR_1);

    VAR_0->attr = ((void*)0);
}
