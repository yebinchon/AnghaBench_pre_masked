
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IXMLDOMNode ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int **) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(IXMLDOMNode *VAR_1)
{
    HRESULT VAR_2;
    int VAR_3 = 0;

    FUNC_0(VAR_1);
    do
    {
        IXMLDOMNode *VAR_4;

        VAR_3++;
        VAR_2 = FUNC_2(VAR_1, &VAR_4);
        FUNC_4(FUNC_3(VAR_2), "get_previousSibling failed\n");
        FUNC_1(VAR_1);
        VAR_1 = VAR_4;
    } while (VAR_2 == VAR_0);
    return VAR_3;
}
