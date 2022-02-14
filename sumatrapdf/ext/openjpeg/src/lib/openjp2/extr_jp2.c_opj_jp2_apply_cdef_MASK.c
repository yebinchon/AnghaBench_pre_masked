
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* jp2_cdef; } ;
typedef TYPE_1__ opj_jp2_color_t ;
struct TYPE_11__ {size_t n; size_t asoc; size_t cn; scalar_t__ typ; struct TYPE_11__* info; } ;
typedef TYPE_2__ opj_jp2_cdef_info_t ;
struct TYPE_12__ {size_t numcomps; TYPE_4__* comps; } ;
typedef TYPE_3__ opj_image_t ;
struct TYPE_13__ {scalar_t__ alpha; } ;
typedef TYPE_4__ opj_image_comp_t ;
typedef int opj_event_mgr_t ;
typedef size_t OPJ_UINT16 ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,TYPE_4__*,int) ;
 int FUNC_1 (int *,int ,char*,size_t,size_t) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(opj_image_t *VAR_1, opj_jp2_color_t *VAR_2,
                               opj_event_mgr_t *VAR_3)
{
    opj_jp2_cdef_info_t *VAR_4;
    OPJ_UINT16 VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

    VAR_4 = VAR_2->jp2_cdef->info;
    VAR_6 = VAR_2->jp2_cdef->n;

    for (VAR_5 = 0; VAR_5 < VAR_6; ++VAR_5) {

        VAR_8 = VAR_4[VAR_5].asoc;
        VAR_7 = VAR_4[VAR_5].cn;

        if (VAR_7 >= VAR_1->numcomps) {
            FUNC_1(VAR_3, VAR_0, "opj_jp2_apply_cdef: cn=%d, numcomps=%d\n",
                          VAR_7, VAR_1->numcomps);
            continue;
        }
        if (VAR_8 == 0 || VAR_8 == 65535) {
            VAR_1->comps[VAR_7].alpha = VAR_4[VAR_5].typ;
            continue;
        }

        VAR_9 = (OPJ_UINT16)(VAR_8 - 1);
        if (VAR_9 >= VAR_1->numcomps) {
            FUNC_1(VAR_3, VAR_0, "opj_jp2_apply_cdef: acn=%d, numcomps=%d\n",
                          VAR_9, VAR_1->numcomps);
            continue;
        }


        if ((VAR_7 != VAR_9) && (VAR_4[VAR_5].typ == 0)) {
            opj_image_comp_t VAR_10;
            OPJ_UINT16 VAR_11;

            FUNC_0(&VAR_10, &VAR_1->comps[VAR_7], sizeof(opj_image_comp_t));
            FUNC_0(&VAR_1->comps[VAR_7], &VAR_1->comps[VAR_9], sizeof(opj_image_comp_t));
            FUNC_0(&VAR_1->comps[VAR_9], &VAR_10, sizeof(opj_image_comp_t));


            for (VAR_11 = (OPJ_UINT16)(VAR_5 + 1U); VAR_11 < VAR_6 ; ++VAR_11) {
                if (VAR_4[VAR_11].cn == VAR_7) {
                    VAR_4[VAR_11].cn = VAR_9;
                } else if (VAR_4[VAR_11].cn == VAR_9) {
                    VAR_4[VAR_11].cn = VAR_7;
                }

            }
        }

        VAR_1->comps[VAR_7].alpha = VAR_4[VAR_5].typ;
    }

    if (VAR_2->jp2_cdef->info) {
        FUNC_2(VAR_2->jp2_cdef->info);
    }

    FUNC_2(VAR_2->jp2_cdef);
    VAR_2->jp2_cdef = ((void*)0);

}
