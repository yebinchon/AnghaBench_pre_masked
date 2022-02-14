
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IHTMLDocument2 ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(IHTMLDocument2 *VAR_3)
{
    HRESULT VAR_4;

    FUNC_2(VAR_3, VAR_0, ((void*)0));
    FUNC_2(VAR_3, VAR_2, ((void*)0));

    VAR_4 = FUNC_0(VAR_3, ((void*)0));
    FUNC_3(VAR_4 == VAR_1,
       "Expected IHTMLDocument2::write to return S_OK, got 0x%08x\n", VAR_4);

    VAR_4 = FUNC_1(VAR_3, ((void*)0));
    FUNC_3(VAR_4 == VAR_1,
       "Expected IHTMLDocument2::writeln to return S_OK, got 0x%08x\n", VAR_4);
}
