
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IOleControl ;
typedef int IHTMLDocument2 ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int *,void**) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_5(IHTMLDocument2 *VAR_3)
{
    IOleControl *VAR_4 = ((void*)0);
    HRESULT VAR_5;

    VAR_5 = FUNC_1(VAR_3, &VAR_1, (void**)&VAR_4);
    FUNC_4(VAR_5 == VAR_2, "QueryInterface(IID_IOleControl failed: %08x\n", VAR_5);
    if(FUNC_0(VAR_5))
        return;

    VAR_5 = FUNC_2(VAR_4, VAR_0);
    FUNC_4(VAR_5 == VAR_2, "OnAmbientPropertyChange failed: %08x\n", VAR_5);

    FUNC_3(VAR_4);
}
