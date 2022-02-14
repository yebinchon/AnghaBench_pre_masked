
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* LPWSTR ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 () ;
 scalar_t__* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__*,int,int*,int *) ;

__attribute__((used)) static LPWSTR
FUNC_5(HANDLE VAR_0)
{
    LPWSTR VAR_1 = ((void*)0);
    DWORD VAR_2, VAR_3;
    BOOL VAR_4;

    if (VAR_0)
    {
        VAR_2 = FUNC_0(VAR_0, ((void*)0));
        if (VAR_2)
        {
            VAR_1 = FUNC_2(FUNC_1(),
                                 0,
                                 VAR_2 + 2);
            if (VAR_1)
            {
                VAR_4 = FUNC_4(VAR_0,
                                VAR_1,
                                VAR_2,
                                &VAR_3,
                                ((void*)0));
                if (VAR_4)
                {
                    VAR_1[VAR_3 / 2] = 0;
                }
                else
                {
                    FUNC_3(FUNC_1(),
                             0,
                             VAR_1);

                    VAR_1 = ((void*)0);
                }
            }
        }
    }

    return VAR_1;
}
