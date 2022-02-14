
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int opj_stream_private_t ;
struct TYPE_7__ {int length; int type; } ;
typedef TYPE_1__ opj_jp2_box_t ;
typedef int opj_event_mgr_t ;
struct TYPE_8__ {int numcomps; } ;
typedef TYPE_2__ opj_codestream_info_t ;
typedef int OPJ_UINT32 ;
typedef int OPJ_OFF_T ;
typedef int OPJ_BYTE ;
typedef int OPJ_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (size_t,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int,int *) ;
 int FUNC_3 (int *,int,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int,int *) ;
 int FUNC_6 (int *,int,int) ;
 int FUNC_7 (int,int,TYPE_1__*,int *,int *) ;
 scalar_t__ FUNC_8 (int,int,TYPE_2__,int ,int,int *,int *) ;

int FUNC_9(int VAR_2, opj_codestream_info_t VAR_3, OPJ_BOOL VAR_4,
                   int VAR_5, opj_stream_private_t *VAR_6,
                   opj_event_mgr_t * VAR_7)
{
    OPJ_BYTE VAR_8 [4];
    int VAR_9, VAR_10;
    opj_jp2_box_t *VAR_11;
    OPJ_OFF_T VAR_12;
    OPJ_UINT32 VAR_13;



    VAR_12 = -1;
    VAR_11 = (opj_jp2_box_t *)FUNC_0((size_t)VAR_3.numcomps,
                                      sizeof(opj_jp2_box_t));
    if (VAR_11 == ((void*)0)) {
        return 0;
    }
    for (VAR_10 = 0; VAR_10 < 2; VAR_10++) {
        if (VAR_10)

        {
            FUNC_2(VAR_6, VAR_12, VAR_7);
        }

        VAR_12 = (OPJ_UINT32)(FUNC_4(VAR_6));
        FUNC_3(VAR_6, 4, VAR_7);
        FUNC_6(VAR_8, VAR_1, 4);
        FUNC_5(VAR_6, VAR_8, 4, VAR_7);

        FUNC_7(VAR_10, VAR_3.numcomps, VAR_11, VAR_6, VAR_7);

        for (VAR_9 = 0; VAR_9 < VAR_3.numcomps; VAR_9++) {
            VAR_11[VAR_9].length = (OPJ_UINT32)FUNC_8(VAR_2, VAR_9, VAR_3,
                                 VAR_4, VAR_5, VAR_6, VAR_7);
            VAR_11[VAR_9].type = VAR_0;
        }


        VAR_13 = (OPJ_UINT32)(FUNC_4(VAR_6) - VAR_12);
        FUNC_2(VAR_6, VAR_12, VAR_7);
        FUNC_6(VAR_8, VAR_13, 4);
        FUNC_5(VAR_6, VAR_8, 4, VAR_7);
        FUNC_2(VAR_6, VAR_12 + VAR_13, VAR_7);
    }

    FUNC_1(VAR_11);

    return (int)VAR_13;
}
