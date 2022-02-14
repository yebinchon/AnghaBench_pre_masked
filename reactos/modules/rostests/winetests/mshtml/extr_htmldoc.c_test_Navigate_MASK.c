
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IHlinkTarget ;
typedef int IHTMLDocument2 ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int *,void**) ;
 scalar_t__ FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_6(IHTMLDocument2 *VAR_3)
{
    IHlinkTarget *VAR_4;
    HRESULT VAR_5;

    VAR_5 = FUNC_1(VAR_3, &VAR_1, (void**)&VAR_4);
    FUNC_5(VAR_5 == VAR_2, "QueryInterface(IID_IHlinkTarget) failed: %08x\n", VAR_5);

    FUNC_4(VAR_0);
    VAR_5 = FUNC_2(VAR_4, 0, ((void*)0));
    FUNC_5(VAR_5 == VAR_2, "Navigate failed: %08x\n", VAR_5);
    FUNC_0(VAR_0);

    FUNC_3(VAR_4);
}
