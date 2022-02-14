
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nsChannelBSC ;
typedef char WCHAR ;
typedef int IWinInetHttpInfo ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,scalar_t__*,int *,int *) ;
 char* FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,char const*) ;
 char* FUNC_4 (char*,char) ;

__attribute__((used)) static void FUNC_5(nsChannelBSC *VAR_1, IWinInetHttpInfo *VAR_2)
{
    const WCHAR *VAR_3;
    DWORD VAR_4 = 0;
    WCHAR *VAR_5;

    FUNC_0(VAR_2, VAR_0, ((void*)0), &VAR_4, ((void*)0), ((void*)0));
    if(!VAR_4)
        return;

    VAR_5 = FUNC_1(VAR_4);
    if(!VAR_5)
        return;

    FUNC_0(VAR_2, VAR_0, VAR_5, &VAR_4, ((void*)0), ((void*)0));
    if(!VAR_4) {
        FUNC_2(VAR_5);
        return;
    }

    VAR_3 = FUNC_4(VAR_5, '\r');
    if(VAR_3 && VAR_3[1] == '\n') {
        VAR_3 += 2;
        FUNC_3(VAR_1, VAR_3);
    }

    FUNC_2(VAR_5);
}
