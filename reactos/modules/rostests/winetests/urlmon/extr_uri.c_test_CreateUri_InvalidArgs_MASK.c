
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int IUri ;
typedef int HRESULT ;


 int VAR_0 ;
 char const* VAR_1 ;
 int FUNC_0 (int,char*,int *,...) ;
 int FUNC_1 (char const*,int ,int ,int **) ;

__attribute__((used)) static void FUNC_2(void) {
    HRESULT VAR_2;
    IUri *VAR_3 = (void*) 0xdeadbeef;

    const WCHAR VAR_4[] = {'i','n','v','a','l','i','d',0};
    static const WCHAR VAR_5[] = {0};

    VAR_2 = FUNC_1(VAR_1, 0, 0, ((void*)0));
    FUNC_0(VAR_2 == VAR_0, "Error: CreateUri returned 0x%08x, expected 0x%08x\n", &VAR_2, VAR_0);

    VAR_2 = FUNC_1(((void*)0), 0, 0, &VAR_3);
    FUNC_0(VAR_2 == VAR_0, "Error: CreateUri returned 0x%08x, expected 0x%08x\n", &VAR_2, VAR_0);
    FUNC_0(VAR_3 == ((void*)0), "Error: Expected the IUri to be NULL, but it was %p instead\n", VAR_3);

    VAR_3 = (void*) 0xdeadbeef;
    VAR_2 = FUNC_1(VAR_4, 0, 0, &VAR_3);
    FUNC_0(VAR_2 == VAR_0, "Error: CreateUri returned 0x%08x, expected 0x%08x.\n", &VAR_2, VAR_0);
    FUNC_0(VAR_3 == ((void*)0), "Error: Expected the IUri to be NULL, but it was %p instead\n", VAR_3);

    VAR_3 = (void*) 0xdeadbeef;
    VAR_2 = FUNC_1(VAR_5, 0, 0, &VAR_3);
    FUNC_0(VAR_2 == VAR_0, "Error: CreateUri returned 0x%08x, expected 0x%08x.\n", &VAR_2, VAR_0);
    FUNC_0(VAR_3 == ((void*)0), "Error: Expected the IUri to be NULL, but it was %p instead\n", VAR_3);
}
