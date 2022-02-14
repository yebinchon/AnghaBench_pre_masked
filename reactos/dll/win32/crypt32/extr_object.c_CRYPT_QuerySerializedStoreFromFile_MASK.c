
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPCWSTR ;
typedef int HCRYPTMSG ;
typedef int HCERTSTORE ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ,int *) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ,int ,int ,int *,int ,int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (char*,int ) ;
 int VAR_8 ;
 int FUNC_7 (int ) ;

__attribute__((used)) static BOOL FUNC_8(LPCWSTR VAR_9,
 DWORD *VAR_10, DWORD *VAR_11,
 HCERTSTORE *VAR_12, HCRYPTMSG *VAR_13)
{
    HANDLE VAR_14;
    BOOL VAR_15 = VAR_3;

    FUNC_6("%s\n", FUNC_7(VAR_9));
    VAR_14 = FUNC_5(VAR_9, VAR_5, VAR_4, ((void*)0),
     VAR_7, 0, ((void*)0));
    if (VAR_14 != VAR_6)
    {
        HCERTSTORE VAR_16 = FUNC_3(VAR_2, 0, 0,
         VAR_1, ((void*)0));

        VAR_15 = FUNC_0(VAR_14, VAR_16);
        if (VAR_15)
        {
            if (VAR_10)
                *VAR_10 = VAR_8;
            if (VAR_11)
                *VAR_11 = VAR_0;
            if (VAR_12)
                *VAR_12 = FUNC_2(VAR_16);
        }
        FUNC_1(VAR_16, 0);
        FUNC_4(VAR_14);
    }
    FUNC_6("returning %d\n", VAR_15);
    return VAR_15;
}
