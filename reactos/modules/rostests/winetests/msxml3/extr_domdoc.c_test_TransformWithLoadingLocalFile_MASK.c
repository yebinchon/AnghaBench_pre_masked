
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ VARIANT_BOOL ;
typedef int IXMLDOMNode ;
typedef int IXMLDOMDocument ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int BSTR ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,int ,int ,int *,int ,int ,int *) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 (int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_5 (int *,int *,void**) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int ,scalar_t__*) ;
 scalar_t__ FUNC_8 (int *,int *,int *) ;
 int FUNC_9 (int *) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_12 (scalar_t__,char*,int,int *,int *) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int ,int ) ;
 int * FUNC_15 (int *) ;
 int FUNC_16 () ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int,char*,...) ;
 int FUNC_21 (char*,char*) ;
 int FUNC_22 (char*) ;
 char* VAR_9 ;
 char* VAR_10 ;
 char* VAR_11 ;
 char* VAR_12 ;
 char* VAR_13 ;

__attribute__((used)) static void FUNC_23(void)
{
    IXMLDOMDocument *VAR_14;
    IXMLDOMDocument *VAR_15;
    IXMLDOMNode *VAR_16;
    VARIANT_BOOL VAR_17;
    HRESULT VAR_18;
    HANDLE VAR_19;
    DWORD VAR_20;
    char VAR_21[VAR_6];
    int VAR_22;


    FUNC_4(VAR_6, VAR_21);
    FUNC_21(VAR_21, "customers.xml" );

    VAR_19 = FUNC_1(VAR_21, VAR_2, 0, ((void*)0), VAR_0, VAR_1, ((void*)0) );
    FUNC_20(VAR_19 != VAR_5, "Could not create file: %u\n", FUNC_3());
    if(VAR_19 == VAR_5)
        return;

    FUNC_12(VAR_19, VAR_12, FUNC_22(VAR_12), &VAR_20, ((void*)0));
    FUNC_0(VAR_19);


    for(VAR_22=0; VAR_22 < FUNC_22(VAR_21); VAR_22++)
    {
        if(VAR_21[VAR_22] == '\\')
            VAR_21[VAR_22] = '/';
    }

    VAR_14 = FUNC_15(&VAR_3);
    VAR_15 = FUNC_15(&VAR_3);

    VAR_18 = FUNC_7(VAR_14, FUNC_13(VAR_13), &VAR_17);
    FUNC_20(VAR_18 == VAR_7, "ret %08x\n", VAR_18 );
    FUNC_20(VAR_17 == VAR_8, "Expected VARIANT_TRUE got VARIANT_FALSE\n");
    if(VAR_17 == VAR_8)
    {
        BSTR VAR_23;
        BSTR VAR_24 = FUNC_13(VAR_10);
        BSTR VAR_25 = FUNC_13(VAR_11);
        BSTR VAR_26 = FUNC_13(VAR_21);
        int VAR_27 = FUNC_19(VAR_24) + FUNC_19(VAR_25) + FUNC_19(VAR_26) + 1;

        VAR_23 = FUNC_10(((void*)0), VAR_27);
        FUNC_18(VAR_23, VAR_24);
        FUNC_17(VAR_23, VAR_26);
        FUNC_17(VAR_23, VAR_25);

        VAR_18 = FUNC_7(VAR_15, VAR_23, &VAR_17);
        FUNC_20(VAR_18 == VAR_7, "ret %08x\n", VAR_18 );
        FUNC_20(VAR_17 == VAR_8, "Expected VARIANT_TRUE got VARIANT_FALSE\n");
        if(VAR_17 == VAR_8)
        {
            BSTR VAR_28;

            VAR_18 = FUNC_5(VAR_15, &VAR_4, (void**)&VAR_16 );
            FUNC_20(VAR_18 == VAR_7, "ret %08x\n", VAR_18 );
            if(VAR_18 == VAR_7)
            {

                VAR_18 = FUNC_8(VAR_14, VAR_16, &VAR_28);
                FUNC_20(VAR_18 == VAR_7, "ret %08x\n", VAR_18 );
                if(VAR_18 == VAR_7)
                {
                    FUNC_20( FUNC_14( VAR_28, FUNC_13(VAR_9)), "Stylesheet output not correct\n");
                    FUNC_11(VAR_28);
                }

                FUNC_9(VAR_16);
            }
        }

        FUNC_11(VAR_23);
    }

    FUNC_6(VAR_14);
    FUNC_6(VAR_15);

    FUNC_2(VAR_21);
    FUNC_16();
}
