
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int opj_stream_private_t ;
struct TYPE_7__ {int type; scalar_t__ length; } ;
typedef TYPE_1__ opj_jp2_box_t ;
typedef int opj_event_mgr_t ;
struct TYPE_8__ {int tw; int th; } ;
typedef TYPE_2__ opj_codestream_info_t ;
typedef scalar_t__ OPJ_UINT32 ;
typedef scalar_t__ OPJ_OFF_T ;
typedef int OPJ_BYTE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (size_t,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,scalar_t__,int *) ;
 int FUNC_3 (int *,int,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int,int *) ;
 int FUNC_6 (int *,scalar_t__,int) ;
 int FUNC_7 (int,int,TYPE_1__*,int *,int *) ;
 scalar_t__ FUNC_8 (int,TYPE_2__,int,int *,int *) ;

int FUNC_9(int VAR_2, opj_codestream_info_t VAR_3,
                   opj_stream_private_t *VAR_4,
                   opj_event_mgr_t * VAR_5)
{
    OPJ_BYTE VAR_6 [4];
    int VAR_7;
    int VAR_8;
    opj_jp2_box_t *VAR_9;
    OPJ_UINT32 VAR_10;
    OPJ_OFF_T VAR_11;

    VAR_11 = 0;
    VAR_9 = (opj_jp2_box_t *)FUNC_0((size_t)(VAR_3.tw * VAR_3.th),
                                      sizeof(opj_jp2_box_t));
    if (VAR_9 == ((void*)0)) {
        return 0;
    }
    for (VAR_7 = 0; VAR_7 < 2 ; VAR_7++) {
        if (VAR_7) {
            FUNC_2(VAR_4, VAR_11, VAR_5);
        }

        VAR_11 = FUNC_4(VAR_4);
        FUNC_3(VAR_4, 4, VAR_5);
        FUNC_6(VAR_6, VAR_1, 4);
        FUNC_5(VAR_4, VAR_6, 4, VAR_5);

        FUNC_7(VAR_7, VAR_3.tw * VAR_3.th, VAR_9, VAR_4, VAR_5);

        for (VAR_8 = 0; VAR_8 < VAR_3.tw * VAR_3.th; VAR_8++) {
            VAR_9[VAR_8].length = (OPJ_UINT32)FUNC_8(VAR_2, VAR_3, VAR_8,
                                 VAR_4, VAR_5);
            VAR_9[VAR_8].type = VAR_0;
        }

        VAR_10 = (OPJ_UINT32)(FUNC_4(VAR_4) - VAR_11);
        FUNC_2(VAR_4, VAR_11, VAR_5);
        FUNC_6(VAR_6, VAR_10, 4);
        FUNC_5(VAR_4, VAR_6, 4, VAR_5);
        FUNC_2(VAR_4, VAR_11 + VAR_10, VAR_5);

    }

    FUNC_1(VAR_9);

    return (int)VAR_10;
}
