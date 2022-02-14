
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void WCHAR ;
typedef int ISAXAttributes ;
typedef int IMXAttributes ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ,int *,void**) ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int *,void**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ,int ,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int*) ;
 int FUNC_8 (int *,int ,void const**,int*) ;
 int VAR_6 ;
 int FUNC_9 (char*) ;
 int FUNC_10 () ;
 int FUNC_11 (void const*,int ) ;
 int FUNC_12 (int,char*,void const*) ;
 void const* FUNC_13 (void const*) ;

__attribute__((used)) static void FUNC_14(void)
{
    ISAXAttributes *VAR_7;
    IMXAttributes *VAR_8;
    const WCHAR *VAR_9;
    HRESULT VAR_10;
    int VAR_11;

    VAR_10 = FUNC_0(&VAR_1, ((void*)0), VAR_0,
        &VAR_4, (void**)&VAR_8);
    FUNC_1(VAR_10, VAR_6);

    VAR_10 = FUNC_2(VAR_8, &VAR_5, (void**)&VAR_7);
    FUNC_1(VAR_10, VAR_6);

    VAR_10 = FUNC_8(VAR_7, 0, ((void*)0), ((void*)0));
    FUNC_1(VAR_10, VAR_2);

    VAR_10 = FUNC_8(VAR_7, 0, &VAR_9, &VAR_11);
    FUNC_1(VAR_10, VAR_2);

    VAR_10 = FUNC_5(VAR_8);
    FUNC_1(VAR_10, VAR_6);

    VAR_10 = FUNC_4(VAR_8, FUNC_9("uri"), FUNC_9("local"),
        FUNC_9("qname"), FUNC_9("type"), FUNC_9("value"));
    FUNC_1(VAR_10, VAR_6);

    VAR_11 = -1;
    VAR_10 = FUNC_7(VAR_7, &VAR_11);
    FUNC_1(VAR_10, VAR_6);
    FUNC_12(VAR_11 == 1, "got %d\n", VAR_11);

    VAR_11 = -1;
    VAR_10 = FUNC_8(VAR_7, 0, ((void*)0), &VAR_11);
    FUNC_1(VAR_10, VAR_3);
    FUNC_12(VAR_11 == -1, "got %d\n", VAR_11);

    VAR_9 = (void*)0xdeadbeef;
    VAR_10 = FUNC_8(VAR_7, 0, &VAR_9, ((void*)0));
    FUNC_1(VAR_10, VAR_3);
    FUNC_12(VAR_9 == (void*)0xdeadbeef, "got %p\n", VAR_9);

    VAR_11 = 0;
    VAR_10 = FUNC_8(VAR_7, 0, &VAR_9, &VAR_11);
    FUNC_1(VAR_10, VAR_6);
    FUNC_12(VAR_11 == 5, "got %d\n", VAR_11);
    FUNC_12(!FUNC_11(VAR_9, FUNC_9("qname")), "got %s\n", FUNC_13(VAR_9));

    VAR_10 = FUNC_5(VAR_8);
    FUNC_1(VAR_10, VAR_6);

    VAR_11 = -1;
    VAR_10 = FUNC_7(VAR_7, &VAR_11);
    FUNC_1(VAR_10, VAR_6);
    FUNC_12(VAR_11 == 0, "got %d\n", VAR_11);

    VAR_11 = -1;
    VAR_9 = (void*)0xdeadbeef;
    VAR_10 = FUNC_8(VAR_7, 0, &VAR_9, &VAR_11);
    FUNC_1(VAR_10, VAR_2);
    FUNC_12(VAR_11 == -1, "got %d\n", VAR_11);
    FUNC_12(VAR_9 == (void*)0xdeadbeef, "got %p\n", VAR_9);

    FUNC_3(VAR_8);
    FUNC_6(VAR_7);
    FUNC_10();
}
