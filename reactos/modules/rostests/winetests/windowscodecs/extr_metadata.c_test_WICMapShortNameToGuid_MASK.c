
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char WCHAR ;
typedef scalar_t__ HRESULT ;
typedef int GUID ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (unsigned char const*,int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(void)
{
    static const WCHAR VAR_6[] = { 'u','n','k',0 };
    static const WCHAR VAR_7[] = { 'x','m','p',0 };
    static const WCHAR VAR_8[] = { 'X','m','P',0 };
    static const WCHAR VAR_9[] = { 'u','n','k','n','o','w','n',0 };
    HRESULT VAR_10;
    GUID VAR_11;

    VAR_10 = FUNC_1(((void*)0), ((void*)0));
    FUNC_2(VAR_10 == VAR_0, "got %#x\n", VAR_10);

    VAR_10 = FUNC_1(((void*)0), &VAR_11);
    FUNC_2(VAR_10 == VAR_0, "got %#x\n", VAR_10);

    VAR_10 = FUNC_1(VAR_9, ((void*)0));
    FUNC_2(VAR_10 == VAR_0, "got %#x\n", VAR_10);

    VAR_10 = FUNC_1(VAR_6, &VAR_11);
    FUNC_2(VAR_10 == VAR_5, "got %#x\n", VAR_10);

    VAR_10 = FUNC_1(VAR_9, &VAR_11);
    FUNC_2(VAR_10 == VAR_4, "got %#x\n", VAR_10);
    FUNC_2(FUNC_0(&VAR_11, &VAR_1), "got %s\n", FUNC_3(&VAR_11));

    VAR_10 = FUNC_1(VAR_7, &VAR_11);
    FUNC_2(VAR_10 == VAR_4, "got %#x\n", VAR_10);
    FUNC_2(FUNC_0(&VAR_11, &VAR_2), "got %s\n", FUNC_3(&VAR_11));

    VAR_11 = VAR_3;
    VAR_10 = FUNC_1(VAR_8, &VAR_11);
    FUNC_2(VAR_10 == VAR_4, "got %#x\n", VAR_10);
    FUNC_2(FUNC_0(&VAR_11, &VAR_2), "got %s\n", FUNC_3(&VAR_11));
}
