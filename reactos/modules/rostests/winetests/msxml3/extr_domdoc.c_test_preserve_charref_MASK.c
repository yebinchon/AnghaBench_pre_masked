
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef scalar_t__ VARIANT_BOOL ;
typedef int IXMLDOMNodeList ;
typedef int IXMLDOMNode ;
typedef int IXMLDOMElement ;
typedef int IXMLDOMDocument2 ;
typedef scalar_t__ HRESULT ;
typedef int BSTR ;


 scalar_t__ FUNC_0 (int *,int **) ;
 scalar_t__ FUNC_1 (int *,int ,scalar_t__*) ;
 scalar_t__ FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int **) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int,int **) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_9 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_10 (int ) ;
 int VAR_2 ;
 int FUNC_11 (int ,char const*) ;
 int FUNC_12 (int,char*,scalar_t__,...) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static void FUNC_14(IXMLDOMDocument2 *VAR_3, VARIANT_BOOL VAR_4)
{
    static const WCHAR VAR_5[] = {' ','T','e','x','t',' ','A',' ','e','n','d',' ',0};
    static const WCHAR VAR_6[] = {'T','e','x','t',' ','A',' ','e','n','d',0};
    static const WCHAR VAR_7[] = {'A','B',' ','C',' ',0};
    static const WCHAR VAR_8[] = {'A','B',' ','C',0};
    IXMLDOMNodeList *VAR_9;
    IXMLDOMElement *VAR_10;
    IXMLDOMNode *VAR_11;
    const WCHAR *VAR_12;
    VARIANT_BOOL VAR_13;
    HRESULT VAR_14;
    BSTR VAR_15;

    VAR_14 = FUNC_2(VAR_3, VAR_4);
    FUNC_12(VAR_14 == VAR_0, "got 0x%08x\n", VAR_14);

    VAR_14 = FUNC_1(VAR_3, FUNC_10(VAR_2), &VAR_13);
    FUNC_12(VAR_14 == VAR_0, "got 0x%08x\n", VAR_14);

    VAR_14 = FUNC_0(VAR_3, &VAR_10);
    FUNC_12(VAR_14 == VAR_0, "got 0x%08x\n", VAR_14);

    VAR_14 = FUNC_4(VAR_10, &VAR_9);
    FUNC_12(VAR_14 == VAR_0, "got 0x%08x\n", VAR_14);
    FUNC_3(VAR_10);

    VAR_12 = VAR_4 == VAR_1 ? VAR_5 : VAR_6;
    VAR_14 = FUNC_6(VAR_9, 0, &VAR_11);
    FUNC_12(VAR_14 == VAR_0, "got 0x%08x\n", VAR_14);
    VAR_14 = FUNC_8(VAR_11, &VAR_15);
    FUNC_12(VAR_14 == VAR_0, "got 0x%08x\n", VAR_14);
    FUNC_12(!FUNC_11(VAR_15, VAR_12), "0x%x, got %s\n", VAR_4, FUNC_13(VAR_15));
    FUNC_9(VAR_15);
    FUNC_7(VAR_11);

    VAR_12 = VAR_4 == VAR_1 ? VAR_7 : VAR_8;
    VAR_14 = FUNC_6(VAR_9, 1, &VAR_11);
    FUNC_12(VAR_14 == VAR_0, "got 0x%08x\n", VAR_14);
    VAR_14 = FUNC_8(VAR_11, &VAR_15);
    FUNC_12(VAR_14 == VAR_0, "got 0x%08x\n", VAR_14);
    FUNC_12(!FUNC_11(VAR_15, VAR_12), "0x%x, got %s\n", VAR_4, FUNC_13(VAR_15));
    FUNC_9(VAR_15);
    FUNC_7(VAR_11);

    FUNC_5(VAR_9);
}
