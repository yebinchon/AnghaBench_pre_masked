
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef scalar_t__ VARIANT_BOOL ;
typedef int IXMLDOMNode ;
typedef int IXMLDOMDocument ;
typedef scalar_t__ HRESULT ;
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
 int FUNC_6 (int ) ;
 int VAR_3 ;
 int * FUNC_7 (int *) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,char const*) ;
 int FUNC_10 (int,char*,...) ;
 scalar_t__ FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(void)
{
    static const WCHAR VAR_4[] = {'x','m','l',0};
    IXMLDOMDocument *VAR_5;
    IXMLDOMNode *VAR_6;
    VARIANT_BOOL VAR_7;
    HRESULT VAR_8;
    BSTR VAR_9;

    VAR_5 = FUNC_7(&VAR_0);

    VAR_8 = FUNC_2( VAR_5, FUNC_6(VAR_3), &VAR_7 );
    FUNC_10( VAR_8 == VAR_1, "loadXML failed\n");
    FUNC_10( VAR_7 == VAR_2, "failed to load XML string\n");

    VAR_8 = FUNC_1( VAR_5, &VAR_6 );
    FUNC_10( VAR_8 == VAR_1, "ret %08x\n", VAR_8);

    VAR_8 = FUNC_4( VAR_6, &VAR_9 );
    FUNC_10( VAR_8 == VAR_1, "ret %08x\n", VAR_8);

    FUNC_10(!FUNC_9(VAR_9, VAR_4), "expected \"xml\" node name, got %s\n", FUNC_11(VAR_9));

    FUNC_5(VAR_9);
    FUNC_3( VAR_6 );
    FUNC_0( VAR_5 );

    FUNC_8();
}
