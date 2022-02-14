
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_3__ {scalar_t__ read_data_func; int bitsperpixel; int image_offset; scalar_t__ stride; int IWICBitmapFrameDecode_iface; int * stream; } ;
typedef TYPE_1__ BmpDecoder ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int*,int*) ;
 int FUNC_1 (int ) ;

void FUNC_2(BmpDecoder *VAR_1, ULONG *VAR_2, int *VAR_3)
{
    FUNC_1(VAR_1->stream != ((void*)0));

    if (VAR_1->read_data_func == VAR_0)
    {

        ULONG VAR_4, VAR_5, VAR_6, VAR_7;
        FUNC_0(&VAR_1->IWICBitmapFrameDecode_iface, &VAR_4, &VAR_5);
        VAR_6 = (((VAR_4 * VAR_1->bitsperpixel)+31)/32)*4;
        VAR_7 = VAR_6 * VAR_5;
        *VAR_2 = VAR_1->image_offset + VAR_7;
    }
    else
        *VAR_2 = 0;

    *VAR_3 = VAR_1->stride > 0;
}
