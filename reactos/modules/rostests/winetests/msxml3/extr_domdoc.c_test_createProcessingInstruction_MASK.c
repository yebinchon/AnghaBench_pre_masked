
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bodyW ;
typedef char WCHAR ;
typedef int IXMLDOMProcessingInstruction ;
typedef int IXMLDOMDocument ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ,char*,int **) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (char*,char const*,int) ;
 int FUNC_6 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_7(void)
{
    static const WCHAR VAR_2[] = {'t','e','s','t',0};
    IXMLDOMProcessingInstruction *VAR_3;
    IXMLDOMDocument *VAR_4;
    WCHAR VAR_5[10];
    HRESULT VAR_6;

    VAR_4 = FUNC_4(&VAR_0);


    FUNC_5(&VAR_5[2], VAR_2, sizeof(VAR_2));

    *(DWORD*)VAR_5 = 0xf0f0;
    VAR_6 = FUNC_1(VAR_4, FUNC_3("test"), &VAR_5[2], &VAR_3);
    FUNC_6(VAR_6 == VAR_1, "got 0x%08x\n", VAR_6);

    FUNC_2(VAR_3);
    FUNC_0(VAR_4);
}
