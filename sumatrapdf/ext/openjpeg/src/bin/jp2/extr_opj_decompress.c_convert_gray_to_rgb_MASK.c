
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {unsigned int numcomps; TYPE_1__* comps; int y1; int y0; int x1; int x0; } ;
typedef TYPE_2__ opj_image_t ;
struct TYPE_12__ {int h; int w; int y0; int x0; int sgnd; int prec; int dy; int dx; int bpp; } ;
typedef TYPE_3__ opj_image_cmptparm_t ;
struct TYPE_10__ {int h; int w; int data; int resno_decoded; int alpha; int factor; int y0; int x0; int sgnd; int prec; int dy; int dx; int bpp; } ;
typedef unsigned int OPJ_UINT32 ;
typedef int OPJ_INT32 ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 int FUNC_3 (int ,int ,int) ;
 TYPE_2__* FUNC_4 (unsigned int,TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_1 ;

__attribute__((used)) static opj_image_t* FUNC_6(opj_image_t* VAR_2)
{
    OPJ_UINT32 VAR_3;
    opj_image_t* VAR_4 = ((void*)0);
    opj_image_cmptparm_t* VAR_5 = ((void*)0);

    VAR_5 = (opj_image_cmptparm_t*)FUNC_2((VAR_2->numcomps + 2U) *
                       sizeof(opj_image_cmptparm_t));
    if (VAR_5 == ((void*)0)) {
        FUNC_0(VAR_1,
                "ERROR -> opj_decompress: failed to allocate memory for RGB image!\n");
        FUNC_5(VAR_2);
        return ((void*)0);
    }

    VAR_5[0].bpp = VAR_5[1].bpp = VAR_5[2].bpp =
                                   VAR_2->comps[0].bpp;
    VAR_5[0].dx = VAR_5[1].dx = VAR_5[2].dx =
                                   VAR_2->comps[0].dx;
    VAR_5[0].dy = VAR_5[1].dy = VAR_5[2].dy =
                                   VAR_2->comps[0].dy;
    VAR_5[0].h = VAR_5[1].h = VAR_5[2].h =
                                   VAR_2->comps[0].h;
    VAR_5[0].w = VAR_5[1].w = VAR_5[2].w =
                                   VAR_2->comps[0].w;
    VAR_5[0].prec = VAR_5[1].prec = VAR_5[2].prec =
                                   VAR_2->comps[0].prec;
    VAR_5[0].sgnd = VAR_5[1].sgnd = VAR_5[2].sgnd =
                                   VAR_2->comps[0].sgnd;
    VAR_5[0].x0 = VAR_5[1].x0 = VAR_5[2].x0 =
                                   VAR_2->comps[0].x0;
    VAR_5[0].y0 = VAR_5[1].y0 = VAR_5[2].y0 =
                                   VAR_2->comps[0].y0;

    for (VAR_3 = 1U; VAR_3 < VAR_2->numcomps; ++VAR_3) {
        VAR_5[VAR_3 + 2U].bpp = VAR_2->comps[VAR_3].bpp;
        VAR_5[VAR_3 + 2U].dx = VAR_2->comps[VAR_3].dx;
        VAR_5[VAR_3 + 2U].dy = VAR_2->comps[VAR_3].dy;
        VAR_5[VAR_3 + 2U].h = VAR_2->comps[VAR_3].h;
        VAR_5[VAR_3 + 2U].w = VAR_2->comps[VAR_3].w;
        VAR_5[VAR_3 + 2U].prec = VAR_2->comps[VAR_3].prec;
        VAR_5[VAR_3 + 2U].sgnd = VAR_2->comps[VAR_3].sgnd;
        VAR_5[VAR_3 + 2U].x0 = VAR_2->comps[VAR_3].x0;
        VAR_5[VAR_3 + 2U].y0 = VAR_2->comps[VAR_3].y0;
    }

    VAR_4 = FUNC_4(VAR_2->numcomps + 2U, VAR_5,
                                   VAR_0);
    FUNC_1(VAR_5);
    if (VAR_4 == ((void*)0)) {
        FUNC_0(VAR_1,
                "ERROR -> opj_decompress: failed to allocate memory for RGB image!\n");
        FUNC_5(VAR_2);
        return ((void*)0);
    }

    VAR_4->x0 = VAR_2->x0;
    VAR_4->x1 = VAR_2->x1;
    VAR_4->y0 = VAR_2->y0;
    VAR_4->y1 = VAR_2->y1;

    VAR_4->comps[0].factor = VAR_4->comps[1].factor =
            VAR_4->comps[2].factor = VAR_2->comps[0].factor;
    VAR_4->comps[0].alpha = VAR_4->comps[1].alpha =
            VAR_4->comps[2].alpha = VAR_2->comps[0].alpha;
    VAR_4->comps[0].resno_decoded = VAR_4->comps[1].resno_decoded =
            VAR_4->comps[2].resno_decoded = VAR_2->comps[0].resno_decoded;

    FUNC_3(VAR_4->comps[0].data, VAR_2->comps[0].data,
           VAR_2->comps[0].w * VAR_2->comps[0].h * sizeof(OPJ_INT32));
    FUNC_3(VAR_4->comps[1].data, VAR_2->comps[0].data,
           VAR_2->comps[0].w * VAR_2->comps[0].h * sizeof(OPJ_INT32));
    FUNC_3(VAR_4->comps[2].data, VAR_2->comps[0].data,
           VAR_2->comps[0].w * VAR_2->comps[0].h * sizeof(OPJ_INT32));

    for (VAR_3 = 1U; VAR_3 < VAR_2->numcomps; ++VAR_3) {
        VAR_4->comps[VAR_3 + 2U].factor = VAR_2->comps[VAR_3].factor;
        VAR_4->comps[VAR_3 + 2U].alpha = VAR_2->comps[VAR_3].alpha;
        VAR_4->comps[VAR_3 + 2U].resno_decoded =
            VAR_2->comps[VAR_3].resno_decoded;
        FUNC_3(VAR_4->comps[VAR_3 + 2U].data, VAR_2->comps[VAR_3].data,
               VAR_2->comps[VAR_3].w * VAR_2->comps[VAR_3].h * sizeof(OPJ_INT32));
    }
    FUNC_5(VAR_2);
    return VAR_4;
}
