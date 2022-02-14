
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG ;
typedef int IUnknown ;
typedef int IHTMLDocument2 ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (int *,int *,void**) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(IHTMLDocument2 *VAR_2)
{
    IUnknown *VAR_3;
    ULONG VAR_4;
    HRESULT VAR_5;



    VAR_5 = FUNC_0(VAR_2, &VAR_0, (void**)&VAR_3);
    FUNC_3(VAR_5 == VAR_1, "Could not get IUnknown iface: %08x\n", VAR_5);

    FUNC_1(VAR_2);
    VAR_4 = FUNC_2(VAR_3);
    FUNC_3(!VAR_4, "ref = %d\n", VAR_4);
}
