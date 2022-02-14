
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef int IHTMLWindow2 ;
typedef int IHTMLFrameElement3 ;
typedef int IHTMLDocument2 ;
typedef int IDispatch ;
typedef int HRESULT ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int **) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int FUNC_5 (int *,int *,void**) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_1 ;
 int * FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int,char*,...) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (char*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_14(IUnknown *VAR_3, BOOL VAR_4)
{
    IHTMLDocument2 *VAR_5, *VAR_6;
    IHTMLFrameElement3 *VAR_7;
    IHTMLWindow2 *VAR_8;
    HRESULT VAR_9;

    VAR_8 = FUNC_8(VAR_3);
    FUNC_12((IUnknown*)VAR_8, VAR_2);
    VAR_5 = FUNC_9(VAR_8);
    FUNC_4(VAR_8);

    VAR_6 = FUNC_7(VAR_3);
    FUNC_11(FUNC_10((IUnknown*)VAR_5, (IUnknown*)VAR_6), "content_doc != elem_doc\n");

    if(!VAR_4) {
        VAR_9 = FUNC_5(VAR_3, &VAR_0, (void**)&VAR_7);
        if(FUNC_6(VAR_9)) {
            IDispatch *VAR_10 = ((void*)0);

            VAR_9 = FUNC_3(VAR_7, &VAR_10);
            FUNC_11(VAR_9 == VAR_1, "get_contentDocument failed: %08x\n", VAR_9);
            FUNC_11(VAR_10 != ((void*)0), "contentDocument == NULL\n");
            FUNC_11(FUNC_10((IUnknown*)VAR_10, (IUnknown*)VAR_5), "contentDocument != contentWindow.document\n");

            FUNC_0(VAR_10);
            FUNC_2(VAR_7);
        }else {
            FUNC_13("IHTMLFrameElement3 not supported\n");
        }
    }

    FUNC_1(VAR_6);
    FUNC_1(VAR_5);
}
