
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* testfunc_t ) (int *) ;
typedef int MSG ;
typedef int IUnknown ;
typedef int IHTMLElement ;
typedef int IHTMLDocument2 ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int *,int ,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int **) ;
 scalar_t__ FUNC_4 (int *,int **) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int *) ;
 int * FUNC_8 () ;
 int FUNC_9 (int *,int *,int *) ;
 int VAR_5 ;
 int FUNC_10 (int *,char const*) ;
 int FUNC_11 (int,char*,...) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (char*) ;
 int * VAR_6 ;

__attribute__((used)) static void FUNC_14(const char *VAR_7, testfunc_t VAR_8)
{
    IHTMLDocument2 *VAR_9;
    IHTMLElement *VAR_10 = ((void*)0);
    MSG VAR_11;
    HRESULT VAR_12;

    VAR_9 = FUNC_8();
    if (!VAR_9)
        return;
    FUNC_12(VAR_9, VAR_4);
    FUNC_10(VAR_9, VAR_7);
    FUNC_9((IUnknown*)VAR_9, &VAR_1, (IUnknown*)&VAR_2);

    while(!VAR_5 && FUNC_1(&VAR_11, ((void*)0), 0, 0)) {
        FUNC_7(&VAR_11);
        FUNC_0(&VAR_11);
    }

    VAR_12 = FUNC_3(VAR_9, &VAR_10);
    FUNC_11(VAR_12 == VAR_3, "get_body failed: %08x\n", VAR_12);

    if(VAR_10) {
        FUNC_5(VAR_10);

        VAR_12 = FUNC_4(VAR_9, &VAR_6);
        FUNC_11(VAR_12 == VAR_3, "get_parentWindow failed: %08x\n", VAR_12);
        FUNC_11(VAR_6 != ((void*)0), "window == NULL\n");

        VAR_8(VAR_9);

        FUNC_6(VAR_6);
        VAR_6 = ((void*)0);
    }else {
        FUNC_13("Could not get document body. Assuming no Gecko installed.\n");
    }

    FUNC_12(VAR_9, VAR_0);
    FUNC_2(VAR_9);
}
