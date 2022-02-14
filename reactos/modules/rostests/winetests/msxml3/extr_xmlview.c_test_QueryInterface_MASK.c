
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef int IHTMLDocument ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *,int,int *,void**) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int *,int *,void**) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (int *,int *,void**) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_9 ;
 int FUNC_6 (int,char*,...) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(void)
{
    IUnknown *VAR_10, *VAR_11;
    IHTMLDocument *VAR_12;
    HRESULT VAR_13;

    VAR_13 = FUNC_0(&VAR_2, ((void*)0), VAR_1|VAR_0,
            &VAR_8, (void**)&VAR_10);
    if(FUNC_1(VAR_13)) {
        FUNC_7("Failed to create XMLView instance\n");
        return;
    }
    FUNC_6(VAR_13 == VAR_9, "CoCreateInstance returned %x, expected S_OK\n", VAR_13);

    VAR_13 = FUNC_4(VAR_10, &VAR_7, (void**)&VAR_11);
    FUNC_6(VAR_13 == VAR_9, "QueryInterface(IID_IPersistMoniker) returned %x, expected S_OK\n", VAR_13);
    FUNC_5(VAR_11);

    VAR_13 = FUNC_4(VAR_10, &VAR_6, (void**)&VAR_11);
    FUNC_6(VAR_13 == VAR_9, "QueryInterface(IID_IPersistHistory) returned %x, expected S_OK\n", VAR_13);
    FUNC_5(VAR_11);

    VAR_13 = FUNC_4(VAR_10, &VAR_4, (void**)&VAR_11);
    FUNC_6(VAR_13 == VAR_9, "QueryInterface(IID_IOleCommandTarget) returned %x, expected S_OK\n", VAR_13);
    FUNC_5(VAR_11);

    VAR_13 = FUNC_4(VAR_10, &VAR_5, (void**)&VAR_11);
    FUNC_6(VAR_13 == VAR_9, "QueryInterface(IID_IOleObject) returned %x, expected S_OK\n", VAR_13);
    FUNC_5(VAR_11);

    VAR_13 = FUNC_4(VAR_10, &VAR_3, (void**)&VAR_12);
    FUNC_6(VAR_13 == VAR_9, "QueryInterface(IID_IHTMLDocument) returned %x, expected S_OK\n", VAR_13);
    VAR_13 = FUNC_2(VAR_12, &VAR_8, (void**)&VAR_11);
    FUNC_6(VAR_13 == VAR_9, "QueryInterface(IID_IUnknown) returned %x, expected S_OK\n", VAR_13);
    FUNC_6(VAR_11 == VAR_10, "Aggregation is not working as expected\n");
    FUNC_5(VAR_11);
    FUNC_3(VAR_12);

    FUNC_5(VAR_10);
}
