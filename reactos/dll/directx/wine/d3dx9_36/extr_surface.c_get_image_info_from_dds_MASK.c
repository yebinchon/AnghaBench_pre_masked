
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int size; } ;
struct dds_header {int miplevels; int caps2; int depth; TYPE_3__ pixel_format; int height; int width; } ;
typedef int UINT ;
struct TYPE_4__ {int Depth; int MipLevels; int ImageFileFormat; int Height; int Width; int Format; int ResourceType; } ;
typedef int HRESULT ;
typedef int DWORD ;
typedef TYPE_1__ D3DXIMAGE_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (int ,int ,int ,int,int,int) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static HRESULT FUNC_4(const void *VAR_11, UINT VAR_12, D3DXIMAGE_INFO *VAR_13)
{
    UINT VAR_14 = 1;
    UINT VAR_15;
    const struct dds_header *VAR_16 = VAR_11;

    if (VAR_12 < sizeof(*VAR_16) || !VAR_13)
        return VAR_4;

    if (VAR_16->pixel_format.size != sizeof(VAR_16->pixel_format))
        return VAR_4;

    VAR_13->Width = VAR_16->width;
    VAR_13->Height = VAR_16->height;
    VAR_13->Depth = 1;
    VAR_13->MipLevels = VAR_16->miplevels ? VAR_16->miplevels : 1;

    VAR_13->Format = FUNC_3(&VAR_16->pixel_format);
    if (VAR_13->Format == VAR_0)
        return VAR_4;

    FUNC_0("Pixel format is %#x\n", VAR_13->Format);

    if (VAR_16->caps2 & VAR_10)
    {
        VAR_13->Depth = VAR_16->depth;
        VAR_13->ResourceType = VAR_3;
    }
    else if (VAR_16->caps2 & VAR_7)
    {
        DWORD VAR_17;
        VAR_14 = 0;
        for (VAR_17 = VAR_9; VAR_17 <= VAR_8; VAR_17 <<= 1)
        {
            if (VAR_16->caps2 & VAR_17)
                VAR_14++;
        }
        VAR_13->ResourceType = VAR_1;
    }
    else
    {
        VAR_13->ResourceType = VAR_2;
    }

    VAR_15 = FUNC_2(VAR_13->Format, VAR_13->Width, VAR_13->Height, VAR_13->Depth,
        VAR_13->MipLevels, VAR_14);
    if (VAR_12 < VAR_15)
    {
        FUNC_1("File is too short %u, expected at least %u bytes\n", VAR_12, VAR_15);
        return VAR_4;
    }

    VAR_13->ImageFileFormat = VAR_5;
    return VAR_6;
}
