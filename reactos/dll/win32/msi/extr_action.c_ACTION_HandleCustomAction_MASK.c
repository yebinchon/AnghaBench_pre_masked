
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int MSIPACKAGE ;
typedef int LPCWSTR ;
typedef int INT ;


 scalar_t__ FUNC_0 (int *,int ,scalar_t__) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,int) ;
 int FUNC_4 (int *,int ,int *,int *) ;

__attribute__((used)) static UINT FUNC_5(MSIPACKAGE *VAR_14, LPCWSTR VAR_15, UINT VAR_16)
{
    UINT VAR_17;
    INT VAR_18;

    VAR_18 = FUNC_4(VAR_14, VAR_15, ((void*)0), ((void*)0));
    if (VAR_18 == VAR_12)
        return VAR_6;
    FUNC_3(VAR_14, VAR_15, VAR_13, 0);
    VAR_17 = FUNC_0( VAR_14, VAR_15, VAR_16 );
    VAR_18 = !VAR_17;

    if (VAR_17 == VAR_1 && FUNC_2(VAR_14))
    {
        VAR_18 = FUNC_1(VAR_14, VAR_15);
        switch (VAR_18)
        {
        case -1:
            return VAR_10;
        case 0: VAR_17 = VAR_1; break;
        case 1: VAR_17 = VAR_10; break;
        case 2: VAR_17 = VAR_6; break;
        case 3: VAR_17 = VAR_3; break;
        case 4: VAR_17 = VAR_5; break;
        case 5: VAR_17 = VAR_9; break;
        case 6: VAR_17 = VAR_8; break;
        case 7: VAR_17 = VAR_7; break;
        case 8: VAR_17 = VAR_2; break;
        case 9: VAR_17 = VAR_4; break;
        default: VAR_17 = VAR_0; break;
        }
    }

    FUNC_3(VAR_14, VAR_15, VAR_11, VAR_18);

    return VAR_17;
}
