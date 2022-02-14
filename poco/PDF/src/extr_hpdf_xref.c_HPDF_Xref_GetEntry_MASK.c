
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int entries; } ;
typedef int HPDF_XrefEntry ;
typedef TYPE_1__* HPDF_Xref ;
typedef int HPDF_UINT ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;

HPDF_XrefEntry
FUNC_2 (HPDF_Xref VAR_0,
                     HPDF_UINT VAR_1)
{
    FUNC_1((" HPDF_Xref_GetEntry\n"));

    return (HPDF_XrefEntry)FUNC_0(VAR_0->entries, VAR_1);
}
