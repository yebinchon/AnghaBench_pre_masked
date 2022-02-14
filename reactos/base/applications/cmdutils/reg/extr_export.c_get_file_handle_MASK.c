
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int *,scalar_t__,int ,int *,int ,int *) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static HANDLE FUNC_9(WCHAR *VAR_9, BOOL VAR_10)
{
    HANDLE VAR_11 = FUNC_4(VAR_9, VAR_10 ? VAR_0 : VAR_1);

    if (VAR_11 == VAR_6)
    {
        DWORD VAR_12 = FUNC_1();

        if (VAR_12 == VAR_2)
        {
            if (!FUNC_3(VAR_8, VAR_9))
            {
                FUNC_7(VAR_7);
                FUNC_5(0);
            }

            VAR_11 = FUNC_4(VAR_9, VAR_0);
        }
        else
        {
            WCHAR *VAR_13;

            FUNC_0(VAR_3 | VAR_4 |
                           VAR_5, ((void*)0), VAR_12, 0, (WCHAR *)&VAR_13, 0, ((void*)0));
            FUNC_8(VAR_13, FUNC_6(VAR_13));
            FUNC_2(VAR_13);
            FUNC_5(1);
        }
    }

    return VAR_11;
}
