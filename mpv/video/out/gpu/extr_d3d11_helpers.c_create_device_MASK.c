
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_log {int dummy; } ;
typedef int UINT ;
typedef int IDXGIAdapter1 ;
typedef int IDXGIAdapter ;
typedef int ID3D11Device ;
typedef int HRESULT ;
typedef int D3D_FEATURE_LEVEL ;
typedef int D3D_DRIVER_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int,int const**) ;
 int FUNC_1 (struct mp_log*,char*) ;
 int FUNC_2 (int *,int ,int *,int ,int const*,int,int ,int **,int *,int *) ;

__attribute__((used)) static HRESULT FUNC_3(struct mp_log *VAR_6, IDXGIAdapter1 *VAR_7,
                             bool VAR_8, bool VAR_9, int VAR_10, int VAR_11,
                             ID3D11Device **VAR_12)
{
    const D3D_FEATURE_LEVEL *VAR_13;
    int VAR_14 = FUNC_0(VAR_10, VAR_11, &VAR_13);
    if (!VAR_14) {
        FUNC_1(VAR_6, "No suitable Direct3D feature level found\n");
        return VAR_5;
    }

    D3D_DRIVER_TYPE VAR_15 = VAR_8 ? VAR_4
                                : VAR_2;
    UINT VAR_16 = VAR_9 ? VAR_0 : 0;
    return FUNC_2((IDXGIAdapter *)VAR_7, VAR_7 ? VAR_3 : VAR_15,
                              ((void*)0), VAR_16, VAR_13, VAR_14, VAR_1, VAR_12, ((void*)0), ((void*)0));
}
