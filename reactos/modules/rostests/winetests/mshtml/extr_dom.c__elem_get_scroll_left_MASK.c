
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LONG ;
typedef int IUnknown ;
typedef int IHTMLTextContainer ;
typedef int IHTMLElement2 ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,scalar_t__*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,scalar_t__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int *,int *,void**) ;
 scalar_t__ VAR_2 ;
 int * FUNC_5 (unsigned int,int *) ;
 int FUNC_6 (int,char*,scalar_t__,...) ;

__attribute__((used)) static void FUNC_7(unsigned VAR_3, IUnknown *VAR_4)
{
    IHTMLElement2 *VAR_5 = FUNC_5(VAR_3, VAR_4);
    IHTMLTextContainer *VAR_6;
    LONG VAR_7 = -1, VAR_8 = -1;
    HRESULT VAR_9;

    VAR_9 = FUNC_1(VAR_5, ((void*)0));
    FUNC_6(VAR_9 == VAR_0, "expect E_INVALIDARG got 0x%08x\n", VAR_9);

    VAR_9 = FUNC_1(VAR_5, &VAR_7);
    FUNC_6(VAR_9 == VAR_2, "get_scrollTop failed: %08x\n", VAR_9);
    FUNC_0(VAR_5);

    VAR_9 = FUNC_4(VAR_4, &VAR_1, (void**)&VAR_6);
    FUNC_6(VAR_9 == VAR_2, "Could not get IHTMLTextContainer: %08x\n", VAR_9);

    VAR_9 = FUNC_3(VAR_6, &VAR_8);
    FUNC_2(VAR_6);
    FUNC_6(VAR_9 == VAR_2, "IHTMLTextContainer::get_scrollLeft failed: %d\n", VAR_8);
    FUNC_6(VAR_7 == VAR_8, "unexpected left %d, expected %d\n", VAR_8, VAR_7);
}
