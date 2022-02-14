
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ eventid_t ;
typedef int WCHAR ;
typedef int IDispatch ;
typedef int HTMLDocumentNode ;
typedef int EventTarget ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int *,int *,int ,int *) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int *,scalar_t__,int *) ;

void FUNC_5(HTMLDocumentNode *VAR_1, EventTarget *VAR_2, const WCHAR *VAR_3, IDispatch *VAR_4)
{
    eventid_t VAR_5;

    FUNC_0("(%p %p %s %p)\n", VAR_1, VAR_2, FUNC_3(VAR_3), VAR_4);

    VAR_5 = FUNC_2(VAR_3);
    if(VAR_5 == VAR_0) {
        FUNC_1("Unsupported event %s\n", FUNC_3(VAR_3));
        return;
    }

    FUNC_4(VAR_2, VAR_5, VAR_4);
}
