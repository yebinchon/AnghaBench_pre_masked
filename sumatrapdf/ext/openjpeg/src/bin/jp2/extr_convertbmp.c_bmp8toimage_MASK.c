
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {unsigned int numcomps; TYPE_1__* comps; } ;
typedef TYPE_2__ opj_image_t ;
struct TYPE_5__ {unsigned int w; unsigned int h; scalar_t__* data; } ;
typedef int OPJ_UINT8 ;
typedef unsigned int OPJ_UINT32 ;
typedef scalar_t__ OPJ_INT32 ;


 int FUNC_0 (int const*,scalar_t__,scalar_t__**,scalar_t__*,int const* const*,unsigned int,unsigned int) ;
 int FUNC_1 (int const*,scalar_t__,scalar_t__*,scalar_t__,int const* const,unsigned int,unsigned int) ;

__attribute__((used)) static opj_image_t* FUNC_2(const OPJ_UINT8* VAR_0, OPJ_UINT32 VAR_1,
                                opj_image_t* VAR_2, OPJ_UINT8 const* const* VAR_3)
{
    OPJ_UINT32 VAR_4, VAR_5;
    const OPJ_UINT8 *VAR_6 = ((void*)0);

    VAR_4 = VAR_2->comps[0].w;
    VAR_5 = VAR_2->comps[0].h;

    VAR_6 = VAR_0 + (VAR_5 - 1U) * VAR_1;
    if (VAR_2->numcomps == 1U) {
        FUNC_1(VAR_6, -(OPJ_INT32)VAR_1, VAR_2->comps[0].data,
                                 (OPJ_INT32)VAR_4, VAR_3[0], VAR_4, VAR_5);
    } else {
        OPJ_INT32* VAR_7[3];
        OPJ_INT32 VAR_8[3];

        VAR_7[0] = VAR_2->comps[0].data;
        VAR_7[1] = VAR_2->comps[1].data;
        VAR_7[2] = VAR_2->comps[2].data;
        VAR_8[0] = (OPJ_INT32)VAR_4;
        VAR_8[1] = (OPJ_INT32)VAR_4;
        VAR_8[2] = (OPJ_INT32)VAR_4;
        FUNC_0(VAR_6, -(OPJ_INT32)VAR_1, VAR_7, VAR_8, VAR_3,
                                   VAR_4, VAR_5);
    }
    return VAR_2;
}
