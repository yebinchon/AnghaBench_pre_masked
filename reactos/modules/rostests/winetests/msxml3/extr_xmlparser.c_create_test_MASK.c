
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IXMLParser ;
typedef int IXMLNodeFactory ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int *,void**) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int *,int **) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int *,scalar_t__) ;
 scalar_t__ FUNC_8 (int *,int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_9 (int,char*,...) ;
 int VAR_7 ;
 int FUNC_10 (char*,scalar_t__) ;

__attribute__((used)) static void FUNC_11(void)
{
    HRESULT VAR_8;
    IXMLParser *VAR_9;
    IXMLNodeFactory *VAR_10;
    DWORD VAR_11;

    VAR_8 = FUNC_0(&VAR_1, ((void*)0), VAR_0, &VAR_3, (void**)&VAR_9);
    if (FUNC_1(VAR_8))
    {
        FUNC_10("IXMLParser is not available (0x%08x)\n", VAR_8);
        return;
    }

    VAR_11 = FUNC_3(VAR_9);
    FUNC_9(VAR_11 == 0, "Expected 0 got %d\n", VAR_11);

    VAR_8 = FUNC_7(VAR_9, VAR_5);
    FUNC_9(VAR_8 == VAR_4, "Expected S_OK got 0x%08x\n", VAR_8);

    VAR_11 = FUNC_3(VAR_9);
    FUNC_9(VAR_11 == VAR_5, "Expected 0 got %d\n", VAR_11);

    VAR_8 = FUNC_2(VAR_9, ((void*)0));
    FUNC_9(VAR_8 == VAR_2, "Expected S_OK got 0x%08x\n", VAR_8);

    VAR_8 = FUNC_2(VAR_9, &VAR_10);
    FUNC_9(VAR_8 == VAR_4, "Expected S_OK got 0x%08x\n", VAR_8);
    FUNC_9(VAR_10 == ((void*)0), "expected NULL\n");

    VAR_8 = FUNC_6(VAR_9, &VAR_7);
    FUNC_9(VAR_8 == VAR_4, "Expected S_OK got 0x%08x\n", VAR_8);

    VAR_8 = FUNC_2(VAR_9, &VAR_10);
    FUNC_9(VAR_8 == VAR_4, "Expected S_OK got 0x%08x\n", VAR_8);
    FUNC_9(VAR_10 == &VAR_7, "expected NULL\n");

    VAR_8 = FUNC_8(VAR_9, ((void*)0));
    FUNC_9(VAR_8 == VAR_2, "Expected S_OK got 0x%08x\n", VAR_8);

    VAR_8 = FUNC_6(VAR_9, ((void*)0));
    FUNC_9(VAR_8 == VAR_4, "Expected S_OK got 0x%08x\n", VAR_8);

    VAR_8 = FUNC_7(VAR_9, 0);
    FUNC_9(VAR_8 == VAR_4, "Expected S_OK got 0x%08x\n", VAR_8);

    VAR_8 = FUNC_4(VAR_9);
    FUNC_9(VAR_8 == VAR_6, "got 0x%08x\n", VAR_8);

    FUNC_5(VAR_9);
}
