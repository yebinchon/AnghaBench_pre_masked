
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ddsd ;
struct TYPE_5__ {int dwCaps; } ;
struct TYPE_6__ {int dwSize; TYPE_1__ ddsCaps; int dwFlags; } ;
typedef int LPVOID ;
typedef int IDirectDraw ;
typedef scalar_t__ HRESULT ;
typedef TYPE_2__ DDSURFACEDESC2 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *,int **,int *) ;
 int VAR_4 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (scalar_t__,TYPE_2__*,scalar_t__*,int *) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int ,int ) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int *,int *,int *) ;
 int FUNC_7 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (TYPE_2__*,int) ;
 int FUNC_9 (int,char*,scalar_t__) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static int FUNC_10(void)
{
    HRESULT VAR_9;
    IDirectDraw* VAR_10 = ((void*)0);
    DDSURFACEDESC2 VAR_11;

    VAR_9 = FUNC_0(((void*)0), &VAR_10, ((void*)0));
    FUNC_9(VAR_9==VAR_3, "DirectDrawCreate returned: %x\n", VAR_9);
    if (VAR_9 != VAR_3)
       goto error;

    VAR_9 = FUNC_6(VAR_10, &VAR_5, (LPVOID*)&VAR_7);
    FUNC_9(VAR_9==VAR_3, "QueryInterface returned: %x\n", VAR_9);
    if (VAR_9 != VAR_3) goto error;

    VAR_9 = FUNC_4(VAR_7, FUNC_1(), VAR_1);
    FUNC_9(VAR_9==VAR_3, "SetCooperativeLevel returned: %x\n", VAR_9);

    FUNC_8(&VAR_11, sizeof(VAR_11));
    VAR_11.dwSize = sizeof(VAR_11);
    VAR_11.dwFlags = VAR_2;
    VAR_11.ddsCaps.dwCaps = VAR_0;
    VAR_9 = FUNC_2(VAR_7, &VAR_11, &VAR_8, ((void*)0));
    FUNC_9(VAR_9==VAR_3, "CreateSurface returned: %x\n", VAR_9);

    return VAR_6;

error:
    if (VAR_8)
        FUNC_5(VAR_8);
    if (VAR_7)
        FUNC_3(VAR_7);
    if (VAR_10)
        FUNC_7(VAR_10);

    return VAR_4;
}
