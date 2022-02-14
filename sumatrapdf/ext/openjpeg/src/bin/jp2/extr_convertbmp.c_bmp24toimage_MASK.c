
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* comps; } ;
typedef TYPE_2__ opj_image_t ;
struct TYPE_4__ {unsigned int w; unsigned int h; void** data; } ;
typedef scalar_t__ OPJ_UINT8 ;
typedef unsigned int OPJ_UINT32 ;
typedef void* OPJ_INT32 ;



__attribute__((used)) static void FUNC_0(const OPJ_UINT8* VAR_0, OPJ_UINT32 VAR_1,
                         opj_image_t* VAR_2)
{
    int VAR_3;
    OPJ_UINT32 VAR_4, VAR_5;
    OPJ_UINT32 VAR_6, VAR_7;
    const OPJ_UINT8 *VAR_8 = ((void*)0);

    VAR_4 = VAR_2->comps[0].w;
    VAR_5 = VAR_2->comps[0].h;

    VAR_3 = 0;
    VAR_8 = VAR_0 + (VAR_5 - 1U) * VAR_1;
    for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
        for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
            VAR_2->comps[0].data[VAR_3] = (OPJ_INT32)VAR_8[3 * VAR_6 + 2];
            VAR_2->comps[1].data[VAR_3] = (OPJ_INT32)VAR_8[3 * VAR_6 + 1];
            VAR_2->comps[2].data[VAR_3] = (OPJ_INT32)VAR_8[3 * VAR_6 + 0];
            VAR_3++;
        }
        VAR_8 -= VAR_1;
    }
}
