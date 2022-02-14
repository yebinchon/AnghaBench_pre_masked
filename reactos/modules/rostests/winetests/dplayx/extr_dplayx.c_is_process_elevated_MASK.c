
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
 scalar_t__ FUNC_3 (int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static BOOL FUNC_4(void)
{
    HANDLE VAR_4;
    if (FUNC_3( FUNC_1(), VAR_1, &VAR_4 ))
    {
        TOKEN_ELEVATION_TYPE VAR_5;
        DWORD VAR_6;
        BOOL VAR_7;

        VAR_7 = FUNC_2( VAR_4, VAR_2, &VAR_5, sizeof(VAR_5), &VAR_6 );
        FUNC_0( VAR_4 );
        return (VAR_7 && VAR_5 == VAR_3);
    }
    return VAR_0;
}
