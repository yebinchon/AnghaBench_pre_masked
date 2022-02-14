
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int url ;
typedef int buf ;
typedef int WCHAR ;
typedef scalar_t__ ULONG ;
typedef int IInternetProtocol ;
typedef scalar_t__ HRESULT ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int *,void**) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *,int *,int,scalar_t__*) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int VAR_4 ;
 int FUNC_4 (int ,int ,char const*,int,int *,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int,char*,scalar_t__) ;
 int FUNC_7 (int *,int *) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_8(const char *VAR_8)
{
    WCHAR VAR_9[VAR_4];
    IInternetProtocol *VAR_10;
    ULONG VAR_11, VAR_12;
    BYTE VAR_13[100];
    HRESULT VAR_14;

    FUNC_5(VAR_9, VAR_6, VAR_7*sizeof(WCHAR));
    FUNC_4(VAR_2, 0, VAR_8, -1, VAR_9+VAR_7, sizeof(VAR_9)/sizeof(WCHAR)-VAR_7);

    VAR_14 = FUNC_0(&VAR_1, ((void*)0), VAR_0, &VAR_3, (void**)&VAR_10);
    FUNC_6(VAR_14 == VAR_5, "Could not create ResProtocol instance: %08x\n", VAR_14);

    FUNC_7(VAR_10, VAR_9);

    VAR_14 = FUNC_1(VAR_10, VAR_13, sizeof(VAR_13), &VAR_11);
    FUNC_6(VAR_14 == VAR_5, "Read failed: %08x\n", VAR_14);

    VAR_14 = FUNC_3(VAR_10, 0);
    FUNC_6(VAR_14 == VAR_5, "Terminate failed: %08x\n", VAR_14);


    VAR_12 = FUNC_2(VAR_10);
    FUNC_6(!VAR_12, "ref=%u\n", VAR_12);
}
