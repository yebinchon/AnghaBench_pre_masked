
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int MSIPACKAGE ;
typedef int LPCWSTR ;
typedef int HANDLE ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static UINT FUNC_6(MSIPACKAGE* VAR_4, UINT VAR_5,
                           HANDLE VAR_6, LPCWSTR VAR_7)
{
    UINT VAR_8 = VAR_0;

    if (!(VAR_5 & VAR_2))
    {
        FUNC_1("waiting for %s\n", FUNC_3(VAR_7));

        FUNC_5(VAR_6);

        if (!(VAR_5 & VAR_3))
            VAR_8 = FUNC_2(VAR_6);

        FUNC_0(VAR_6);
    }
    else
    {
        FUNC_1("%s running in background\n", FUNC_3(VAR_7));

        if (!(VAR_5 & VAR_3))
            FUNC_4(VAR_4, VAR_6, VAR_1, VAR_7);
        else
            FUNC_0(VAR_6);
    }

    return VAR_8;
}
