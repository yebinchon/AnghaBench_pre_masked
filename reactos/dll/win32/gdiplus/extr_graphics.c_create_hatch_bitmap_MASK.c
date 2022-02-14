
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int bmih ;
struct TYPE_5__ {int biSize; int biWidth; int biHeight; int biPlanes; int biBitCount; scalar_t__ biSizeImage; int biCompression; } ;
struct TYPE_4__ {int forecol; int hatchstyle; int backcol; } ;
typedef scalar_t__ HBITMAP ;
typedef TYPE_1__ GpHatch ;
typedef int DWORD ;
typedef TYPE_2__ BITMAPINFOHEADER ;
typedef int BITMAPINFO ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *,int ,void**,int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int ,char const**) ;

__attribute__((used)) static HBITMAP FUNC_3(const GpHatch *VAR_3)
{
    HBITMAP VAR_4;
    BITMAPINFOHEADER VAR_5;
    DWORD *VAR_6;
    int VAR_7, VAR_8;

    VAR_5.biSize = sizeof(VAR_5);
    VAR_5.biWidth = 8;
    VAR_5.biHeight = 8;
    VAR_5.biPlanes = 1;
    VAR_5.biBitCount = 32;
    VAR_5.biCompression = VAR_0;
    VAR_5.biSizeImage = 0;

    VAR_4 = FUNC_0(0, (BITMAPINFO *)&VAR_5, VAR_1, (void **)&VAR_6, ((void*)0), 0);
    if (VAR_4)
    {
        const char *VAR_9;

        if (FUNC_2(VAR_3->hatchstyle, &VAR_9) == VAR_2)
        {
            for (VAR_8 = 0; VAR_8 < 8; VAR_8++)
            {
                for (VAR_7 = 0; VAR_7 < 8; VAR_7++)
                {
                    if (VAR_9[VAR_8] & (0x80 >> VAR_7))
                        VAR_6[VAR_8 * 8 + VAR_7] = VAR_3->forecol;
                    else
                        VAR_6[VAR_8 * 8 + VAR_7] = VAR_3->backcol;
                }
            }
        }
        else
        {
            FUNC_1("Unimplemented hatch style %d\n", VAR_3->hatchstyle);

            for (VAR_8 = 0; VAR_8 < 64; VAR_8++)
                VAR_6[VAR_8] = VAR_3->forecol;
        }
    }

    return VAR_4;
}
