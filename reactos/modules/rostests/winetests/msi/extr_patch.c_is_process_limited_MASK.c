
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int type ;
typedef scalar_t__ TOKEN_ELEVATION_TYPE ;
typedef int HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,scalar_t__*,int,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (int ,int ,int *) ;

__attribute__((used)) static BOOL FUNC_4(void)
{
    HANDLE VAR_5;

    if (!&FUNC_3) return VAR_0;

    if (FUNC_3(FUNC_1(), VAR_1, &VAR_5))
    {
        BOOL VAR_6;
        TOKEN_ELEVATION_TYPE VAR_7 = VAR_3;
        DWORD VAR_8;

        VAR_6 = FUNC_2(VAR_5, VAR_2, &VAR_7, sizeof(VAR_7), &VAR_8);
        FUNC_0(VAR_5);
        return (VAR_6 && VAR_7 == VAR_4);
    }
    return VAR_0;
}
