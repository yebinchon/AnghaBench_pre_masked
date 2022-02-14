
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef void ITypeLib ;
typedef void* HRESULT ;


 void* VAR_0 ;
 void* FUNC_0 (char const*,void**) ;
 void* FUNC_1 (int *,int ,void**) ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_2 (int,char*,void*) ;

__attribute__((used)) static void FUNC_3(void)
{
    ITypeLib *VAR_3;
    HRESULT VAR_4;

    static const WCHAR VAR_5[] = {'k','e','r','n','e','l','3','2','.','d','l','l',0};

    VAR_4 = FUNC_0(VAR_5, &VAR_3);
    FUNC_2(VAR_4 == VAR_2, "LoadTypeLib returned: %08x, expected TYPE_E_CANTLOADLIBRARY\n", VAR_4);

    VAR_4 = FUNC_0(((void*)0), ((void*)0));
    FUNC_2(VAR_4 == VAR_0, "Got %#x.\n", VAR_4);

    VAR_3 = (void *)0xdeadbeef;
    VAR_4 = FUNC_0(((void*)0), &VAR_3);
    FUNC_2(VAR_4 == VAR_0, "Got %#x.\n", VAR_4);
    FUNC_2(VAR_3 == (void *)0xdeadbeef, "Got %p.\n", VAR_3);

    VAR_4 = FUNC_1(((void*)0), VAR_1, ((void*)0));
    FUNC_2(VAR_4 == VAR_0, "Got %#x.\n", VAR_4);

    VAR_3 = (void *)0xdeadbeef;
    VAR_4 = FUNC_1(((void*)0), VAR_1, &VAR_3);
    FUNC_2(VAR_4 == VAR_0, "Got %#x.\n", VAR_4);
    FUNC_2(VAR_3 == (void *)0xdeadbeef, "Got %p.\n", VAR_3);
}
