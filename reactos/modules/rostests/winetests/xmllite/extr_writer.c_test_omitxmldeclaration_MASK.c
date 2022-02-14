
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int IXmlWriter ;
typedef int IStream ;
typedef char* HRESULT ;
typedef int HGLOBAL ;


 int FUNC_0 (int *,char const*) ;
 char* FUNC_1 (int *,void**,int *) ;
 char* FUNC_2 (int *,int *) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int FUNC_5 (int *) ;
 char* FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 char* FUNC_8 (int *,char const*,char const*) ;
 char* FUNC_9 (int *,int ) ;
 char* VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_10 (int,char*,char*) ;
 int * FUNC_11 (int *) ;
 int FUNC_12 (int *,int ) ;

__attribute__((used)) static void FUNC_13(void)
{
    static const char VAR_5[] = "<?xml version=\"1.0\"?>";
    static const WCHAR VAR_6[] = {'v','e','r','s','i','o','n','=','"','1','.','0','"',0};
    static const WCHAR VAR_7[] = {'x','m','l',0};
    IXmlWriter *VAR_8;
    HGLOBAL VAR_9;
    IStream *VAR_10;
    HRESULT VAR_11;
    char *VAR_12;

    VAR_11 = FUNC_1(&VAR_0, (void**)&VAR_8, ((void*)0));
    FUNC_10(VAR_11 == VAR_1, "Expected S_OK, got %08x\n", VAR_11);

    VAR_10 = FUNC_11(VAR_8);

    FUNC_12(VAR_8, VAR_4);

    VAR_11 = FUNC_9(VAR_8, VAR_3);
    FUNC_10(VAR_11 == VAR_1, "got 0x%08x\n", VAR_11);

    VAR_11 = FUNC_6(VAR_8);
    FUNC_10(VAR_11 == VAR_1, "got 0x%08x\n", VAR_11);

    VAR_11 = FUNC_2(VAR_10, &VAR_9);
    FUNC_10(VAR_11 == VAR_1, "got 0x%08x\n", VAR_11);

    VAR_12 = FUNC_3(VAR_9);
    FUNC_10(!VAR_12, "got %p\n", VAR_12);
    FUNC_4(VAR_9);


    VAR_11 = FUNC_9(VAR_8, VAR_3);
    FUNC_10(VAR_11 == VAR_2, "got 0x%08x\n", VAR_11);

    FUNC_5(VAR_10);


    VAR_10 = FUNC_11(VAR_8);

    VAR_11 = FUNC_8(VAR_8, VAR_7, VAR_6);
    FUNC_10(VAR_11 == VAR_1, "got 0x%08x\n", VAR_11);

    VAR_11 = FUNC_6(VAR_8);
    FUNC_10(VAR_11 == VAR_1, "got 0x%08x\n", VAR_11);

    FUNC_0(VAR_10, VAR_5);

    VAR_11 = FUNC_9(VAR_8, VAR_3);
    FUNC_10(VAR_11 == VAR_1, "got 0x%08x\n", VAR_11);

    VAR_11 = FUNC_6(VAR_8);
    FUNC_10(VAR_11 == VAR_1, "got 0x%08x\n", VAR_11);

    FUNC_0(VAR_10, VAR_5);

    VAR_11 = FUNC_9(VAR_8, VAR_3);
    FUNC_10(VAR_11 == VAR_2, "got 0x%08x\n", VAR_11);

    VAR_11 = FUNC_6(VAR_8);
    FUNC_10(VAR_11 == VAR_1, "got 0x%08x\n", VAR_11);

    FUNC_0(VAR_10, VAR_5);


    VAR_11 = FUNC_8(VAR_8, VAR_7, VAR_6);
    FUNC_10(VAR_11 == VAR_2, "got 0x%08x\n", VAR_11);

    VAR_11 = FUNC_6(VAR_8);
    FUNC_10(VAR_11 == VAR_1, "got 0x%08x\n", VAR_11);

    FUNC_5(VAR_10);
    FUNC_7(VAR_8);
}
