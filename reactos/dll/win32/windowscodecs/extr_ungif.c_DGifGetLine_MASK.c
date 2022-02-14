
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int PixelCount; } ;
struct TYPE_7__ {int Width; } ;
struct TYPE_8__ {TYPE_1__ Image; TYPE_3__* Private; } ;
typedef int GifPixelType ;
typedef TYPE_2__ GifFileType ;
typedef TYPE_3__ GifFilePrivateType ;
typedef int GifByteType ;


 scalar_t__ FUNC_0 (TYPE_2__*,int *,int) ;
 int FUNC_1 (TYPE_2__*,int **) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(GifFileType * VAR_2,
            GifPixelType * VAR_3,
            int VAR_4) {

    GifByteType *VAR_5;
    GifFilePrivateType *VAR_6 = VAR_2->Private;

    if (!VAR_4)
        VAR_4 = VAR_2->Image.Width;

    if ((VAR_6->PixelCount -= VAR_4) > 0xffff0000UL) {
        return VAR_0;
    }

    if (FUNC_0(VAR_2, VAR_3, VAR_4) == VAR_1) {
        if (VAR_6->PixelCount == 0) {



            do
                if (FUNC_1(VAR_2, &VAR_5) == VAR_0)
                {
                    FUNC_2("GIF is not properly terminated\n");
                    break;
                }
            while (VAR_5 != ((void*)0)) ;
        }
        return VAR_1;
    } else
        return VAR_0;
}
