
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mp_log {int dummy; } ;
struct TYPE_4__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
struct TYPE_5__ {int BitsPerColor; int ColorSpace; TYPE_1__ DesktopCoordinates; int DeviceName; int member_0; } ;
typedef int IDXGISwapChain ;
typedef int IDXGIOutput6 ;
typedef int IDXGIOutput ;
typedef int HRESULT ;
typedef TYPE_2__ DXGI_OUTPUT_DESC1 ;
typedef int DXGI_FORMAT ;
typedef int DXGI_COLOR_SPACE_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int *,int *,void**) ;
 int FUNC_3 (int *,int **) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct mp_log*,char*,int ) ;
 int FUNC_9 (struct mp_log*,int ,char*,int ) ;
 char* FUNC_10 (int *,int ) ;
 int FUNC_11 (struct mp_log*,char*,char*,scalar_t__,scalar_t__,int,int ,int ) ;
 int FUNC_12 (char*) ;

__attribute__((used)) static bool FUNC_13(struct mp_log *VAR_5,
                                               IDXGISwapChain *VAR_6,
                                               DXGI_FORMAT *VAR_7,
                                               DXGI_COLOR_SPACE_TYPE *VAR_8)
{
    IDXGIOutput *VAR_9 = ((void*)0);
    IDXGIOutput6 *VAR_10 = ((void*)0);
    DXGI_OUTPUT_DESC1 VAR_11 = { 0 };
    char *VAR_12 = ((void*)0);
    bool VAR_13 = 0;

    if (!VAR_7 || !VAR_8)
        return 0;

    HRESULT VAR_14 = FUNC_3(VAR_6, &VAR_9);
    if (FUNC_0(VAR_14)) {
        FUNC_8(VAR_5, "Failed to get swap chain's containing output: %s!\n",
               FUNC_7(VAR_14));
        goto done;
    }

    VAR_14 = FUNC_2(VAR_9, &VAR_2,
                                    (void**)&VAR_10);
    if (FUNC_0(VAR_14)) {


        FUNC_9(VAR_5, FUNC_4() ? VAR_3 : VAR_4,
               "Failed to create a DXGI 1.6 output interface: %s\n",
               FUNC_7(VAR_14));
        goto done;
    }

    VAR_14 = FUNC_1(VAR_10, &VAR_11);
    if (FUNC_0(VAR_14)) {
        FUNC_8(VAR_5, "Failed to query swap chain's output information: %s\n",
               FUNC_7(VAR_14));
        goto done;
    }

    VAR_12 = FUNC_10(((void*)0), VAR_11.DeviceName);

    FUNC_11(VAR_5, "Queried output: %s, %ldx%ld @ %d bits, colorspace: %s (%d)\n",
               VAR_12,
               VAR_11.DesktopCoordinates.right - VAR_11.DesktopCoordinates.left,
               VAR_11.DesktopCoordinates.bottom - VAR_11.DesktopCoordinates.top,
               VAR_11.BitsPerColor,
               FUNC_6(VAR_11.ColorSpace),
               VAR_11.ColorSpace);

    *VAR_8 = VAR_11.ColorSpace;





    *VAR_7 = VAR_11.BitsPerColor > 8 ?
               VAR_0 : VAR_1;

    VAR_13 = 1;

done:
    FUNC_12(VAR_12);
    FUNC_5(VAR_10);
    FUNC_5(VAR_9);
    return VAR_13;
}
