
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int IFolder ;
typedef scalar_t__ HRESULT ;
typedef int BSTR ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ,int **) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int,char*,scalar_t__,...) ;

__attribute__((used)) static void FUNC_8(void)
{
    WCHAR VAR_3[VAR_1];
    HRESULT VAR_4;
    BSTR VAR_5;
    IFolder *VAR_6;
    BOOL VAR_7;

    FUNC_6(((void*)0), VAR_3);
    VAR_7 = FUNC_0(VAR_3, ((void*)0));
    FUNC_7(VAR_7, "got %d, %d\n", VAR_7, FUNC_1());


    VAR_5 = FUNC_4(VAR_3);
    VAR_6 = (void*)0xdeabeef;
    VAR_4 = FUNC_2(VAR_2, VAR_5, &VAR_6);
    FUNC_7(VAR_4 == VAR_0, "got 0x%08x\n", VAR_4);
    FUNC_7(VAR_6 == ((void*)0), "got %p\n", VAR_6);
    FUNC_5(VAR_5);
    FUNC_3(VAR_3);
}
