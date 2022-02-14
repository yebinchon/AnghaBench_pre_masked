
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UDP_TABLE_CLASS ;
typedef int * PVOID ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,scalar_t__*,int ,scalar_t__,int ,int ) ;
 int FUNC_1 () ;
 int * FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (int ,int ,int *) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static DWORD FUNC_4(PVOID *VAR_3, BOOL VAR_4, DWORD VAR_5, UDP_TABLE_CLASS VAR_6)
{
    DWORD VAR_7;
    DWORD VAR_8 = 0;

    *VAR_3 = ((void*)0);

    VAR_7 = FUNC_0(*VAR_3, &VAR_8, VAR_4, VAR_5, VAR_6, 0);
    if (VAR_7 == VAR_0)
    {
        *VAR_3 = FUNC_2(FUNC_1(), 0, VAR_8);
        if (*VAR_3 == ((void*)0))
        {
            return VAR_1;
        }

        VAR_7 = FUNC_0(*VAR_3, &VAR_8, VAR_4, VAR_5, VAR_6, 0);
        if (VAR_7 != VAR_2)
        {
            FUNC_3(FUNC_1(), 0, *VAR_3);
            *VAR_3 = ((void*)0);
        }
    }

    return VAR_7;
}
