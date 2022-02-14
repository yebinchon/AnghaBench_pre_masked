
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HPDF_Xref ;
typedef scalar_t__ HPDF_STATUS ;
typedef int HPDF_Point3D ;
typedef int HPDF_MMgr ;
typedef int * HPDF_3DMeasure ;


 scalar_t__ FUNC_0 (int *,char*,char*) ;
 scalar_t__ FUNC_1 (int *,char*,int ) ;
 int * FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ,int *) ;

HPDF_3DMeasure
FUNC_5(HPDF_MMgr VAR_1,
       HPDF_Xref VAR_2,
       HPDF_Point3D VAR_3,
       HPDF_Point3D VAR_4
       )
{
 HPDF_3DMeasure VAR_5;
 HPDF_STATUS VAR_6 = VAR_0;


 FUNC_3((" HPDF_3DC3DMeasure_New\n"));

 VAR_5 = FUNC_2 (VAR_1);
 if (!VAR_5)
  return ((void*)0);

 if (FUNC_4 (VAR_2, VAR_5) != VAR_0)
  return ((void*)0);

 VAR_6 += FUNC_1(VAR_5, "A1", VAR_3);
 VAR_6 += FUNC_1(VAR_5, "TP", VAR_4);

 VAR_6 += FUNC_0 (VAR_5, "Type", "3DMeasure");
 VAR_6 += FUNC_0 (VAR_5, "Subtype", "3DC");

 if (VAR_6 != VAR_0)
  return ((void*)0);

 return VAR_5;
}
