
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG ;
typedef int UCHAR ;
typedef scalar_t__* PULONG ;
typedef int * PSID ;


 int * FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int) ;
 scalar_t__ FUNC_3 (int) ;
 int* FUNC_4 (int *) ;
 scalar_t__* FUNC_5 (int *,scalar_t__) ;

__attribute__((used)) static PSID
FUNC_6(PSID VAR_0,
                       ULONG VAR_1)
{
    UCHAR VAR_2;
    PSID VAR_3;
    ULONG VAR_4;
    ULONG VAR_5;
    PULONG VAR_6, VAR_7;

    VAR_2 = *FUNC_4(VAR_0);
    if (VAR_2 >= 8)
        return ((void*)0);

    VAR_5 = FUNC_3(VAR_2 + 1);

    VAR_3 = FUNC_0(VAR_5);
    if (VAR_3 == ((void*)0))
        return ((void*)0);

    FUNC_2(VAR_3,
                     FUNC_1(VAR_0),
                     VAR_2 + 1);

    for (VAR_4 = 0; VAR_4 < (ULONG)VAR_2; VAR_4++)
    {
        VAR_6 = FUNC_5(VAR_0, VAR_4);
        VAR_7 = FUNC_5(VAR_3, VAR_4);
        *VAR_7 = *VAR_6;
    }

    VAR_7 = FUNC_5(VAR_3, (ULONG)VAR_2);
    *VAR_7 = VAR_1;

    return VAR_3;
}
