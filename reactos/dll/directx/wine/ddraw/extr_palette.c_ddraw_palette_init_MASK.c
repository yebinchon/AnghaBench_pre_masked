
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * lpVtbl; } ;
struct ddraw_palette {int ref; int flags; int * ifaceToRelease; struct ddraw* ddraw; int wined3d_palette; TYPE_1__ IDirectDrawPalette_iface; } ;
struct ddraw {int IDirectDraw7_iface; int wined3d_device; } ;
typedef int PALETTEENTRY ;
typedef int IUnknown ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int FUNC_3 (int) ;
 int FUNC_4 (int ,int,unsigned int,int *,int *) ;

HRESULT FUNC_5(struct ddraw_palette *VAR_9,
        struct ddraw *VAR_10, DWORD VAR_11, PALETTEENTRY *VAR_12)
{
    unsigned int VAR_13;
    DWORD VAR_14 = 0;
    HRESULT VAR_15;

    if ((VAR_13 = FUNC_3(VAR_11)) == ~0u)
    {
        FUNC_2("Invalid flags %#x.\n", VAR_11);
        return VAR_0;
    }

    if (VAR_11 & VAR_1)
        VAR_14 |= VAR_5;
    if (VAR_11 & VAR_2)
        VAR_14 |= VAR_6;
    if (VAR_11 & VAR_3)
        VAR_14 |= VAR_7;

    VAR_9->IDirectDrawPalette_iface.lpVtbl = &VAR_8;
    VAR_9->ref = 1;
    VAR_9->flags = VAR_11;

    if (FUNC_0(VAR_15 = FUNC_4(VAR_10->wined3d_device,
            VAR_14, VAR_13, VAR_12, &VAR_9->wined3d_palette)))
    {
        FUNC_2("Failed to create wined3d palette, hr %#x.\n", VAR_15);
        return VAR_15;
    }

    VAR_9->ddraw = VAR_10;
    VAR_9->ifaceToRelease = (IUnknown *)&VAR_10->IDirectDraw7_iface;
    FUNC_1(VAR_9->ifaceToRelease);

    return VAR_4;
}
