
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int XmlNodeType ;
typedef int UINT ;
typedef int IXmlReader ;
typedef int HRESULT ;


 int FUNC_0 (int *,void**,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int*) ;
 int FUNC_2 (int *,int*) ;
 int FUNC_3 (int *,int*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *,int,int,int,int) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int,char*,int) ;
 int FUNC_13 (int *,char const*) ;

__attribute__((used)) static void FUNC_14(void)
{
    static const char *VAR_9 = "<c:a xmlns:c=\"nsdef c\" b=\"attr b\">\n</c:a>";
    IXmlReader *VAR_10;
    XmlNodeType VAR_11;
    UINT VAR_12;
    HRESULT VAR_13;

    VAR_13 = FUNC_0(&VAR_1, (void **)&VAR_10, ((void*)0));
    FUNC_12(VAR_13 == VAR_3, "S_OK, got %08x\n", VAR_13);

    FUNC_8(VAR_10, VAR_7);


    VAR_13 = FUNC_1(VAR_10, ((void*)0));
    FUNC_12(VAR_13 == VAR_0, "Expected E_INVALIDARG, got %08x\n", VAR_13);

    VAR_13 = FUNC_2(VAR_10, ((void*)0));
    FUNC_12(VAR_13 == VAR_0, "Expected E_INVALIDARG, got %08x\n", VAR_13);

    VAR_12 = 123;
    VAR_13 = FUNC_2(VAR_10, &VAR_12);
    FUNC_12(VAR_13 == VAR_2, "got %#x\n", VAR_13);
    FUNC_12(VAR_12 == 0, "got %u\n", VAR_12);

    VAR_12 = 123;
    VAR_13 = FUNC_1(VAR_10, &VAR_12);
    FUNC_12(VAR_13 == VAR_2, "got %#x\n", VAR_13);
    FUNC_12(VAR_12 == 0, "got %u\n", VAR_12);

    FUNC_13(VAR_10, VAR_9);

    FUNC_8(VAR_10, VAR_8);
    FUNC_6(VAR_10, 0, 0);
    VAR_13 = FUNC_3(VAR_10, &VAR_11);
    FUNC_12(VAR_13 == VAR_3, "got %08x\n", VAR_13);
    FUNC_12(VAR_11 == VAR_4, "got type %d\n", VAR_11);
    FUNC_7(VAR_10, 1, 2, ~0u, 34);

    FUNC_11(VAR_10);
    FUNC_7(VAR_10, 1, 6, ~0u, 34);

    FUNC_11(VAR_10);
    FUNC_7(VAR_10, 1, 24, ~0u, 34);

    FUNC_10(VAR_10);
    FUNC_7(VAR_10, 1, 2, ~0u, 34);

    VAR_13 = FUNC_3(VAR_10, &VAR_11);
    FUNC_12(VAR_13 == VAR_3, "got %08x\n", VAR_13);
    FUNC_12(VAR_11 == VAR_6, "got type %d\n", VAR_11);
    FUNC_7(VAR_10, 1, 35, 2, 6);

    VAR_13 = FUNC_3(VAR_10, &VAR_11);
    FUNC_12(VAR_13 == VAR_3, "got %08x\n", VAR_13);
    FUNC_12(VAR_11 == VAR_5, "got type %d\n", VAR_11);
    FUNC_7(VAR_10, 2, 3, 2, 6);

    VAR_13 = FUNC_5(VAR_10, ((void*)0));
    FUNC_12(VAR_13 == VAR_3, "got %08x\n", VAR_13);
    FUNC_9(VAR_10, VAR_8, VAR_7);
    FUNC_6(VAR_10, 0, 0);

    FUNC_4(VAR_10);
}
