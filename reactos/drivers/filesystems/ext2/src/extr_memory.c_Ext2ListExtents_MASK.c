
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PLARGE_MCB ;
typedef scalar_t__ LONGLONG ;
typedef int BOOLEAN ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int,scalar_t__*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;

BOOLEAN
FUNC_3(PLARGE_MCB VAR_3)
{
    if (FUNC_2(VAR_3) != 0) {

        LONGLONG VAR_4;
        LONGLONG VAR_5;
        LONGLONG VAR_6;
        int VAR_7, VAR_8 = 0;

        for (VAR_7 = 0; FUNC_1(
                    VAR_3, VAR_7, &VAR_4,
                    &VAR_5, &VAR_6); VAR_7++) {
            if (VAR_4 > 0 && VAR_5 != -1) {
                FUNC_0(VAR_0, ("Vba:%I64xh Lba:%I64xh Len:%I64xh.\n", VAR_4, VAR_5, VAR_6));
                VAR_8++;
            }
        }

        return VAR_8 ? VAR_2 : VAR_1;
    }

    return VAR_1;
}
