
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int IUri ;
typedef int HRESULT ;


 int VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int,char*,int *,...) ;
 int FUNC_1 (int *,char const*,int ,int ,int **) ;

__attribute__((used)) static void FUNC_2(void) {
    HRESULT VAR_3;
    IUri *VAR_4 = (void*) 0xdeadbeef;
    const WCHAR VAR_5[] = {'#','f','r','a','g','m','e','n','t',0};

    VAR_3 = FUNC_1(((void*)0), VAR_5, 0, 0, &VAR_4);
    FUNC_0(VAR_3 == VAR_0, "Error: CreateUriWithFragment returned 0x%08x, expected 0x%08x.\n", &VAR_3, VAR_0);
    FUNC_0(VAR_4 == ((void*)0), "Error: Expected uri to be NULL, but was %p instead.\n", VAR_4);

    VAR_3 = FUNC_1(VAR_1, VAR_5, 0, 0, ((void*)0));
    FUNC_0(VAR_3 == VAR_0, "Error: CreateUriWithFragment returned 0x%08x, expected 0x%08x.\n", &VAR_3, VAR_0);


    VAR_4 = (void*) 0xdeadbeef;
    VAR_3 = FUNC_1(VAR_2, VAR_5, 0, 0, &VAR_4);
    FUNC_0(VAR_3 == VAR_0, "Error: CreateUriWithFragment returned 0x%08x, expected 0x%08x.\n", &VAR_3, VAR_0);
    FUNC_0(VAR_4 == ((void*)0), "Error: Expected uri to be NULL, but was %p instead.\n", VAR_4);
}
