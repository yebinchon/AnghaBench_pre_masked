
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HPDF_Xref ;
typedef scalar_t__ HPDF_STATUS ;
typedef int HPDF_MMgr ;
typedef int * HPDF_ExData ;


 scalar_t__ FUNC_0 (int *,char*,char*) ;
 int * FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,int *) ;

HPDF_ExData
FUNC_4(HPDF_MMgr VAR_1,
        HPDF_Xref VAR_2)
{
 HPDF_ExData VAR_3;
 HPDF_STATUS VAR_4 = VAR_0;


 FUNC_2((" HPDF_ExData_New\n"));

 VAR_3 = FUNC_1 (VAR_1);
 if (!VAR_3)
  return ((void*)0);

 if (FUNC_3 (VAR_2, VAR_3) != VAR_0)
  return ((void*)0);

 VAR_4 += FUNC_0 (VAR_3, "Type", "ExData");
 VAR_4 += FUNC_0 (VAR_3, "Subtype", "3DM");

 if (VAR_4 != VAR_0)
  return ((void*)0);

 return VAR_3;
}
