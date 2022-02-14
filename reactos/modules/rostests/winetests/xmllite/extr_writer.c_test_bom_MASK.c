
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int IXmlWriterOutput ;
typedef int IXmlWriter ;
typedef int IUnknown ;
typedef int IStream ;
typedef int HRESULT ;
typedef int HGLOBAL ;


 int FUNC_0 (int *,int ,int **) ;
 int FUNC_1 (int *,void**,int *) ;
 int FUNC_2 (int *,int *,char const*,int **) ;
 int FUNC_3 (int *,int *) ;
 unsigned char* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int *,int ,int *,int *) ;
 int FUNC_12 (int *,char const*,char const*) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,int *,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_15 (int,char*,unsigned char,...) ;
 int FUNC_16 (int *,int ) ;

__attribute__((used)) static void FUNC_17(void)
{
    static const WCHAR VAR_7[] = {'v','e','r','s','i','o','n','=','"','1','.','0','"',0};
    static const WCHAR VAR_8[] = {'u','t','f','-','1','6',0};
    static const WCHAR VAR_9[] = {'x','m','l',0};
    IXmlWriterOutput *VAR_10;
    unsigned char *VAR_11;
    IXmlWriter *VAR_12;
    IStream *VAR_13;
    HGLOBAL VAR_14;
    HRESULT VAR_15;

    VAR_15 = FUNC_0(((void*)0), VAR_2, &VAR_13);
    FUNC_15(VAR_15 == VAR_1, "got 0x%08x\n", VAR_15);

    VAR_15 = FUNC_2((IUnknown*)VAR_13, ((void*)0), VAR_8, &VAR_10);
    FUNC_15(VAR_15 == VAR_1, "got %08x\n", VAR_15);

    VAR_15 = FUNC_1(&VAR_0, (void**)&VAR_12, ((void*)0));
    FUNC_15(VAR_15 == VAR_1, "Expected S_OK, got %08x\n", VAR_15);

    FUNC_16(VAR_12, VAR_5);

    VAR_15 = FUNC_10(VAR_12, VAR_10);
    FUNC_15(VAR_15 == VAR_1, "got 0x%08x\n", VAR_15);


    VAR_15 = FUNC_13(VAR_12, VAR_3);
    FUNC_15(VAR_15 == VAR_1, "got 0x%08x\n", VAR_15);

    VAR_15 = FUNC_8(VAR_12);
    FUNC_15(VAR_15 == VAR_1, "got 0x%08x\n", VAR_15);

    VAR_15 = FUNC_3(VAR_13, &VAR_14);
    FUNC_15(VAR_15 == VAR_1, "got 0x%08x\n", VAR_15);

    VAR_11 = FUNC_4(VAR_14);
    FUNC_15(VAR_11[0] == 0xff && VAR_11[1] == 0xfe, "got %x,%x\n", VAR_11[0], VAR_11[1]);
    FUNC_5(VAR_14);

    FUNC_6(VAR_13);
    FUNC_7(VAR_10);


    VAR_15 = FUNC_0(((void*)0), VAR_2, &VAR_13);
    FUNC_15(VAR_15 == VAR_1, "got 0x%08x\n", VAR_15);

    VAR_15 = FUNC_2((IUnknown*)VAR_13, ((void*)0), VAR_8, &VAR_10);
    FUNC_15(VAR_15 == VAR_1, "got %08x\n", VAR_15);

    VAR_15 = FUNC_10(VAR_12, VAR_10);
    FUNC_15(VAR_15 == VAR_1, "got 0x%08x\n", VAR_15);

    VAR_15 = FUNC_12(VAR_12, VAR_9, VAR_7);
    FUNC_15(VAR_15 == VAR_1, "got 0x%08x\n", VAR_15);

    VAR_15 = FUNC_8(VAR_12);
    FUNC_15(VAR_15 == VAR_1, "got 0x%08x\n", VAR_15);

    VAR_15 = FUNC_3(VAR_13, &VAR_14);
    FUNC_15(VAR_15 == VAR_1, "got 0x%08x\n", VAR_15);

    VAR_11 = FUNC_4(VAR_14);
    FUNC_15(VAR_11[0] == 0xff && VAR_11[1] == 0xfe, "got %x,%x\n", VAR_11[0], VAR_11[1]);
    FUNC_5(VAR_14);

    FUNC_7(VAR_10);
    FUNC_6(VAR_13);


    VAR_15 = FUNC_0(((void*)0), VAR_2, &VAR_13);
    FUNC_15(VAR_15 == VAR_1, "got 0x%08x\n", VAR_15);

    VAR_15 = FUNC_2((IUnknown*)VAR_13, ((void*)0), VAR_8, &VAR_10);
    FUNC_15(VAR_15 == VAR_1, "got %08x\n", VAR_15);

    VAR_15 = FUNC_10(VAR_12, VAR_10);
    FUNC_15(VAR_15 == VAR_1, "got 0x%08x\n", VAR_15);

    VAR_15 = FUNC_14(VAR_12, ((void*)0), VAR_6, ((void*)0));
    FUNC_15(VAR_15 == VAR_1, "got 0x%08x\n", VAR_15);

    VAR_15 = FUNC_8(VAR_12);
    FUNC_15(VAR_15 == VAR_1, "got 0x%08x\n", VAR_15);

    VAR_15 = FUNC_3(VAR_13, &VAR_14);
    FUNC_15(VAR_15 == VAR_1, "got 0x%08x\n", VAR_15);

    VAR_11 = FUNC_4(VAR_14);
    FUNC_15(VAR_11[0] == 0xff && VAR_11[1] == 0xfe, "got %x,%x\n", VAR_11[0], VAR_11[1]);
    FUNC_5(VAR_14);

    FUNC_7(VAR_10);
    FUNC_6(VAR_13);


    VAR_15 = FUNC_0(((void*)0), VAR_2, &VAR_13);
    FUNC_15(VAR_15 == VAR_1, "got 0x%08x\n", VAR_15);

    VAR_15 = FUNC_2((IUnknown*)VAR_13, ((void*)0), VAR_8, &VAR_10);
    FUNC_15(VAR_15 == VAR_1, "got %08x\n", VAR_15);

    VAR_15 = FUNC_10(VAR_12, VAR_10);
    FUNC_15(VAR_15 == VAR_1, "got 0x%08x\n", VAR_15);

    FUNC_16(VAR_12, VAR_4);

    VAR_15 = FUNC_11(VAR_12, ((void*)0), VAR_6, ((void*)0), ((void*)0));
    FUNC_15(VAR_15 == VAR_1, "got 0x%08x\n", VAR_15);

    VAR_15 = FUNC_8(VAR_12);
    FUNC_15(VAR_15 == VAR_1, "got 0x%08x\n", VAR_15);

    VAR_15 = FUNC_3(VAR_13, &VAR_14);
    FUNC_15(VAR_15 == VAR_1, "got 0x%08x\n", VAR_15);

    VAR_11 = FUNC_4(VAR_14);
    FUNC_15(VAR_11[0] == 0xff && VAR_11[1] == 0xfe && VAR_11[2] == '<', "Unexpected output: %#x,%#x,%#x\n",
            VAR_11[0], VAR_11[1], VAR_11[2]);
    FUNC_5(VAR_14);

    FUNC_7(VAR_10);
    FUNC_6(VAR_13);

    FUNC_9(VAR_12);
}
