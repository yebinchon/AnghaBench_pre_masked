
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void** data; scalar_t__ numresolutions; void* y1; void* x1; void* y0; void* x0; TYPE_2__* resolutions; } ;
typedef TYPE_1__ opj_tcd_tilecomp_t ;
struct TYPE_6__ {void* y1; void* x1; void* y0; void* x0; } ;
typedef TYPE_2__ opj_tcd_resolution_t ;
typedef scalar_t__ OPJ_UINT32 ;
typedef void* OPJ_INT32 ;


 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;
 void* FUNC_3 (void*,void*) ;
 scalar_t__ FUNC_4 (int) ;

void FUNC_5(opj_tcd_tilecomp_t * VAR_0,
                OPJ_INT32 VAR_1,
                OPJ_INT32 VAR_2,
                OPJ_INT32 VAR_3,
                OPJ_INT32 VAR_4,
                OPJ_UINT32 VAR_5)
{
    opj_tcd_resolution_t* VAR_6;
    OPJ_UINT32 VAR_7, VAR_8;
    size_t VAR_9, VAR_10;

    FUNC_1(VAR_0, 0, sizeof(*VAR_0));
    VAR_0->x0 = VAR_1;
    VAR_0->y0 = VAR_2;
    VAR_0->x1 = VAR_3;
    VAR_0->y1 = VAR_4;
    VAR_10 = (size_t)(VAR_0->x1 - VAR_0->x0) *
              (size_t)(VAR_0->y1 - VAR_0->y0);
    VAR_0->data = (OPJ_INT32*) FUNC_4(sizeof(OPJ_INT32) * VAR_10);
    for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
        VAR_0->data[VAR_9] = FUNC_0((OPJ_UINT32)VAR_9);
    }
    VAR_0->numresolutions = VAR_5;
    VAR_0->resolutions = (opj_tcd_resolution_t*) FUNC_2(
                               VAR_0->numresolutions,
                               sizeof(opj_tcd_resolution_t));

    VAR_8 = VAR_0->numresolutions;
    VAR_6 = VAR_0->resolutions;


    for (VAR_7 = 0; VAR_7 < VAR_0->numresolutions; ++VAR_7) {

        --VAR_8;


        VAR_6->x0 = FUNC_3(VAR_0->x0, (OPJ_INT32)VAR_8);
        VAR_6->y0 = FUNC_3(VAR_0->y0, (OPJ_INT32)VAR_8);
        VAR_6->x1 = FUNC_3(VAR_0->x1, (OPJ_INT32)VAR_8);
        VAR_6->y1 = FUNC_3(VAR_0->y1, (OPJ_INT32)VAR_8);

        ++VAR_6;
    }
}
