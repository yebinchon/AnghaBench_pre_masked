
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int IXmlWriterOutput ;
typedef int IXmlWriter ;
typedef int IUnknown ;
typedef int IStream ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (int *,char const*) ;
 scalar_t__ FUNC_1 (int *,int ,int **) ;
 scalar_t__ FUNC_2 (int *,void**,int *) ;
 scalar_t__ FUNC_3 (int *,int *,char const*,int **) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int *) ;
 scalar_t__ FUNC_9 (int *,char const*,char const*) ;
 scalar_t__ FUNC_10 (int *,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_11 (int,char*,scalar_t__) ;
 int * FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(void)
{
    static const char VAR_7[] = "<?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"yes\"?>";
    static const char *VAR_8 = "<?xml version=\"1.0\" encoding=\"uS-asCii\"?>";
    static const char VAR_9[] = "<?xml version=\"1.0\"?>";
    static const WCHAR VAR_10[] = {'v','e','r','s','i','o','n','=','"','1','.','0','"',0};
    static const WCHAR VAR_11[] = {'u','S','-','a','s','C','i','i',0};
    static const WCHAR VAR_12[] = {'x','m','l',0};
    IXmlWriterOutput *VAR_13;
    IXmlWriter *VAR_14;
    IStream *VAR_15;
    HRESULT VAR_16;

    VAR_16 = FUNC_2(&VAR_1, (void**)&VAR_14, ((void*)0));
    FUNC_11(VAR_16 == VAR_2, "Expected S_OK, got %08x\n", VAR_16);


    VAR_16 = FUNC_10(VAR_14, VAR_6);
    FUNC_11(VAR_16 == VAR_0, "got 0x%08x\n", VAR_16);

    VAR_16 = FUNC_9(VAR_14, VAR_12, VAR_10);
    FUNC_11(VAR_16 == VAR_0, "got 0x%08x\n", VAR_16);

    VAR_16 = FUNC_6(VAR_14);
    FUNC_11(VAR_16 == VAR_2, "got 0x%08x\n", VAR_16);

    VAR_15 = FUNC_12(VAR_14);


    VAR_16 = FUNC_6(VAR_14);
    FUNC_11(VAR_16 == VAR_2, "got 0x%08x\n", VAR_16);

    VAR_16 = FUNC_10(VAR_14, VAR_6);
    FUNC_11(VAR_16 == VAR_2, "got 0x%08x\n", VAR_16);

    VAR_16 = FUNC_6(VAR_14);
    FUNC_11(VAR_16 == VAR_2, "got 0x%08x\n", VAR_16);

    FUNC_0(VAR_15, VAR_7);


    VAR_16 = FUNC_10(VAR_14, VAR_6);
    FUNC_11(VAR_16 == VAR_4, "got 0x%08x\n", VAR_16);
    FUNC_4(VAR_15);


    VAR_15 = FUNC_12(VAR_14);

    VAR_16 = FUNC_9(VAR_14, VAR_12, VAR_10);
    FUNC_11(VAR_16 == VAR_2, "got 0x%08x\n", VAR_16);

    VAR_16 = FUNC_10(VAR_14, VAR_6);
    FUNC_11(VAR_16 == VAR_2, "got 0x%08x\n", VAR_16);

    VAR_16 = FUNC_10(VAR_14, VAR_6);
    FUNC_11(VAR_16 == VAR_4, "got 0x%08x\n", VAR_16);


    VAR_16 = FUNC_9(VAR_14, VAR_12, VAR_10);
    FUNC_11(VAR_16 == VAR_4, "got 0x%08x\n", VAR_16);

    VAR_16 = FUNC_6(VAR_14);
    FUNC_11(VAR_16 == VAR_2, "got 0x%08x\n", VAR_16);

    FUNC_0(VAR_15, VAR_9);

    FUNC_4(VAR_15);
    FUNC_7(VAR_14);


    VAR_16 = FUNC_1(((void*)0), VAR_3, &VAR_15);
    FUNC_11(VAR_16 == VAR_2, "got 0x%08x\n", VAR_16);

    VAR_13 = ((void*)0);
    VAR_16 = FUNC_3((IUnknown *)VAR_15, ((void*)0), VAR_11, &VAR_13);
    FUNC_11(VAR_16 == VAR_2, "got %08x\n", VAR_16);

    VAR_16 = FUNC_2(&VAR_1, (void **)&VAR_14, ((void*)0));
    FUNC_11(VAR_16 == VAR_2, "Expected S_OK, got %08x\n", VAR_16);

    VAR_16 = FUNC_8(VAR_14, VAR_13);
    FUNC_11(VAR_16 == VAR_2, "got %08x\n", VAR_16);

    VAR_16 = FUNC_10(VAR_14, VAR_5);
    FUNC_11(VAR_16 == VAR_2, "got 0x%08x\n", VAR_16);

    VAR_16 = FUNC_6(VAR_14);
    FUNC_11(VAR_16 == VAR_2, "got 0x%08x\n", VAR_16);

    FUNC_0(VAR_15, VAR_8);

    FUNC_4(VAR_15);
    FUNC_7(VAR_14);
    FUNC_5(VAR_13);
}
