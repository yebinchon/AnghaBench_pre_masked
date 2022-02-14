
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dwData ;
typedef int HKEY ;
typedef int DWORD ;
typedef int BYTE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int *,int ,int ,int *,int *,int*) ;
 int FUNC_2 (int ,int ,int ,int ,int const*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_3(DWORD VAR_8)
{
    HKEY VAR_9;
    DWORD VAR_10;
    DWORD VAR_11;

    if (FUNC_1(VAR_1, VAR_5, 0, ((void*)0), VAR_4, VAR_2, ((void*)0), &VAR_9, &VAR_10) == VAR_0)
    {
        VAR_11 = (VAR_8 >> 0) & 0x0000FFFF;
        FUNC_2(VAR_9, VAR_6, 0, VAR_3, (const BYTE *) &VAR_11, sizeof(VAR_11));

        VAR_11 = (VAR_8 >> 16) & 0x0000FFFF;
        FUNC_2(VAR_9, VAR_7, 0, VAR_3, (const BYTE *) &VAR_11, sizeof(VAR_11));

        FUNC_0(VAR_9);
    }
}
