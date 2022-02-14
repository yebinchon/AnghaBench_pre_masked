
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int opj_tcd_tilecomp_t ;
struct TYPE_11__ {size_t numcomps; int * comps; } ;
typedef TYPE_3__ opj_tcd_tile_t ;
struct TYPE_12__ {int thread_pool; int * used_component; TYPE_2__* tcp; TYPE_1__* tcd_image; } ;
typedef TYPE_4__ opj_tcd_t ;
struct TYPE_13__ {int cblksty; } ;
typedef TYPE_5__ opj_tccp_t ;
typedef int opj_mutex_t ;
typedef int opj_event_mgr_t ;
struct TYPE_10__ {scalar_t__ num_layers_to_decode; scalar_t__ numlayers; TYPE_5__* tccps; } ;
struct TYPE_9__ {TYPE_3__* tiles; } ;
typedef size_t OPJ_UINT32 ;
typedef int volatile OPJ_BOOL ;


 int VAR_0 ;
 int volatile VAR_1 ;
 int volatile VAR_2 ;
 int * FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_4__*,int volatile*,int *,TYPE_5__*,int *,int *,int volatile) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static OPJ_BOOL FUNC_4(opj_tcd_t *VAR_3, opj_event_mgr_t *VAR_4)
{
    OPJ_UINT32 VAR_5;
    opj_tcd_tile_t * VAR_6 = VAR_3->tcd_image->tiles;
    opj_tcd_tilecomp_t* VAR_7 = VAR_6->comps;
    opj_tccp_t * VAR_8 = VAR_3->tcp->tccps;
    volatile OPJ_BOOL VAR_9 = VAR_2;
    OPJ_BOOL VAR_10 = VAR_1;
    opj_mutex_t* VAR_11 = ((void*)0);

    VAR_11 = FUNC_0();


    if (VAR_3->tcp->num_layers_to_decode == VAR_3->tcp->numlayers &&
            (VAR_8->cblksty & VAR_0) != 0) {
        VAR_10 = VAR_2;
    }

    for (VAR_5 = 0; VAR_5 < VAR_6->numcomps;
            ++VAR_5, ++VAR_7, ++VAR_8) {
        if (VAR_3->used_component != ((void*)0) && !VAR_3->used_component[VAR_5]) {
            continue;
        }

        FUNC_2(VAR_3, &VAR_9, VAR_7, VAR_8,
                            VAR_4, VAR_11, VAR_10);
        if (!VAR_9) {
            break;
        }
    }

    FUNC_3(VAR_3->thread_pool, 0);
    if (VAR_11) {
        FUNC_1(VAR_11);
    }
    return VAR_9;
}
