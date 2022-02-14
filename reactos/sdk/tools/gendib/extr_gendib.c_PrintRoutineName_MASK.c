
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ RopCode; int Name; } ;
typedef TYPE_1__* PROPINFO ;
typedef int FILE ;


 int FUNC_0 (int *,char*,unsigned int,...) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_1(FILE *VAR_1, unsigned VAR_2, PROPINFO VAR_3)
{
    if (((void*)0) != VAR_3 && VAR_0 != VAR_3->RopCode)
    {
        FUNC_0(VAR_1, "DIB_%uBPP_BitBlt_%s", VAR_2, VAR_3->Name);
    }
    else
    {
        FUNC_0(VAR_1, "DIB_%uBPP_BitBlt_Generic", VAR_2);
    }
}
