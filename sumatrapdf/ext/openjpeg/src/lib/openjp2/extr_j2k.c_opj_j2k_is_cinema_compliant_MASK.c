
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int numcomps; TYPE_1__* comps; } ;
typedef TYPE_2__ opj_image_t ;
typedef int opj_event_mgr_t ;
struct TYPE_4__ {int bpp; int sgnd; int w; int h; } ;
typedef size_t OPJ_UINT32 ;
typedef int OPJ_UINT16 ;
typedef int OPJ_BOOL ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (int *,int ,char*,int,...) ;

__attribute__((used)) static OPJ_BOOL FUNC_1(opj_image_t *VAR_3, OPJ_UINT16 VAR_4,
        opj_event_mgr_t *VAR_5)
{
    OPJ_UINT32 VAR_6;


    if (VAR_3->numcomps != 3) {
        FUNC_0(VAR_5, VAR_0,
                      "JPEG 2000 Profile-3 (2k dc profile) requires:\n"
                      "3 components"
                      "-> Number of components of input image (%d) is not compliant\n"
                      "-> Non-profile-3 codestream will be generated\n",
                      VAR_3->numcomps);
        return VAR_1;
    }


    for (VAR_6 = 0; VAR_6 < VAR_3->numcomps; VAR_6++) {
        if ((VAR_3->comps[VAR_6].bpp != 12) | (VAR_3->comps[VAR_6].sgnd)) {
            char VAR_7[] = "signed";
            char VAR_8[] = "unsigned";
            char *VAR_9 = VAR_3->comps[VAR_6].sgnd ? VAR_7 : VAR_8;
            FUNC_0(VAR_5, VAR_0,
                          "JPEG 2000 Profile-3 (2k dc profile) requires:\n"
                          "Precision of each component shall be 12 bits unsigned"
                          "-> At least component %d of input image (%d bits, %s) is not compliant\n"
                          "-> Non-profile-3 codestream will be generated\n",
                          VAR_6, VAR_3->comps[VAR_6].bpp, VAR_9);
            return VAR_1;
        }
    }


    switch (VAR_4) {
    case 129:
        if (((VAR_3->comps[0].w > 2048) | (VAR_3->comps[0].h > 1080))) {
            FUNC_0(VAR_5, VAR_0,
                          "JPEG 2000 Profile-3 (2k dc profile) requires:\n"
                          "width <= 2048 and height <= 1080\n"
                          "-> Input image size %d x %d is not compliant\n"
                          "-> Non-profile-3 codestream will be generated\n",
                          VAR_3->comps[0].w, VAR_3->comps[0].h);
            return VAR_1;
        }
        break;
    case 128:
        if (((VAR_3->comps[0].w > 4096) | (VAR_3->comps[0].h > 2160))) {
            FUNC_0(VAR_5, VAR_0,
                          "JPEG 2000 Profile-4 (4k dc profile) requires:\n"
                          "width <= 4096 and height <= 2160\n"
                          "-> Image size %d x %d is not compliant\n"
                          "-> Non-profile-4 codestream will be generated\n",
                          VAR_3->comps[0].w, VAR_3->comps[0].h);
            return VAR_1;
        }
        break;
    default :
        break;
    }

    return VAR_2;
}
