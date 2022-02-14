
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPVOID ;
typedef int ITfTextEditSink ;
typedef int ITfSource ;
typedef int ITfEditSession ;
typedef int ITfDocumentMgr ;
typedef int ITfContext ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int **) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ,int *,int,scalar_t__*) ;
 int FUNC_5 (int *,int **) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int *,int ,int*) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int **) ;
 int VAR_5 ;
 int FUNC_13 (scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_14 (int **) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_15 (int,char*,...) ;
 int FUNC_16 (int *,char*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static void FUNC_17(void)
{
    HRESULT VAR_17, VAR_18;
    ITfEditSession *VAR_19;
    ITfContext *VAR_20;
    ITfDocumentMgr *VAR_21;
    ITfTextEditSink *VAR_22;
    ITfSource *VAR_23 = ((void*)0);
    DWORD VAR_24 = -1;

    FUNC_12(VAR_11, &VAR_21);
    FUNC_0(&VAR_19);
    FUNC_5(VAR_21,&VAR_20);

    FUNC_14(&VAR_22);
    VAR_17 = FUNC_2(VAR_20,&VAR_3,(LPVOID*)&VAR_23);
    FUNC_15(FUNC_13(VAR_17),"Failed to get IID_ITfSource for Context\n");
    if (VAR_23)
    {
        VAR_17 = FUNC_8(VAR_23, &VAR_4, (LPVOID)VAR_22, &VAR_24);
        FUNC_15(FUNC_13(VAR_17),"Failed to advise Sink\n");
        FUNC_15(VAR_24 != -1,"Failed to get sink cookie\n");
    }

    VAR_18 = 0xfeedface;

    VAR_17 = FUNC_4(VAR_20, VAR_16, VAR_19, VAR_7, &VAR_18);
    FUNC_15(VAR_17 == VAR_2,"RequestEditSession should have failed with %x not %x\n",VAR_2,VAR_17);
    FUNC_15(VAR_18 == VAR_1,"hrSession should be %x not %x\n",VAR_1,VAR_18);

    VAR_10 = VAR_9;
    VAR_18 = 0xfeedface;
    VAR_12 = VAR_5;
    VAR_17 = FUNC_4(VAR_20, VAR_16, VAR_19, VAR_7|VAR_6, &VAR_18);
    FUNC_15(FUNC_13(VAR_17),"ITfContext_RequestEditSession failed\n");
    FUNC_15(VAR_18 == VAR_8,"Unexpected hrSession (%x)\n",VAR_18);
    FUNC_16(&VAR_12,"GetStatus");


    VAR_10 = 0;
    VAR_13 = VAR_5;
    FUNC_1(VAR_0,VAR_10);
    FUNC_16(&VAR_13,"RequestLock");

    VAR_12 = VAR_5;
    VAR_13 = VAR_5;
    VAR_14 = VAR_5;
    VAR_18 = 0xfeedface;
    VAR_15 = VAR_5;
    VAR_17 = FUNC_4(VAR_20, VAR_16, VAR_19, VAR_7|VAR_6, &VAR_18);
    FUNC_15(FUNC_13(VAR_17),"ITfContext_RequestEditSession failed\n");
    FUNC_16(&VAR_15,"OnEndEdit");
    FUNC_16(&VAR_14,"DoEditSession");
    FUNC_16(&VAR_12,"GetStatus");
    FUNC_15(VAR_18 == 0xdeadcafe,"Unexpected hrSession (%x)\n",VAR_18);

    if (VAR_23)
    {
        VAR_17 = FUNC_10(VAR_23, VAR_24);
        FUNC_15(FUNC_13(VAR_17),"Failed to unadvise Sink\n");
        FUNC_9(VAR_23);
    }
    FUNC_11(VAR_22);
    FUNC_3(VAR_20);
    FUNC_6(VAR_21);
    FUNC_7(VAR_19);
}
