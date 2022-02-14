
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ image; } ;
typedef int PixelFormat ;
typedef int INT ;
typedef int GpStatus ;
typedef TYPE_1__ GpGraphics ;
typedef int GpBitmap ;
typedef int BYTE ;
typedef int ARGB ;


 int FUNC_0 (int *,int,int,int*) ;
 int FUNC_1 (int *,int,int,int ) ;
 int VAR_0 ;
 int const VAR_1 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static GpStatus FUNC_4(GpGraphics *VAR_2, INT VAR_3, INT VAR_4,
    const BYTE *VAR_5, INT VAR_6, INT VAR_7, INT VAR_8, const PixelFormat VAR_9)
{
    GpBitmap *VAR_10 = (GpBitmap*)VAR_2->image;
    INT VAR_11, VAR_12;

    for (VAR_12=0; VAR_12<VAR_7; VAR_12++)
    {
        for (VAR_11=0; VAR_11<VAR_6; VAR_11++)
        {
            ARGB VAR_13, VAR_14;
            VAR_14 = ((ARGB*)(VAR_5 + VAR_8 * VAR_12))[VAR_11];

            if (!(VAR_14 & 0xff000000))
                continue;

            FUNC_0(VAR_10, VAR_11+VAR_3, VAR_12+VAR_4, &VAR_13);
            if (VAR_9 & VAR_1)
                FUNC_1(VAR_10, VAR_11+VAR_3, VAR_12+VAR_4, FUNC_3(VAR_13, VAR_14));
            else
                FUNC_1(VAR_10, VAR_11+VAR_3, VAR_12+VAR_4, FUNC_2(VAR_13, VAR_14));
        }
    }

    return VAR_0;
}
