
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EFI_STATUS ;
typedef int CHAR8 ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int const*,int *) ;

EFI_STATUS FUNC_1(const CHAR8 *VAR_4, BOOLEAN *VAR_5) {
        if (!VAR_4)
                return VAR_0;

        if (FUNC_0(VAR_4, (CHAR8 *)"1") == 0 ||
            FUNC_0(VAR_4, (CHAR8 *)"yes") == 0 ||
            FUNC_0(VAR_4, (CHAR8 *)"y") == 0 ||
            FUNC_0(VAR_4, (CHAR8 *)"true") == 0) {
                *VAR_5 = VAR_3;
                return VAR_1;
        }

        if (FUNC_0(VAR_4, (CHAR8 *)"0") == 0 ||
            FUNC_0(VAR_4, (CHAR8 *)"no") == 0 ||
            FUNC_0(VAR_4, (CHAR8 *)"n") == 0 ||
            FUNC_0(VAR_4, (CHAR8 *)"false") == 0) {
                *VAR_5 = VAR_2;
                return VAR_1;
        }

        return VAR_0;
}
