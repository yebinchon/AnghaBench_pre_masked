
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IXMLHttpRequest ;
typedef int ISupportErrorInfo ;
typedef int IServerXMLHTTPRequest ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (int *,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int *,void**) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *,void**) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_1 ;
 int * FUNC_6 () ;
 int * FUNC_7 () ;
 int FUNC_8 (int,char*,...) ;

__attribute__((used)) static void FUNC_9(void)
{
    HRESULT VAR_2;
    IXMLHttpRequest *VAR_3;
    IServerXMLHTTPRequest *VAR_4;
    ISupportErrorInfo *VAR_5, *VAR_6;

    VAR_3 = FUNC_7();

    FUNC_0(VAR_3, 1);
    VAR_2 = FUNC_4(VAR_3, &VAR_0, (void **)&VAR_5);
    FUNC_8(VAR_2 == VAR_1, "Failed to get ISupportErrorInfo, hr %#x.\n", VAR_2);
    FUNC_0(VAR_3, 2);

    VAR_2 = FUNC_4(VAR_3, &VAR_0, (void **)&VAR_6);
    FUNC_8(VAR_2 == VAR_1, "Failed to get ISupportErrorInfo, hr %#x.\n", VAR_2);
    FUNC_8(VAR_5 == VAR_6, "Unexpected error info instance.\n");
    FUNC_0(VAR_3, 3);

    FUNC_3(VAR_6);
    FUNC_3(VAR_5);

    FUNC_5(VAR_3);


    VAR_4 = FUNC_6();

    FUNC_0(VAR_4, 1);
    VAR_2 = FUNC_1(VAR_4, &VAR_0, (void **)&VAR_5);
    FUNC_8(VAR_2 == VAR_1, "Failed to get ISupportErrorInfo, hr %#x.\n", VAR_2);
    FUNC_0(VAR_4, 2);

    VAR_2 = FUNC_1(VAR_4, &VAR_0, (void **)&VAR_6);
    FUNC_8(VAR_2 == VAR_1, "Failed to get ISupportErrorInfo, hr %#x.\n", VAR_2);
    FUNC_8(VAR_5 == VAR_6, "Unexpected error info instance.\n");
    FUNC_0(VAR_4, 3);

    FUNC_3(VAR_6);
    FUNC_3(VAR_5);

    FUNC_2(VAR_4);
}
