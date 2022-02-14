
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPCWSTR ;
typedef int IInternetProtocol ;
typedef int HRESULT ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ,int *,int *,int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;

__attribute__((used)) static HRESULT FUNC_5(unsigned VAR_15, IInternetProtocol *VAR_16, LPCWSTR VAR_17, BOOL VAR_18)
{
    HRESULT VAR_19;

    FUNC_4(VAR_0);
    if(VAR_14 == VAR_2)
        FUNC_4(VAR_6);
    FUNC_4(VAR_8);
    if(VAR_18)
        FUNC_4(VAR_7);
    if(VAR_14 == VAR_2)
        FUNC_4(VAR_5);
    FUNC_4(VAR_3);
    if(VAR_14 == VAR_1)
        FUNC_4(VAR_4);
    FUNC_4(VAR_9);
    VAR_12 = VAR_10;

    VAR_19 = FUNC_2(VAR_16, VAR_17, &VAR_13, &VAR_11, 0, 0);

    if(FUNC_1(VAR_19)) {
        FUNC_3(VAR_0);
        if(VAR_14 == VAR_2)
            FUNC_3(VAR_6);
        FUNC_3(VAR_8);
        if(VAR_18)
            FUNC_3(VAR_7);
        if(VAR_14 == VAR_2)
            FUNC_4(VAR_5);
        FUNC_3(VAR_3);
        if(VAR_14 == VAR_1)
            FUNC_3(VAR_4);
        FUNC_3(VAR_9);
    }else {
        FUNC_0(VAR_0);
        if(VAR_14 == VAR_2)
            FUNC_3(VAR_6);
        FUNC_0(VAR_8);
        if(VAR_18)
            FUNC_0(VAR_7);
        if(VAR_14 == VAR_2)
            FUNC_4(VAR_5);
        FUNC_0(VAR_3);
        if(VAR_14 == VAR_1)
            FUNC_0(VAR_4);
        FUNC_0(VAR_9);
    }

    return VAR_19;
}
