
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct volume {int depth; int height; int width; } ;
struct vec4 {float w; } ;
struct pixel_format_desc {int bytes_per_pixel; scalar_t__ type; int (* from_rgba ) (struct vec4*,struct vec4*) ;int (* to_rgba ) (struct vec4*,struct vec4*,int const*) ;} ;
struct argb_conversion_info {scalar_t__* destmask; } ;
typedef int channels ;
typedef int UINT ;
typedef int PALETTEENTRY ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ D3DCOLOR ;
typedef int BYTE ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*,int) ;
 int FUNC_1 (struct pixel_format_desc const*,struct vec4*,int *) ;
 int FUNC_2 (struct pixel_format_desc const*,int const*,struct vec4*) ;
 struct pixel_format_desc* FUNC_3 (int ) ;
 int FUNC_4 (struct argb_conversion_info*,int const*,scalar_t__*) ;
 int FUNC_5 (struct pixel_format_desc const*,struct pixel_format_desc const*,struct argb_conversion_info*) ;
 scalar_t__ FUNC_6 (struct argb_conversion_info*,scalar_t__*) ;
 int FUNC_7 (int *,scalar_t__*,int) ;
 int FUNC_8 (struct vec4*,struct vec4*,int const*) ;
 int FUNC_9 (struct vec4*,struct vec4*) ;

void FUNC_10(const BYTE *VAR_1, UINT VAR_2, UINT VAR_3, const struct volume *VAR_4,
        const struct pixel_format_desc *VAR_5, BYTE *VAR_6, UINT VAR_7, UINT VAR_8,
        const struct volume *VAR_9, const struct pixel_format_desc *VAR_10, D3DCOLOR VAR_11,
        const PALETTEENTRY *VAR_12)
{
    struct argb_conversion_info VAR_13, VAR_14;
    const struct pixel_format_desc *VAR_15 = ((void*)0);
    DWORD VAR_16[4];
    UINT VAR_17, VAR_18, VAR_19;

    FUNC_0(VAR_16, sizeof(VAR_16));
    FUNC_5(VAR_5, VAR_10, &VAR_13);

    if (VAR_11)
    {

        VAR_15 = FUNC_3(VAR_0);
        FUNC_5(VAR_5, VAR_15, &VAR_14);
    }

    for (VAR_19 = 0; VAR_19 < VAR_9->depth; VAR_19++)
    {
        BYTE *VAR_20 = VAR_6 + VAR_19 * VAR_8;
        const BYTE *VAR_21 = VAR_1 + VAR_3 * (VAR_19 * VAR_4->depth / VAR_9->depth);

        for (VAR_18 = 0; VAR_18 < VAR_9->height; VAR_18++)
        {
            BYTE *VAR_22 = VAR_20 + VAR_18 * VAR_7;
            const BYTE *VAR_23 = VAR_21 + VAR_2 * (VAR_18 * VAR_4->height / VAR_9->height);

            for (VAR_17 = 0; VAR_17 < VAR_9->width; VAR_17++)
            {
                const BYTE *VAR_24 = VAR_23 + (VAR_17 * VAR_4->width / VAR_9->width) * VAR_5->bytes_per_pixel;

                if (!VAR_5->to_rgba && !VAR_10->from_rgba
                        && VAR_5->type == VAR_10->type
                        && VAR_5->bytes_per_pixel <= 4 && VAR_10->bytes_per_pixel <= 4)
                {
                    DWORD VAR_25;

                    FUNC_4(&VAR_13, VAR_24, VAR_16);
                    VAR_25 = FUNC_6(&VAR_13, VAR_16);

                    if (VAR_11)
                    {
                        DWORD VAR_26;

                        FUNC_4(&VAR_14, VAR_24, VAR_16);
                        VAR_26 = FUNC_6(&VAR_14, VAR_16);
                        if (VAR_26 == VAR_11)
                            VAR_25 &= ~VAR_13.destmask[0];
                    }
                    FUNC_7(VAR_22, &VAR_25, VAR_10->bytes_per_pixel);
                }
                else
                {
                    struct vec4 VAR_27, VAR_28;

                    FUNC_2(VAR_5, VAR_24, &VAR_27);
                    if (VAR_5->to_rgba)
                        VAR_5->to_rgba(&VAR_27, &VAR_28, VAR_12);
                    else
                        VAR_28 = VAR_27;

                    if (VAR_15)
                    {
                        DWORD VAR_29;

                        FUNC_1(VAR_15, &VAR_28, (BYTE *)&VAR_29);
                        if (VAR_29 == VAR_11)
                            VAR_28.w = 0.0f;
                    }

                    if (VAR_10->from_rgba)
                        VAR_10->from_rgba(&VAR_28, &VAR_27);
                    else
                        VAR_27 = VAR_28;

                    FUNC_1(VAR_10, &VAR_27, VAR_22);
                }

                VAR_22 += VAR_10->bytes_per_pixel;
            }
        }
    }
}
