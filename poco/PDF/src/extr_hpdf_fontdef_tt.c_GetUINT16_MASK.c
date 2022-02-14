
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HPDF_UINT16 ;
typedef int HPDF_UINT ;
typedef int HPDF_Stream ;
typedef scalar_t__ HPDF_STATUS ;
typedef int HPDF_BYTE ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *,int*) ;
 int FUNC_1 (scalar_t__*) ;

__attribute__((used)) static HPDF_STATUS
FUNC_2 (HPDF_Stream VAR_1,
           HPDF_UINT16 *VAR_2)
{
    HPDF_STATUS VAR_3;
    HPDF_UINT VAR_4 = sizeof (HPDF_UINT16);

    VAR_3 = FUNC_0 (VAR_1, (HPDF_BYTE *)VAR_2, &VAR_4);
    if (VAR_3 != VAR_0) {
        *VAR_2 = 0;
        return VAR_3;
    }

    FUNC_1 (VAR_2);

    return VAR_0;
}
