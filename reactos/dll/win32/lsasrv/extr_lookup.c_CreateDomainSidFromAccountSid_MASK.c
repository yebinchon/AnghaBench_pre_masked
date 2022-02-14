
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG ;
typedef scalar_t__ UCHAR ;
typedef int * PULONG ;
typedef int * PSID ;


 int * FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__* FUNC_4 (int *) ;
 int * FUNC_5 (int *,scalar_t__) ;

__attribute__((used)) static PSID
FUNC_6(PSID VAR_0)
{
    UCHAR VAR_1;
    PSID VAR_2;
    ULONG VAR_3;
    ULONG VAR_4;
    PULONG VAR_5, VAR_6;

    VAR_1 = *FUNC_4(VAR_0);
    if (VAR_1 > 0)
        VAR_1--;

    VAR_4 = FUNC_3(VAR_1);

    VAR_2 = FUNC_0(VAR_4);
    if (VAR_2 == ((void*)0))
        return ((void*)0);

    FUNC_2(VAR_2,
                     FUNC_1(VAR_0),
                     VAR_1);

    for (VAR_3 = 0; VAR_3 < (ULONG)VAR_1; VAR_3++)
    {
        VAR_5 = FUNC_5(VAR_0, VAR_3);
        VAR_6 = FUNC_5(VAR_2, VAR_3);
        *VAR_6 = *VAR_5;
    }

    return VAR_2;
}
