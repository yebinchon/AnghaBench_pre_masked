
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IWICPersistStream ;
typedef int IUnknown ;
typedef int IStream ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *,void**) ;
 scalar_t__ FUNC_1 (int *,int *,int *,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(IUnknown *VAR_4, IStream *VAR_5)
{
    HRESULT VAR_6;
    IWICPersistStream *VAR_7;



    DWORD VAR_8 = VAR_3;


    VAR_6 = FUNC_0(VAR_4, &VAR_0, (void **)&VAR_7);
    FUNC_3(VAR_6 == VAR_1, "QueryInterface failed, hr=%x\n", VAR_6);

    VAR_6 = FUNC_1(VAR_7, VAR_5, ((void*)0), VAR_8);
    FUNC_3(VAR_6 == VAR_1, "LoadEx failed, hr=%x\n", VAR_6);

    FUNC_2(VAR_7);
}
