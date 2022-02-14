
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ISupportErrorInfo ;
typedef int IHTMLDocument2 ;
typedef int * HRESULT ;


 int * FUNC_0 (int *,int *,void**) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * FUNC_3 () ;
 int FUNC_4 (int,char*,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(void)
{
    IHTMLDocument2 *VAR_4;
    HRESULT VAR_5;
    ISupportErrorInfo *VAR_6;

    VAR_4 = FUNC_3();

    VAR_5 = FUNC_0(VAR_4, &VAR_1, (void**)&VAR_6);
    FUNC_4(VAR_5 == VAR_3, "got %x\n", VAR_5);
    FUNC_4(VAR_6 != ((void*)0), "got %p\n", VAR_6);
    if(VAR_6)
    {
        VAR_5 = FUNC_1(VAR_6, &VAR_0);
        FUNC_4(VAR_5 == VAR_2, "Expected S_OK, got %x\n", VAR_5);
        FUNC_2(VAR_6);
    }

    FUNC_5(VAR_4);
}
