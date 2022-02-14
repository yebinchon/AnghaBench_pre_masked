
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int desc ;
struct TYPE_4__ {int ViewDimension; int Format; } ;
typedef int ID3D11Texture2D ;
typedef int ID3D11Resource ;
typedef scalar_t__ HRESULT ;
typedef TYPE_1__ D3D11_RENDER_TARGET_VIEW_DESC ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int *,int *) ;
 scalar_t__ FUNC_1 (int ,int *,TYPE_1__*,scalar_t__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int ,int *,void**) ;
 scalar_t__ FUNC_5 (int ,int ,int,int,int ,int ) ;
 int VAR_6 ;
 int FUNC_6 (int *,char*,char*,int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_1__*,int ,int) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_11(int VAR_11, int VAR_12)
{
    ID3D11Texture2D *VAR_13;
    D3D11_RENDER_TARGET_VIEW_DESC VAR_14;
    HRESULT VAR_15;

    if (VAR_9)
        FUNC_2(VAR_9);

    FUNC_0(VAR_7, 0, ((void*)0), ((void*)0));

    VAR_15 = FUNC_5(VAR_10, 0, VAR_11, VAR_12, VAR_5, 0);
    if (VAR_15 == VAR_1 || VAR_15 == VAR_2 || VAR_15 == VAR_3)
    {

        FUNC_6(((void*)0), L"DXGI device is removed or reset!", L"Error", 0);
        FUNC_9(0);
    }
    FUNC_8(FUNC_7(VAR_15));

    FUNC_10(&VAR_14, 0, sizeof(VAR_14));
    VAR_14.Format = VAR_4;
    VAR_14.ViewDimension = VAR_0;

    VAR_15 = FUNC_4(VAR_10, 0, &VAR_6, (void **)&VAR_13);
    FUNC_8(FUNC_7(VAR_15));

    VAR_15 = FUNC_1(VAR_8, (ID3D11Resource *)VAR_13, &VAR_14, &VAR_9);
    FUNC_8(FUNC_7(VAR_15));

    FUNC_3(VAR_13);
}
