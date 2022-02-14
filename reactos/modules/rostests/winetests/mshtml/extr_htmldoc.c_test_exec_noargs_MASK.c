
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef int IOleCommandTarget ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int *,int ,int ,int *,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *,void**) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_5(IUnknown *VAR_4, DWORD VAR_5)
{
    IOleCommandTarget *VAR_6;
    HRESULT VAR_7;

    VAR_7 = FUNC_3(VAR_4, &VAR_1, (void**)&VAR_6);
    FUNC_4(VAR_7 == VAR_3, "QueryInterface(IID_IOleCommandTarget) failed: %08x\n", VAR_7);
    if(FUNC_0(VAR_7))
        return;

    VAR_7 = FUNC_1(VAR_6, &VAR_0, VAR_5,
            VAR_2, ((void*)0), ((void*)0));
    FUNC_4(VAR_7 == VAR_3, "Exec failed: %08x\n", VAR_7);

    FUNC_2(VAR_6);
}
