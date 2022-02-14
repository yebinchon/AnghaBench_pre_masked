
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPCWSTR ;
typedef int IUri ;
typedef int IInternetProtocolEx ;
typedef int IInternetProtocol ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *,int *,int *,int *,int ,int ) ;
 scalar_t__ FUNC_3 (int *,int ,int *,int *,int ,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_5 (int,char*,scalar_t__) ;
 int VAR_16 ;
 int FUNC_6 (char*) ;

__attribute__((used)) static BOOL FUNC_7(IInternetProtocol *VAR_17, LPCWSTR VAR_18,
        IInternetProtocolEx *VAR_19, IUri *VAR_20, BOOL VAR_21)
{
    HRESULT VAR_22;

    FUNC_4(VAR_2);
    if(!(VAR_14 & VAR_0))
       FUNC_4(VAR_6);
    if(VAR_21) {
        FUNC_4(VAR_8);
        FUNC_4(VAR_5);
        if(VAR_14 & VAR_0)
            FUNC_4(VAR_9);
        else
            FUNC_4(VAR_7);
    }
    FUNC_4(VAR_4);
    if(VAR_21)
        FUNC_4(VAR_10);

    VAR_15 = VAR_11;

    if(VAR_19) {
        VAR_22 = FUNC_2(VAR_19, VAR_20, &VAR_16, &VAR_13, 0, 0);
        FUNC_5(VAR_22 == VAR_11, "StartEx failed: %08x\n", VAR_22);
    }else {
        VAR_22 = FUNC_3(VAR_17, VAR_18, &VAR_16, &VAR_13, 0, 0);
        if(VAR_22 == VAR_3) {
            FUNC_6("Start failed\n");
            return VAR_1;
        }
        FUNC_5(VAR_22 == VAR_11, "Start failed: %08x\n", VAR_22);
    }

    FUNC_0(VAR_2);
    if(!(VAR_14 & VAR_0))
        FUNC_1(VAR_6);
    if(VAR_21) {
        FUNC_0(VAR_8);
        FUNC_0(VAR_5);
        if(VAR_14 & VAR_0)
            FUNC_0(VAR_9);
        else
            FUNC_0(VAR_7);
    }
    FUNC_0(VAR_4);
    if(VAR_21)
        FUNC_0(VAR_10);

    return VAR_12;
}
