
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ VARIANT_BOOL ;
typedef int IXMLDOMElement ;
typedef int IXMLDOMDocument ;
typedef scalar_t__ HRESULT ;
typedef char CHAR ;
typedef int BSTR ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int **) ;
 scalar_t__ FUNC_2 (int *,int ,scalar_t__*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (char const*) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int,char*,...) ;

__attribute__((used)) static void FUNC_11(void)
{
    IXMLDOMDocument *VAR_3;
    IXMLDOMElement *VAR_4;
    VARIANT_BOOL VAR_5;
    HRESULT VAR_6;
    BSTR VAR_7;
    static const CHAR VAR_8[] = "<?xml version=\"1.0\"?>\n<Root>\n\t<Sub val=\"A\" />\n</Root>";
    static const CHAR VAR_9[] = "<Root>\r\n\t<Sub val=\"A\"/>\r\n</Root>";

    VAR_3 = FUNC_7(&VAR_0);

    VAR_6 = FUNC_2(VAR_3, FUNC_6(VAR_8), &VAR_5);
    FUNC_10(VAR_6 == VAR_1, "ret %08x\n", VAR_6 );
    FUNC_10(VAR_5 == VAR_2, "Expected VARIANT_TRUE got VARIANT_FALSE\n");

    if(VAR_5 == VAR_2)
    {
        VAR_6 = FUNC_1(VAR_3, &VAR_4);
        FUNC_10(VAR_6 == VAR_1, "ret %08x\n", VAR_6 );
        if(VAR_6 == VAR_1)
        {
            VAR_6 = FUNC_4(VAR_4, &VAR_7);
            FUNC_10(VAR_6 == VAR_1, "ret %08x\n", VAR_6 );
            FUNC_10( !FUNC_9( VAR_7, FUNC_6(VAR_9) ), "incorrect element xml\n");
            FUNC_5(VAR_7);

            FUNC_3(VAR_4);
        }
    }

    FUNC_0(VAR_3);

    FUNC_8();
}
