
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IXMLDOMNodeList ;
typedef int IXMLDOMNode ;
typedef int IXMLDOMDocument2 ;
typedef int BSTR ;


 int FUNC_0 (int *,int ,int **) ;
 int FUNC_1 (int *,int,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int **) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,char const*) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static inline void FUNC_10(int VAR_0, const char *VAR_1, IXMLDOMDocument2* VAR_2, char const* VAR_3)
{
    IXMLDOMNode *VAR_4, *VAR_5;
    IXMLDOMNodeList *VAR_6;
    BSTR VAR_7;

    FUNC_9(FUNC_0(VAR_2, FUNC_6("//*[local-name()='html']"), &VAR_6));
    FUNC_9(FUNC_1(VAR_6, 0, &VAR_4));
    FUNC_9(FUNC_1(VAR_6, 1, &VAR_5));
    FUNC_9(FUNC_2(VAR_6));
    FUNC_8(VAR_6, "E1.E5.E1.E2.D1 E2.E5.E1.E2.D1");

    FUNC_9(FUNC_4(VAR_4, &VAR_6));
    FUNC_8(VAR_6,
            "[4]1.E1.E5.E1.E2.D1 T2.E1.E5.E1.E2.D1 E3.E1.E5.E1.E2.D1 "
            "E4.E1.E5.E1.E2.D1 E5.E1.E5.E1.E2.D1 E6.E1.E5.E1.E2.D1");
    FUNC_9(FUNC_5(VAR_4, &VAR_7));
    if (VAR_3)
    {
        FUNC_7(VAR_7, VAR_3);
    }
    else
    {
        FUNC_7(VAR_7, " This is a description.");
    }
    FUNC_3(VAR_4);

    FUNC_9(FUNC_4(VAR_5, &VAR_6));
    FUNC_8(VAR_6,
            "T1.E2.E5.E1.E2.D1 E2.E2.E5.E1.E2.D1 T3.E2.E5.E1.E2.D1 "
            "E4.E2.E5.E1.E2.D1 T5.E2.E5.E1.E2.D1 E6.E2.E5.E1.E2.D1 T7.E2.E5.E1.E2.D1");
    FUNC_9(FUNC_5(VAR_5, &VAR_7));
    FUNC_7(VAR_7,
            "\n                This is a description with preserved whitespace. \n            ");
    FUNC_3(VAR_5);
}
