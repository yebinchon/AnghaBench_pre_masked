
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VARIANT ;
typedef int IUnknown ;
typedef int IOleCommandTarget ;
typedef scalar_t__ HRESULT ;
typedef int GUID ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int const*,int ,int ,int *,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *,void**) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(IUnknown *VAR_2, const GUID *VAR_3, DWORD VAR_4, VARIANT *VAR_5, VARIANT *VAR_6)
{
    IOleCommandTarget *VAR_7;
    HRESULT VAR_8;

    VAR_8 = FUNC_2(VAR_2, &VAR_0, (void**)&VAR_7);
    FUNC_3(VAR_8 == VAR_1, "Could not get IOleCommandTarget interface: %08x\n", VAR_8);

    VAR_8 = FUNC_0(VAR_7, VAR_3, VAR_4, 0, VAR_5, VAR_6);
    FUNC_3(VAR_8 == VAR_1, "Exec failed: %08x\n", VAR_8);

    FUNC_1(VAR_7);
}
