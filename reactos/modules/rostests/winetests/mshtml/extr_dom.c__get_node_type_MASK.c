
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LONG ;
typedef int IUnknown ;
typedef int IHTMLDOMNode ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int*) ;
 scalar_t__ VAR_0 ;
 int * FUNC_2 (unsigned int,int *) ;
 int FUNC_3 (int,char*,scalar_t__) ;

__attribute__((used)) static LONG FUNC_4(unsigned VAR_1, IUnknown *VAR_2)
{
    IHTMLDOMNode *VAR_3 = FUNC_2(VAR_1, VAR_2);
    LONG VAR_4 = -1;
    HRESULT VAR_5;

    VAR_5 = FUNC_1(VAR_3, &VAR_4);
    FUNC_3(VAR_5 == VAR_0, "get_nodeType failed: %08x\n", VAR_5);

    FUNC_0(VAR_3);

    return VAR_4;
}
