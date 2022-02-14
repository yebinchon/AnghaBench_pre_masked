
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char uVKey; int uModifiers; } ;
typedef TYPE_1__ TF_PRESERVEDKEY ;
typedef int LPVOID ;
typedef int ITfKeystrokeMgr ;
typedef int ITfKeyEventSink ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ,int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int *,int *,TYPE_1__*,scalar_t__*) ;
 scalar_t__ FUNC_3 (int *,int ,int *,TYPE_1__*,int *,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int *,int *,TYPE_1__*) ;
 scalar_t__ FUNC_7 (int ,int *,int *) ;
 int FUNC_8 (int **) ;
 int VAR_6 ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_10 (int,char*) ;
 int FUNC_11 (int *,char*) ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static void FUNC_12(void)
{
    ITfKeystrokeMgr *VAR_16= ((void*)0);
    HRESULT VAR_17;
    TF_PRESERVEDKEY VAR_18;
    BOOL VAR_19;
    ITfKeyEventSink *VAR_20 = ((void*)0);

    FUNC_8(&VAR_20);

    VAR_17 = FUNC_7(VAR_13, &VAR_5, (LPVOID*)&VAR_16);
    FUNC_10(FUNC_9(VAR_17),"Failed to get IID_ITfKeystrokeMgr for ThreadMgr\n");

    VAR_18.uVKey = 'A';
    VAR_18.uModifiers = VAR_10;

    VAR_14 = VAR_6;
    VAR_17 = FUNC_1(VAR_16,VAR_15,VAR_20,VAR_11);
    FUNC_10(FUNC_9(VAR_17),"ITfKeystrokeMgr_AdviseKeyEventSink failed\n");
    FUNC_11(&VAR_14,"KeyEventSink_OnSetFocus");
    VAR_17 = FUNC_1(VAR_16,VAR_15,VAR_20,VAR_11);
    FUNC_10(VAR_17 == VAR_1,"Wrong return, expected CONNECT_E_ADVISELIMIT\n");
    VAR_17 = FUNC_1(VAR_16,VAR_12,VAR_20,VAR_11);
    FUNC_10(VAR_17 == VAR_3,"Wrong return, expected E_INVALIDARG\n");

    VAR_17 =FUNC_3(VAR_16, 0, &VAR_0, &VAR_18, ((void*)0), 0);
    FUNC_10(VAR_17==VAR_3,"ITfKeystrokeMgr_PreserveKey improperly succeeded\n");

    VAR_17 =FUNC_3(VAR_16, VAR_15, &VAR_0, &VAR_18, ((void*)0), 0);
    FUNC_10(FUNC_9(VAR_17),"ITfKeystrokeMgr_PreserveKey failed\n");

    VAR_17 =FUNC_3(VAR_16, VAR_15, &VAR_0, &VAR_18, ((void*)0), 0);
    FUNC_10(VAR_17 == VAR_9,"ITfKeystrokeMgr_PreserveKey improperly succeeded\n");

    VAR_19 = VAR_4;
    VAR_17 = FUNC_2(VAR_16, &VAR_0, &VAR_18, &VAR_19);
    FUNC_10(VAR_17 == VAR_8, "ITfKeystrokeMgr_IsPreservedKey failed\n");
    if (VAR_17 == VAR_8) FUNC_10(VAR_19 == VAR_11,"misreporting preserved key\n");

    VAR_17 = FUNC_6(VAR_16, &VAR_0,&VAR_18);
    FUNC_10(FUNC_9(VAR_17),"ITfKeystrokeMgr_UnpreserveKey failed\n");

    VAR_17 = FUNC_2(VAR_16, &VAR_0, &VAR_18, &VAR_19);
    FUNC_10(VAR_17 == VAR_7, "ITfKeystrokeMgr_IsPreservedKey failed\n");
    if (VAR_17 == VAR_7) FUNC_10(VAR_19 == VAR_4,"misreporting preserved key\n");

    VAR_17 = FUNC_6(VAR_16, &VAR_0,&VAR_18);
    FUNC_10(VAR_17==VAR_2,"ITfKeystrokeMgr_UnpreserveKey improperly succeeded\n");

    VAR_17 = FUNC_5(VAR_16,VAR_15);
    FUNC_10(FUNC_9(VAR_17),"ITfKeystrokeMgr_UnadviseKeyEventSink failed\n");

    FUNC_4(VAR_16);
    FUNC_0(VAR_20);
}
