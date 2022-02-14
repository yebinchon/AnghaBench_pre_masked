
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dds_pixel_format {int size; scalar_t__ fourcc; int flags; int amask; int bmask; int gmask; int rmask; int bpp; } ;
struct TYPE_3__ {scalar_t__ format; int amask; int bmask; int gmask; int rmask; int bpp; } ;
typedef int HRESULT ;
typedef scalar_t__ D3DFORMAT ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct dds_pixel_format*,int ,int) ;
 TYPE_1__* VAR_6 ;

__attribute__((used)) static HRESULT FUNC_4(struct dds_pixel_format *VAR_7, D3DFORMAT VAR_8)
{
    unsigned int VAR_9;

    FUNC_3(VAR_7, 0, sizeof(*VAR_7));

    VAR_7->size = sizeof(*VAR_7);

    for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_6); VAR_9++)
    {
        if (VAR_6[VAR_9].format == VAR_8)
        {
            VAR_7->flags |= VAR_4;
            VAR_7->bpp = VAR_6[VAR_9].bpp;
            VAR_7->rmask = VAR_6[VAR_9].rmask;
            VAR_7->gmask = VAR_6[VAR_9].gmask;
            VAR_7->bmask = VAR_6[VAR_9].bmask;
            VAR_7->amask = VAR_6[VAR_9].amask;
            if (VAR_7->amask) VAR_7->flags |= VAR_2;
            return VAR_1;
        }
    }


    if (FUNC_2(VAR_8) != VAR_0)
    {
        VAR_7->flags |= VAR_3;
        VAR_7->fourcc = VAR_8;
        return VAR_1;
    }

    FUNC_1("Unknown pixel format %#x\n", VAR_8);
    return VAR_5;
}
