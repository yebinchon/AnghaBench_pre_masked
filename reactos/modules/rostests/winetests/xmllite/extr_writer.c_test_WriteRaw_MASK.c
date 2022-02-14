
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int IXmlWriter ;
typedef int IStream ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int *,void**,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,char const*) ;
 scalar_t__ FUNC_6 (int *,int *,char const*,int *,char const*) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,char const*) ;
 scalar_t__ FUNC_9 (int *,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_10 (int,char*,scalar_t__) ;
 int * FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(void)
{
    static const WCHAR VAR_5[] = {'a','<',':',0};
    static const WCHAR VAR_6[] = {'a',0};
    IXmlWriter *VAR_7;
    IStream *VAR_8;
    HRESULT VAR_9;

    VAR_9 = FUNC_1(&VAR_1, (void**)&VAR_7, ((void*)0));
    FUNC_10(VAR_9 == VAR_2, "Expected S_OK, got %08x\n", VAR_9);

    VAR_9 = FUNC_8(VAR_7, ((void*)0));
    FUNC_10(VAR_9 == VAR_2, "got 0x%08x\n", VAR_9);

    VAR_9 = FUNC_8(VAR_7, VAR_5);
    FUNC_10(VAR_9 == VAR_0, "got 0x%08x\n", VAR_9);

    VAR_8 = FUNC_11(VAR_7);

    VAR_9 = FUNC_8(VAR_7, ((void*)0));
    FUNC_10(VAR_9 == VAR_2, "got 0x%08x\n", VAR_9);

    VAR_9 = FUNC_8(VAR_7, VAR_5);
    FUNC_10(VAR_9 == VAR_2, "got 0x%08x\n", VAR_9);

    VAR_9 = FUNC_8(VAR_7, VAR_5);
    FUNC_10(VAR_9 == VAR_2, "got 0x%08x\n", VAR_9);

    VAR_9 = FUNC_5(VAR_7, VAR_5);
    FUNC_10(VAR_9 == VAR_2, "got 0x%08x\n", VAR_9);

    VAR_9 = FUNC_8(VAR_7, VAR_5);
    FUNC_10(VAR_9 == VAR_2, "got 0x%08x\n", VAR_9);

    VAR_9 = FUNC_6(VAR_7, ((void*)0), VAR_6, ((void*)0), VAR_6);
    FUNC_10(VAR_9 == VAR_2, "got 0x%08x\n", VAR_9);

    VAR_9 = FUNC_9(VAR_7, VAR_4);
    FUNC_10(VAR_9 == VAR_3, "got 0x%08x\n", VAR_9);

    VAR_9 = FUNC_5(VAR_7, VAR_5);
    FUNC_10(VAR_9 == VAR_3, "got 0x%08x\n", VAR_9);

    VAR_9 = FUNC_7(VAR_7);
    FUNC_10(VAR_9 == VAR_3, "got 0x%08x\n", VAR_9);

    VAR_9 = FUNC_8(VAR_7, VAR_5);
    FUNC_10(VAR_9 == VAR_3, "got 0x%08x\n", VAR_9);

    VAR_9 = FUNC_3(VAR_7);
    FUNC_10(VAR_9 == VAR_2, "got 0x%08x\n", VAR_9);

    FUNC_0(VAR_8, "<?xml version=\"1.0\" encoding=\"UTF-8\"?>a<:a<:<!--a<:-->a<:<a>a</a>");

    FUNC_4(VAR_7);
    FUNC_2(VAR_8);
}
