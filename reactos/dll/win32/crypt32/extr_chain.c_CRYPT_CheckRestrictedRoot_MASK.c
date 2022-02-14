
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * PCCERT_CONTEXT ;
typedef scalar_t__ HCERTSTORE ;
typedef scalar_t__ BOOL ;


 int * FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (scalar_t__,int ) ;
 int * FUNC_2 (scalar_t__,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static BOOL FUNC_5(HCERTSTORE VAR_3)
{
    BOOL VAR_4 = VAR_1;

    if (VAR_3)
    {
        HCERTSTORE VAR_5 = FUNC_4(0, VAR_2);
        PCCERT_CONTEXT VAR_6 = ((void*)0), VAR_7;

        do {
            VAR_6 = FUNC_2(VAR_3, VAR_6);
            if (VAR_6)
            {
                if (!(VAR_7 = FUNC_0(VAR_5, VAR_6)))
                    VAR_4 = VAR_0;
                else
                    FUNC_3(VAR_7);
            }
        } while (VAR_4 && VAR_6);
        if (VAR_6)
            FUNC_3(VAR_6);
        FUNC_1(VAR_5, 0);
    }
    return VAR_4;
}
