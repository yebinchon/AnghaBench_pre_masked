
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct ra_ctx {int vo; struct priv* priv; } ;
struct priv {scalar_t__ hdc; } ;
struct TYPE_5__ {int nSize; int nVersion; int dwFlags; int cColorBits; int iLayerType; int iPixelType; } ;
typedef TYPE_1__ PIXELFORMATDESCRIPTOR ;
typedef int HWND ;
typedef scalar_t__ HDC ;


 int FUNC_0 (scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (scalar_t__,int,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static bool FUNC_7(struct ra_ctx *VAR_5)
{
    struct priv *VAR_6 = VAR_5->priv;
    HWND VAR_7 = FUNC_6(VAR_5->vo);

    if (VAR_6->hdc)
        return 1;

    HDC VAR_8 = FUNC_1(VAR_7);
    if (!VAR_8)
        return 0;

    PIXELFORMATDESCRIPTOR VAR_9;
    FUNC_5(&VAR_9, 0, sizeof VAR_9);
    VAR_9.nSize = sizeof VAR_9;
    VAR_9.nVersion = 1;
    VAR_9.dwFlags = VAR_1 | VAR_3 | VAR_0;

    VAR_9.iPixelType = VAR_4;
    VAR_9.cColorBits = 24;
    VAR_9.iLayerType = VAR_2;
    int VAR_10 = FUNC_0(VAR_8, &VAR_9);

    if (!VAR_10) {
        FUNC_2(VAR_5->vo, "unable to select a valid pixel format!\n");
        FUNC_3(VAR_7, VAR_8);
        return 0;
    }

    FUNC_4(VAR_8, VAR_10, &VAR_9);

    VAR_6->hdc = VAR_8;
    return 1;
}
