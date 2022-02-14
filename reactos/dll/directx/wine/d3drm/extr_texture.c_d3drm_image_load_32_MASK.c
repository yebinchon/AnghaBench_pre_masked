
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int depth; int rgb; int bytes_per_line; unsigned char* buffer1; int red_mask; int green_mask; int blue_mask; int * palette; scalar_t__ palette_size; } ;
typedef int SIZE_T ;
typedef int LONGLONG ;
typedef int HRESULT ;
typedef TYPE_1__ D3DRMIMAGE ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,unsigned char*,int,int,scalar_t__) ;
 unsigned char* FUNC_2 (int) ;

__attribute__((used)) static HRESULT FUNC_3(D3DRMIMAGE *VAR_2, unsigned char *VAR_3,
        LONGLONG VAR_4, SIZE_T VAR_5, SIZE_T VAR_6, BOOL VAR_7)
{
    unsigned char *VAR_8, *VAR_9, *VAR_10;
    SIZE_T VAR_11, VAR_12, VAR_13, VAR_14;

    if (FUNC_1(VAR_2, VAR_3, VAR_5, VAR_6, VAR_7))
        return VAR_1;

    if (VAR_5 > (~(SIZE_T)0 / 4) / VAR_6)
        return VAR_0;

    VAR_11 = VAR_7 ? -VAR_5 * 3 : VAR_5 * 3;
    VAR_12 = VAR_5 * 4;

    if (!(VAR_8 = FUNC_2(VAR_12 * VAR_6)))
    {
        FUNC_0("Failed to allocate image buffer.\n");
        return VAR_0;
    }

    VAR_9 = VAR_7 ? &VAR_3[(VAR_6 - 1) * VAR_5 * 3] : VAR_3;
    VAR_10 = VAR_8;

    for (VAR_14 = 0; VAR_14 < VAR_6; ++VAR_14)
    {
        for (VAR_13 = 0; VAR_13 < VAR_5; ++VAR_13)
        {
            VAR_10[VAR_13 * 4 + 0] = VAR_9[VAR_13 * 3 + 0];
            VAR_10[VAR_13 * 4 + 1] = VAR_9[VAR_13 * 3 + 1];
            VAR_10[VAR_13 * 4 + 2] = VAR_9[VAR_13 * 3 + 2];
            VAR_10[VAR_13 * 4 + 3] = 0xff;
        }

        VAR_9 += VAR_11;
        VAR_10 += VAR_12;
    }

    VAR_2->depth = 32;
    VAR_2->rgb = 1;
    VAR_2->bytes_per_line = VAR_12;
    VAR_2->buffer1 = VAR_8;
    VAR_2->red_mask = 0xff0000;
    VAR_2->green_mask = 0x00ff00;
    VAR_2->blue_mask = 0x0000ff;
    VAR_2->palette_size = 0;
    VAR_2->palette = ((void*)0);

    return VAR_1;
}
