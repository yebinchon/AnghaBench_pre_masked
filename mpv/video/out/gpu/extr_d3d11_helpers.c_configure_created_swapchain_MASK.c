
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_log {int dummy; } ;
struct mp_colorspace {int member_0; } ;
typedef int IDXGISwapChain ;
typedef scalar_t__ DXGI_FORMAT ;
typedef int DXGI_COLOR_SPACE_TYPE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 char* FUNC_1 (int) ;
 char* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,struct mp_colorspace*) ;
 int FUNC_4 (struct mp_log*,char*,char const*,int) ;
 int FUNC_5 (struct mp_log*,char*,char const*,int) ;
 int FUNC_6 (struct mp_log*,int *,scalar_t__*,int*) ;
 int FUNC_7 (struct mp_log*,int *,int) ;
 int FUNC_8 (struct mp_log*,int *,scalar_t__) ;

__attribute__((used)) static bool FUNC_9(struct mp_log *VAR_3,
                                        IDXGISwapChain *VAR_4,
                                        DXGI_FORMAT VAR_5,
                                        DXGI_COLOR_SPACE_TYPE VAR_6,
                                        struct mp_colorspace *VAR_7)
{
    DXGI_FORMAT VAR_8 = VAR_2;
    DXGI_FORMAT VAR_9 = VAR_2;
    DXGI_COLOR_SPACE_TYPE VAR_10 = VAR_0;
    DXGI_COLOR_SPACE_TYPE VAR_11;
    const char *VAR_12 = ((void*)0);
    const char *VAR_13 = ((void*)0);
    struct mp_colorspace VAR_14 = { 0 };
    bool VAR_15 = 0;

    FUNC_6(VAR_3, VAR_4,
                                       &VAR_8,
                                       &VAR_10);


    VAR_9 = VAR_5 != VAR_2 ?
                      VAR_5 :
                      (VAR_8 != VAR_2 ?
                       VAR_8 : VAR_1);
    VAR_11 = VAR_6 != -1 ?
                          VAR_6 : VAR_10;
    VAR_12 = FUNC_2(VAR_9);
    VAR_13 = FUNC_1(VAR_11);
    VAR_15 = FUNC_3(VAR_11, &VAR_14);

    FUNC_4(VAR_3, "Selected swapchain format %s (%d), attempting "
                    "to utilize it.\n",
               VAR_12, VAR_9);

    if (!FUNC_8(VAR_3, VAR_4, VAR_9)) {
        return 0;
    }

    if (!FUNC_0()) {




        if (VAR_6 != -1) {
            FUNC_5(VAR_3, "User selected a D3D11 color space %s (%d), "
                         "but configuration of color spaces is only supported"
                         "from Windows 10! The default configuration has been "
                         "left as-is.\n",
                    VAR_13, VAR_11);
        }

        return 1;
    }

    if (!VAR_15) {
        FUNC_5(VAR_3, "Color space %s (%d) does not have an mpv color space "
                     "mapping! Overriding to standard sRGB!\n",
                VAR_13, VAR_11);
        VAR_11 = VAR_0;
        FUNC_3(VAR_11, &VAR_14);
    }

    FUNC_4(VAR_3, "Selected swapchain color space %s (%d), attempting to "
                    "utilize it.\n",
               VAR_13, VAR_11);

    if (!FUNC_7(VAR_3, VAR_4, VAR_11)) {
        return 0;
    }

    if (VAR_7) {
        *VAR_7 = VAR_14;
    }

    return 1;
}
