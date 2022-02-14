
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SFGAOF ;
typedef int LPWSTR ;
typedef int IShellItem ;
typedef int HRESULT ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int *,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static BOOL FUNC_5(IShellItem* VAR_3)
{
    LPWSTR VAR_4;
    HRESULT VAR_5;
    BOOL VAR_6;

    VAR_5 = FUNC_3(VAR_3, VAR_2, &VAR_4);
    if (FUNC_4(VAR_5))
    {

        VAR_6 = (FUNC_1(VAR_4) != VAR_0);
        FUNC_0(VAR_4);
    }
    else
    {
        SFGAOF VAR_7;
        VAR_6 = FUNC_4(FUNC_2(VAR_3, VAR_1, &VAR_7));
    }

    return VAR_6;
}
