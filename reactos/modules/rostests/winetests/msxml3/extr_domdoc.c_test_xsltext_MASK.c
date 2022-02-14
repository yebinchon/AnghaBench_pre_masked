
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VARIANT_BOOL ;
typedef int IXMLDOMNode ;
typedef int IXMLDOMDocument ;
typedef scalar_t__ HRESULT ;
typedef int BSTR ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ,int *) ;
 scalar_t__ FUNC_3 (int *,int *,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int,char*,scalar_t__) ;
 char* VAR_2 ;
 char* VAR_3 ;
 scalar_t__ FUNC_10 (int ) ;
 char* VAR_4 ;

__attribute__((used)) static void FUNC_11(void)
{
    IXMLDOMDocument *VAR_5, *VAR_6;
    VARIANT_BOOL VAR_7;
    HRESULT VAR_8;
    BSTR VAR_9;

    VAR_5 = FUNC_6(&VAR_0);
    VAR_6 = FUNC_6(&VAR_0);

    VAR_8 = FUNC_2(VAR_5, FUNC_5(VAR_4), &VAR_7);
    FUNC_0(VAR_8, VAR_1);

    VAR_8 = FUNC_2(VAR_6, FUNC_5("<testkey/>"), &VAR_7);
    FUNC_0(VAR_8, VAR_1);

    VAR_8 = FUNC_3(VAR_6, (IXMLDOMNode*)VAR_5, &VAR_9);
    FUNC_0(VAR_8, VAR_1);
    FUNC_9(!FUNC_8(VAR_9, FUNC_5("testdata")), "transform result %s\n", FUNC_10(VAR_9));
    FUNC_4(VAR_9);


    VAR_8 = FUNC_2(VAR_5, FUNC_5(VAR_3), &VAR_7);
    FUNC_9(VAR_8 == VAR_1, "got 0x%08x\n", VAR_8);
    VAR_8 = FUNC_2(VAR_6, FUNC_5(VAR_2), &VAR_7);
    FUNC_9(VAR_8 == VAR_1, "got 0x%08x\n", VAR_8);

    VAR_8 = FUNC_3(VAR_6, (IXMLDOMNode*)VAR_5, &VAR_9);
    FUNC_9(VAR_8 == VAR_1, "got 0x%08x\n", VAR_8);
    FUNC_9(!FUNC_8(VAR_9, FUNC_5("<node>item1</node><node>item2</node>")), "transform result %s\n", FUNC_10(VAR_9));
    FUNC_4(VAR_9);

    FUNC_1(VAR_6);
    FUNC_1(VAR_5);
    FUNC_7();
}
