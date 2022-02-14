
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HPDF_STATUS ;
typedef int HPDF_Destination ;
typedef int HPDF_Catalog ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;

HPDF_STATUS
FUNC_2 (HPDF_Catalog VAR_1,
                             HPDF_Destination VAR_2)
{
    if (!VAR_2) {
        FUNC_1 (VAR_1, "OpenAction");
        return VAR_0;
    }

    return FUNC_0 (VAR_1, "OpenAction", VAR_2);
}
