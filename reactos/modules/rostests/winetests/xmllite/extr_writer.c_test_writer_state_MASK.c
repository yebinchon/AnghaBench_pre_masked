
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int IXmlWriter ;
typedef int IStream ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (int *,void**,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *,char const*,int *,char const*) ;
 scalar_t__ FUNC_4 (int *,char const*) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,char const*) ;
 scalar_t__ FUNC_9 (int *,char const*) ;
 scalar_t__ FUNC_10 (int *,char const*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_11 (int *,scalar_t__) ;
 int FUNC_12 (int,char*,scalar_t__) ;
 int * FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14(void)
{
    static const WCHAR VAR_4[] = {'a',0};
    IXmlWriter *VAR_5;
    IStream *VAR_6;
    HRESULT VAR_7;

    VAR_7 = FUNC_0(&VAR_1, (void**)&VAR_5, ((void*)0));
    FUNC_12(VAR_7 == VAR_2, "Expected S_OK, got %08x\n", VAR_7);


    FUNC_11(VAR_5, VAR_0);


    VAR_6 = FUNC_13(VAR_5);

    VAR_7 = FUNC_6(VAR_5);
    FUNC_12(VAR_7 == VAR_3, "got 0x%08x\n", VAR_7);

    FUNC_11(VAR_5, VAR_3);
    FUNC_1(VAR_6);


    VAR_6 = FUNC_13(VAR_5);

    VAR_7 = FUNC_3(VAR_5, ((void*)0), VAR_4, ((void*)0), VAR_4);
    FUNC_12(VAR_7 == VAR_3, "got 0x%08x\n", VAR_7);

    FUNC_11(VAR_5, VAR_3);
    FUNC_1(VAR_6);


    VAR_6 = FUNC_13(VAR_5);

    VAR_7 = FUNC_5(VAR_5);
    FUNC_12(VAR_7 == VAR_3, "got 0x%08x\n", VAR_7);

    FUNC_11(VAR_5, VAR_3);
    FUNC_1(VAR_6);


    VAR_6 = FUNC_13(VAR_5);

    VAR_7 = FUNC_7(VAR_5);
    FUNC_12(VAR_7 == VAR_3, "got 0x%08x\n", VAR_7);

    FUNC_11(VAR_5, VAR_3);
    FUNC_1(VAR_6);


    VAR_6 = FUNC_13(VAR_5);

    VAR_7 = FUNC_4(VAR_5, VAR_4);
    FUNC_12(VAR_7 == VAR_3, "got 0x%08x\n", VAR_7);

    FUNC_11(VAR_5, VAR_3);
    FUNC_1(VAR_6);


    VAR_6 = FUNC_13(VAR_5);

    VAR_7 = FUNC_8(VAR_5, VAR_4);
    FUNC_12(VAR_7 == VAR_3, "got 0x%08x\n", VAR_7);

    FUNC_11(VAR_5, VAR_3);
    FUNC_1(VAR_6);


    VAR_6 = FUNC_13(VAR_5);

    VAR_7 = FUNC_9(VAR_5, VAR_4);
    FUNC_12(VAR_7 == VAR_3, "got 0x%08x\n", VAR_7);

    FUNC_11(VAR_5, VAR_3);
    FUNC_1(VAR_6);


    VAR_6 = FUNC_13(VAR_5);

    VAR_7 = FUNC_10(VAR_5, VAR_4);
    FUNC_12(VAR_7 == VAR_3, "got 0x%08x\n", VAR_7);

    FUNC_11(VAR_5, VAR_3);
    FUNC_1(VAR_6);

    FUNC_2(VAR_5);
}
