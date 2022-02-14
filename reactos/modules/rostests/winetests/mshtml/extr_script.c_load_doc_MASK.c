
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef char OLECHAR ;
typedef int MSG ;
typedef int IUnknown ;
typedef int IHTMLElement ;
typedef int IHTMLDocument2 ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ DISPID ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int *,int ,int ) ;
 scalar_t__ FUNC_2 (int *,int **) ;
 scalar_t__ FUNC_3 (int *,int *,char**,int,int ,scalar_t__*) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int *) ;
 int VAR_6 ;
 int FUNC_7 (int *,char const*) ;
 int FUNC_8 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_9(IHTMLDocument2 *VAR_7, const char *VAR_8)
{
    IHTMLElement *VAR_9 = ((void*)0);
    MSG VAR_10;
    HRESULT VAR_11;
    static const WCHAR VAR_12[] = {'b','a','c','k','g','r','o','u','n','d',0};
    DISPID VAR_13 = -1;
    OLECHAR *VAR_14;

    FUNC_7(VAR_7, VAR_8);
    FUNC_6(VAR_7, &VAR_1, (IUnknown*)&VAR_4);

    while(!VAR_6 && FUNC_1(&VAR_10, ((void*)0), 0, 0)) {
        FUNC_5(&VAR_10);
        FUNC_0(&VAR_10);
    }

    VAR_11 = FUNC_2(VAR_7, &VAR_9);
    FUNC_8(VAR_11 == VAR_5, "get_body failed: %08x\n", VAR_11);


    VAR_14 = (WCHAR*)VAR_12;
    VAR_11 = FUNC_3(VAR_9, &VAR_2, &VAR_14, 1, VAR_3, &VAR_13);
    FUNC_8(VAR_11 == VAR_5, "GetIDsOfNames(background) failed %08x\n", VAR_11);
    FUNC_8(VAR_13 == VAR_0, "Incorrect dispID got (%d)\n", VAR_13);

    FUNC_4(VAR_9);
}
