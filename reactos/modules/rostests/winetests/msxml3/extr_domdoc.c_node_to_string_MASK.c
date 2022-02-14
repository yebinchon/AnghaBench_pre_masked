
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IXMLDOMNode ;
typedef scalar_t__ HRESULT ;
typedef int DOMNodeType ;
typedef int BSTR ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *,int **) ;
 scalar_t__ FUNC_5 (int *,int ,int **) ;
 int VAR_0 ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 (int ,char*,scalar_t__) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char*,char*,int) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (char*,char*,int ) ;

__attribute__((used)) static void FUNC_17(IXMLDOMNode *VAR_2, char *VAR_3)
{
    HRESULT VAR_4 = VAR_1;
    DOMNodeType VAR_5;

    if (VAR_2 == ((void*)0))
    {
        FUNC_11(VAR_3, "(null)");
        return;
    }

    FUNC_0(VAR_2);
    while (VAR_4 == VAR_1)
    {
        IXMLDOMNode *VAR_6;

        FUNC_13(FUNC_3(VAR_2, &VAR_5));
        FUNC_10(VAR_5, VAR_3);
        VAR_3+=FUNC_15(VAR_3);

        if (VAR_5 == VAR_0)
        {
            BSTR VAR_7;
            FUNC_13(FUNC_2(VAR_2, &VAR_7));
            *(VAR_3++) = '\'';
            FUNC_16(VAR_3, "%ws", VAR_7);
            VAR_3 += FUNC_15(VAR_3);
            *(VAR_3++) = '\'';
            FUNC_7(VAR_7);

            VAR_4 = FUNC_5(VAR_2, FUNC_8(".."), &VAR_6);
        }
        else
        {
            VAR_4 = FUNC_4(VAR_2, &VAR_6);
            FUNC_14(VAR_3, "%d", FUNC_9(VAR_2));
            VAR_3 += FUNC_15(VAR_3);
        }

        FUNC_12(FUNC_6(VAR_4), "get_parentNode failed (%08x)\n", VAR_4);
        FUNC_1(VAR_2);
        VAR_2 = VAR_6;
        if (VAR_4 == VAR_1)
            *(VAR_3++) = '.';
    }

    *VAR_3 = 0;
}
