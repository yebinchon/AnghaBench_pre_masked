
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int VARIANT ;
typedef int IPropertyBag ;
typedef int IParseDisplayName ;
typedef int IMoniker ;
typedef int IFilterMapper ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int *,void**) ;
 scalar_t__ FUNC_1 (int *,int ,char const*,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (int *,int *,int *,int *,void**) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int ,int *,int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ VAR_9 ;
 int FUNC_9 (int *,char*,int ) ;
 scalar_t__ VAR_10 ;
 char* FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int VAR_11 ;
 int * FUNC_13 (int *,char*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_14 (int *,int *) ;
 int VAR_15 ;
 int FUNC_15 (char*,int ) ;
 int FUNC_16 (char*,char*) ;
 int FUNC_17 (char*,int ) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (int,char*,...) ;
 int FUNC_20 (char*) ;
 int FUNC_21 (char*) ;

__attribute__((used)) static void FUNC_22(void)
{
    static const WCHAR VAR_16[] = {'t','e','s','t',0};
    IParseDisplayName *VAR_17;
    IPropertyBag *VAR_18;
    IFilterMapper *VAR_19;
    IMoniker *VAR_20;
    WCHAR VAR_21[200];
    VARIANT VAR_22;
    HRESULT VAR_23;

    VAR_23 = FUNC_0(&VAR_2, ((void*)0), VAR_1, &VAR_7, (void **)&VAR_17);
    FUNC_19(VAR_23 == VAR_9, "Failed to create ParseDisplayName: %#x\n", VAR_23);

    VAR_23 = FUNC_0(&VAR_3, ((void*)0), VAR_1, &VAR_6, (void **)&VAR_19);
    FUNC_19(VAR_23 == VAR_9, "Failed to create FilterMapper: %#x\n", VAR_23);

    VAR_23 = FUNC_1(VAR_19, VAR_5, VAR_16, 0xdeadbeef);
    if (VAR_23 == VAR_10)
    {
        FUNC_20("not enough permissions to register filters\n");
        goto end;
    }
    FUNC_19(VAR_23 == VAR_9, "RegisterFilter failed: %#x\n", VAR_23);

    FUNC_17(VAR_21, VAR_14);
    FUNC_15(VAR_21, VAR_13);
    FUNC_9(&VAR_4, VAR_21 + FUNC_18(VAR_21), VAR_0);
    FUNC_15(VAR_21, VAR_11);
    FUNC_9(&VAR_5, VAR_21 + FUNC_18(VAR_21), VAR_0);

    VAR_20 = FUNC_13(VAR_17, VAR_21);
    FUNC_19(FUNC_14(&VAR_4, VAR_20), "filter should be registered\n");

    VAR_23 = FUNC_4(VAR_20, ((void*)0), ((void*)0), &VAR_8, (void **)&VAR_18);
    FUNC_19(VAR_23 == VAR_9, "BindToStorage failed: %#x\n", VAR_23);

    FUNC_12(&VAR_22);
    VAR_23 = FUNC_7(VAR_18, VAR_15, &VAR_22, ((void*)0));
    FUNC_19(VAR_23 == VAR_9, "Read failed: %#x\n", VAR_23);

    FUNC_9(&VAR_5, VAR_21, VAR_0);
    FUNC_19(!FUNC_16(VAR_21, FUNC_10(&VAR_22)), "expected %s, got %s\n",
        FUNC_21(VAR_21), FUNC_21(FUNC_10(&VAR_22)));

    FUNC_11(&VAR_22);
    VAR_23 = FUNC_7(VAR_18, VAR_12, &VAR_22, ((void*)0));
    FUNC_19(VAR_23 == VAR_9, "Read failed: %#x\n", VAR_23);
    FUNC_19(!FUNC_16(VAR_21, FUNC_10(&VAR_22)), "expected %s, got %s\n",
        FUNC_21(VAR_21), FUNC_21(FUNC_10(&VAR_22)));

    FUNC_11(&VAR_22);
    FUNC_8(VAR_18);

    VAR_23 = FUNC_3(VAR_19, VAR_5);
    FUNC_19(VAR_23 == VAR_9, "UnregisterFilter failed: %#x\n", VAR_23);

    FUNC_19(!FUNC_14(&VAR_4, VAR_20), "filter should not be registered\n");
    FUNC_5(VAR_20);

end:
    FUNC_2(VAR_19);
    FUNC_6(VAR_17);
}
