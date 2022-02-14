
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VARIANT_BOOL ;
typedef int IXMLDOMNode ;
typedef int IXMLDOMDocument ;
typedef scalar_t__ HRESULT ;
typedef int BSTR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,void**) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ,int *) ;
 scalar_t__ FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 () ;
 int FUNC_10 (int,char*,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(void)
{
    IXMLDOMDocument *VAR_6, *VAR_7;
    IXMLDOMNode *VAR_8;
    VARIANT_BOOL VAR_9;
    HRESULT VAR_10;

    VAR_6 = FUNC_8(&VAR_0);
    VAR_7 = FUNC_8(&VAR_0);

    VAR_10 = FUNC_2(VAR_6, FUNC_6(VAR_5), &VAR_9);
    FUNC_10(VAR_10 == VAR_2, "ret %08x\n", VAR_10 );

    VAR_10 = FUNC_2(VAR_7, FUNC_6(VAR_4), &VAR_9);
    FUNC_10(VAR_10 == VAR_2, "ret %08x\n", VAR_10 );

    VAR_10 = FUNC_0(VAR_7, &VAR_1, (void**)&VAR_8 );
    FUNC_10(VAR_10 == VAR_2, "ret %08x\n", VAR_10 );
    if(VAR_10 == VAR_2)
    {
        BSTR VAR_11;

        VAR_10 = FUNC_3(VAR_6, VAR_8, &VAR_11);
        FUNC_10(VAR_10 == VAR_2, "ret %08x\n", VAR_10 );
        if(VAR_10 == VAR_2)
        {
            FUNC_10( FUNC_7( VAR_11, FUNC_6(VAR_3)), "got output %s\n", FUNC_11(VAR_11));
            FUNC_5(VAR_11);
        }

        FUNC_4(VAR_8);
    }

    FUNC_1(VAR_7);
    FUNC_1(VAR_6);

    FUNC_9();
}
