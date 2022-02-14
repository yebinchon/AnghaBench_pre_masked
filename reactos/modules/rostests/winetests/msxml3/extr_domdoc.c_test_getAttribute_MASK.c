
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VARIANT_BOOL ;
typedef int VARIANT ;
typedef int IXMLDOMElement ;
typedef int IXMLDOMDocument ;
typedef int HRESULT ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int **) ;
 int FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*) ;
 int * FUNC_11 (int *) ;
 int FUNC_12 () ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int,char*,scalar_t__) ;
 char* VAR_5 ;
 scalar_t__ FUNC_15 (int ) ;

__attribute__((used)) static void FUNC_16(void)
{
    IXMLDOMDocument *VAR_6;
    IXMLDOMElement *VAR_7;
    VARIANT_BOOL VAR_8;
    VARIANT VAR_9;
    HRESULT VAR_10;

    VAR_6 = FUNC_11(&VAR_0);

    VAR_10 = FUNC_3(VAR_6, FUNC_10(VAR_5), &VAR_8);
    FUNC_0(VAR_10, VAR_2);

    VAR_10 = FUNC_2(VAR_6, &VAR_7);
    FUNC_0(VAR_10, VAR_2);

    FUNC_9(&VAR_9);
    VAR_10 = FUNC_5( VAR_7, FUNC_10("xmlns:foo"), &VAR_9 );
    FUNC_0(VAR_10, VAR_2);
    FUNC_14( FUNC_7(&VAR_9) == VAR_3, "vt = %x\n", FUNC_7(&VAR_9));
    FUNC_14( !FUNC_13(FUNC_6(&VAR_9), FUNC_10("urn:uuid:86B2F87F-ACB6-45cd-8B77-9BDB92A01A29")), "wrong attr value: %s\n", FUNC_15(FUNC_6(&VAR_9)));
    FUNC_8(&VAR_9);

    VAR_10 = FUNC_5( VAR_7, FUNC_10("a"), &VAR_9 );
    FUNC_0(VAR_10, VAR_2);
    FUNC_14( FUNC_7(&VAR_9) == VAR_3, "vt = %x\n", FUNC_7(&VAR_9));
    FUNC_14( !FUNC_13(FUNC_6(&VAR_9), FUNC_10("attr a")), "wrong attr value: %s\n", FUNC_15(FUNC_6(&VAR_9)));
    FUNC_8(&VAR_9);

    VAR_10 = FUNC_5( VAR_7, FUNC_10("foo:b"), &VAR_9 );
    FUNC_0(VAR_10, VAR_2);
    FUNC_14( FUNC_7(&VAR_9) == VAR_3, "vt = %x\n", FUNC_7(&VAR_9));
    FUNC_14( !FUNC_13(FUNC_6(&VAR_9), FUNC_10("attr b")), "wrong attr value: %s\n", FUNC_15(FUNC_6(&VAR_9)));
    FUNC_8(&VAR_9);

    VAR_10 = FUNC_5( VAR_7, FUNC_10("b"), &VAR_9 );
    FUNC_0(VAR_10, VAR_1);
    FUNC_14( FUNC_7(&VAR_9) == VAR_4, "vt = %x\n", FUNC_7(&VAR_9));
    FUNC_8(&VAR_9);

    VAR_10 = FUNC_5( VAR_7, FUNC_10("non-existent"), &VAR_9 );
    FUNC_0(VAR_10, VAR_1);
    FUNC_14( FUNC_7(&VAR_9) == VAR_4, "vt = %x\n", FUNC_7(&VAR_9));
    FUNC_8(&VAR_9);

    FUNC_4(VAR_7);
    FUNC_1(VAR_6);
    FUNC_12();
}
