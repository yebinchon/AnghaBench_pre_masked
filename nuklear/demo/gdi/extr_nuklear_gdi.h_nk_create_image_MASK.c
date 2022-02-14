
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int ptr; } ;
struct nk_image {int w; int h; int* region; TYPE_2__ handle; } ;
struct TYPE_6__ {int biSize; int biWidth; int biHeight; int biPlanes; int biBitCount; int biSizeImage; int biCompression; } ;
struct TYPE_8__ {TYPE_1__ bmiHeader; int member_0; } ;
typedef unsigned char* LPBYTE ;
typedef int const INT ;
typedef int HBITMAP ;
typedef int BITMAPINFOHEADER ;
typedef TYPE_3__ BITMAPINFO ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_3__*,int ,void**,int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int ,int const,unsigned char*,TYPE_3__*,int ) ;

__attribute__((used)) static void
FUNC_2(struct nk_image * VAR_2, const char * VAR_3, const int VAR_4, const int VAR_5)
{
    if (VAR_2 && VAR_3 && (VAR_4 > 0) && (VAR_5 > 0))
    {
        VAR_2->w = VAR_4;
        VAR_2->h = VAR_5;
        VAR_2->region[0] = 0;
        VAR_2->region[1] = 0;
        VAR_2->region[2] = VAR_4;
        VAR_2->region[3] = VAR_5;

        INT VAR_6 = ((VAR_4 * 3 + 3) & ~3);
        BITMAPINFO VAR_7 = { 0 };
        VAR_7.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
        VAR_7.bmiHeader.biWidth = VAR_4;
        VAR_7.bmiHeader.biHeight = VAR_5;
        VAR_7.bmiHeader.biPlanes = 1;
        VAR_7.bmiHeader.biBitCount = 24;
        VAR_7.bmiHeader.biCompression = VAR_0;
        VAR_7.bmiHeader.biSizeImage = VAR_6 * VAR_5;

        LPBYTE VAR_8, VAR_9 = ((void*)0);
        HBITMAP VAR_10 = FUNC_0(((void*)0), &VAR_7, VAR_1, (void**)&VAR_8, ((void*)0), 0);

        VAR_9 = VAR_8 + VAR_6 * VAR_5;
        unsigned char * VAR_11 = (unsigned char *)VAR_3;
        for (int VAR_12 = 0; VAR_12<VAR_5; VAR_12++)
        {
            VAR_9 -= VAR_6;
            for (int VAR_13 = 0; VAR_13 < VAR_6; VAR_13 += 3)
            {
                VAR_9[VAR_13 + 0] = VAR_11[0];
                VAR_9[VAR_13 + 1] = VAR_11[1];
                VAR_9[VAR_13 + 2] = VAR_11[2];
                VAR_11 += 3;
            }
        }
        FUNC_1(((void*)0), VAR_10, 0, VAR_5, VAR_8, &VAR_7, VAR_1);
        VAR_2->handle.ptr = VAR_10;
    }
}
