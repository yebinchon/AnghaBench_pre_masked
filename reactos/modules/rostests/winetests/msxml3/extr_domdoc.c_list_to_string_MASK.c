
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LONG ;
typedef int IXMLDOMNodeList ;
typedef int IXMLDOMNode ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (int *,int*) ;
 int FUNC_1 (int *,int **) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int,char*,scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static char *FUNC_8(IXMLDOMNodeList *VAR_1)
{
    static char VAR_2[4096];
    char *VAR_3 = VAR_2;
    LONG VAR_4 = 0;
    HRESULT VAR_5;
    int VAR_6;

    if (VAR_1 == ((void*)0))
    {
        FUNC_6(VAR_2, "(null)");
        return VAR_2;
    }
    VAR_5 = FUNC_0(VAR_1, &VAR_4);
    FUNC_4(VAR_5 == VAR_0, "got 0x%08x\n", VAR_5);
    for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
    {
        IXMLDOMNode *VAR_7;
        if (VAR_6 > 0)
            *(VAR_3++) = ' ';
        FUNC_5(FUNC_1(VAR_1, &VAR_7));
        FUNC_3(VAR_7, VAR_3);
        VAR_3 += FUNC_7(VAR_3);
        FUNC_2(VAR_7);
    }
    *VAR_3 = 0;
    return VAR_2;
}
