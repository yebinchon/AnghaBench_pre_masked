
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int urlA ;
typedef int url ;
typedef int WCHAR ;
typedef int MSG ;
typedef int IUnknown ;
typedef int IPersistMoniker ;
typedef int IMoniker ;
typedef int IHTMLDocument2 ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int *,int **) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int *,int *,int ,int ) ;
 int FUNC_4 (int *,char*,int) ;
 scalar_t__ FUNC_5 (int *,int *,void**) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_8 (int *,int ,int *,int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int ,char*,int,int *,int) ;
 int VAR_5 ;
 int FUNC_11 (int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_12 (int *) ;
 int VAR_8 ;
 int * FUNC_13 () ;
 int FUNC_14 (int *,int *,int *) ;
 int VAR_9 ;
 int FUNC_15 (char*,char const*) ;
 int FUNC_16 (char*,char const*) ;
 int FUNC_17 (char const*) ;
 int FUNC_18 (int,char*,scalar_t__) ;
 int FUNC_19 (int *,int ) ;
 int FUNC_20 (char*,char const*) ;

__attribute__((used)) static void FUNC_21(const char *VAR_10)
{
    WCHAR VAR_11[VAR_4];
    char VAR_12[VAR_4];
    IPersistMoniker *VAR_13;
    IHTMLDocument2 *VAR_14;
    IMoniker *VAR_15;
    MSG VAR_16;
    HRESULT VAR_17;

    static const char VAR_18[] = "res://";

    FUNC_20("running %s...\n", VAR_10);

    VAR_14 = FUNC_13();
    if(!VAR_14)
        return;

    FUNC_19(VAR_14, VAR_7);
    FUNC_14(VAR_14, &VAR_3, (IUnknown*)&VAR_5);

    FUNC_16(VAR_12, VAR_18);
    FUNC_4(((void*)0), VAR_12 + FUNC_17(VAR_18), sizeof(VAR_12) - FUNC_17(VAR_18));
    FUNC_15(VAR_12, "/");
    FUNC_15(VAR_12, VAR_10);
    FUNC_10(VAR_0, 0, VAR_12, -1, VAR_11, sizeof(VAR_11)/sizeof(WCHAR));

    VAR_17 = FUNC_1(((void*)0), VAR_11, &VAR_15);
    FUNC_18(VAR_17 == VAR_6, "CreateURLMoniker failed: %08x\n", VAR_17);

    VAR_17 = FUNC_5(VAR_14, &VAR_2, (void**)&VAR_13);
    FUNC_18(VAR_17 == VAR_6, "Could not get IPersistMoniker iface: %08x\n", VAR_17);

    VAR_17 = FUNC_8(VAR_13, VAR_1, VAR_15, ((void*)0), 0);
    FUNC_18(VAR_17 == VAR_6, "Load failed: %08x\n", VAR_17);

    FUNC_7(VAR_15);
    FUNC_9(VAR_13);

    FUNC_11(VAR_9);

    while(!VAR_8 && FUNC_3(&VAR_16, ((void*)0), 0, 0)) {
        FUNC_12(&VAR_16);
        FUNC_2(&VAR_16);
    }

    FUNC_0(VAR_9);

    FUNC_19(VAR_14, VAR_1);
    FUNC_6(VAR_14);
}
