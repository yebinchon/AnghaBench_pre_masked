
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {TYPE_2__* pInputPin; } ;
struct quartz_vmr {int cookie; int presenter; int target_rect; int source_rect; TYPE_3__ renderer; } ;
struct TYPE_16__ {int lpSurf; } ;
typedef TYPE_4__ VMR9PresentationInfo ;
struct TYPE_20__ {int biSize; int biWidth; int biHeight; int biPlanes; int biBitCount; int biSizeImage; int biCompression; } ;
struct TYPE_17__ {TYPE_8__ bmiHeader; } ;
typedef TYPE_5__ VIDEOINFOHEADER2 ;
struct TYPE_18__ {TYPE_8__ bmiHeader; } ;
typedef TYPE_6__ VIDEOINFOHEADER ;
struct TYPE_21__ {int subtype; scalar_t__ pbFormat; int formattype; } ;
struct TYPE_19__ {char* pBits; int Pitch; } ;
struct TYPE_13__ {TYPE_9__ mtCurrent; } ;
struct TYPE_14__ {TYPE_1__ pin; } ;
typedef int LPSTR ;
typedef scalar_t__ LPBYTE ;
typedef int HRESULT ;
typedef int DWORD ;
typedef TYPE_7__ D3DLOCKED_RECT ;
typedef TYPE_8__ BITMAPINFOHEADER ;
typedef TYPE_9__ AM_MEDIA_TYPE ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,TYPE_7__*,int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,TYPE_4__*) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 int VAR_3 ;
 int FUNC_7 (char*,...) ;
 int VAR_4 ;
 int FUNC_8 (char*,int,int) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*,scalar_t__,int) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static DWORD FUNC_13(struct quartz_vmr *VAR_5, VMR9PresentationInfo *VAR_6, LPBYTE VAR_7,
                                 DWORD VAR_8)
{
    AM_MEDIA_TYPE *VAR_9;
    HRESULT VAR_10 = VAR_3;
    int VAR_11;
    int VAR_12;
    BITMAPINFOHEADER *VAR_13;
    D3DLOCKED_RECT VAR_14;

    FUNC_7("%p %p %d\n", VAR_5, VAR_7, VAR_8);

    VAR_9 = &VAR_5->renderer.pInputPin->pin.mtCurrent;

    if (FUNC_6(&VAR_9->formattype, &VAR_1))
    {
        VAR_13 = &((VIDEOINFOHEADER *)VAR_9->pbFormat)->bmiHeader;
    }
    else if (FUNC_6(&VAR_9->formattype, &VAR_2))
    {
        VAR_13 = &((VIDEOINFOHEADER2 *)VAR_9->pbFormat)->bmiHeader;
    }
    else
    {
        FUNC_2("Unknown type %s\n", FUNC_10(&VAR_9->subtype));
        return VAR_4;
    }

    FUNC_7("biSize = %d\n", VAR_13->biSize);
    FUNC_7("biWidth = %d\n", VAR_13->biWidth);
    FUNC_7("biHeight = %d\n", VAR_13->biHeight);
    FUNC_7("biPlanes = %d\n", VAR_13->biPlanes);
    FUNC_7("biBitCount = %d\n", VAR_13->biBitCount);
    FUNC_7("biCompression = %s\n", FUNC_9((LPSTR)&(VAR_13->biCompression), 4));
    FUNC_7("biSizeImage = %d\n", VAR_13->biSizeImage);

    VAR_11 = VAR_13->biWidth;
    VAR_12 = VAR_13->biHeight;

    FUNC_7("Src Rect: %s\n", FUNC_12(&VAR_5->source_rect));
    FUNC_7("Dst Rect: %s\n", FUNC_12(&VAR_5->target_rect));

    VAR_10 = FUNC_3(VAR_6->lpSurf, &VAR_14, ((void*)0), VAR_0);
    if (FUNC_1(VAR_10))
    {
        FUNC_0("IDirect3DSurface9_LockRect failed (%x)\n",VAR_10);
        return VAR_10;
    }

    if (VAR_12 > 0) {

        VAR_14.pBits = (char *)VAR_14.pBits + (VAR_12 * VAR_14.Pitch);
        while (VAR_12--)
        {
            VAR_14.pBits = (char *)VAR_14.pBits - VAR_14.Pitch;
            FUNC_11(VAR_14.pBits, VAR_7, VAR_11 * VAR_13->biBitCount / 8);
            VAR_7 = VAR_7 + VAR_11 * VAR_13->biBitCount / 8;
        }
    }
    else if (VAR_14.Pitch != VAR_11 * VAR_13->biBitCount / 8)
    {
        FUNC_8("Slow path! %u/%u\n", VAR_14.Pitch, VAR_11 * VAR_13->biBitCount/8);

        while (VAR_12--)
        {
            FUNC_11(VAR_14.pBits, VAR_7, VAR_11 * VAR_13->biBitCount / 8);
            VAR_7 = VAR_7 + VAR_11 * VAR_13->biBitCount / 8;
            VAR_14.pBits = (char *)VAR_14.pBits + VAR_14.Pitch;
        }
    }
    else FUNC_11(VAR_14.pBits, VAR_7, VAR_8);

    FUNC_4(VAR_6->lpSurf);

    VAR_10 = FUNC_5(VAR_5->presenter, VAR_5->cookie, VAR_6);
    return VAR_10;
}
