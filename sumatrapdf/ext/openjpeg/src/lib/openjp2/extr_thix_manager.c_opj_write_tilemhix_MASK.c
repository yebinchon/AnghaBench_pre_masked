
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ tp_start_pos; scalar_t__ tp_end_header; } ;
typedef TYPE_1__ opj_tp_info_t ;
struct TYPE_7__ {int marknum; TYPE_3__* marker; TYPE_1__* tp; } ;
typedef TYPE_2__ opj_tile_info_t ;
typedef int opj_stream_private_t ;
struct TYPE_8__ {int pos; scalar_t__ len; scalar_t__ type; } ;
typedef TYPE_3__ opj_marker_info_t ;
typedef int opj_event_mgr_t ;
struct TYPE_9__ {TYPE_2__* tile; } ;
typedef TYPE_4__ opj_codestream_info_t ;
typedef scalar_t__ OPJ_UINT32 ;
typedef scalar_t__ OPJ_OFF_T ;
typedef int OPJ_BYTE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,scalar_t__,int *) ;
 int FUNC_1 (int *,int,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int,int *) ;
 int FUNC_4 (int *,scalar_t__,int) ;

int FUNC_5(int VAR_1, opj_codestream_info_t VAR_2, int VAR_3,
                       opj_stream_private_t *VAR_4,
                       opj_event_mgr_t * VAR_5)
{
    OPJ_BYTE VAR_6 [8];
    int VAR_7;
    opj_tile_info_t VAR_8;
    opj_tp_info_t VAR_9;
    opj_marker_info_t *VAR_10;
    OPJ_UINT32 VAR_11;
    OPJ_OFF_T VAR_12;

    VAR_12 = FUNC_2(VAR_4);
    FUNC_1(VAR_4, 4,
                    VAR_5);
    FUNC_4(VAR_6, VAR_0,
                    4);
    FUNC_3(VAR_4, VAR_6, 4, VAR_5);

    VAR_8 = VAR_2.tile[VAR_3];
    VAR_9 = VAR_8.tp[0];

    FUNC_4(VAR_6,
                    (OPJ_UINT32)(VAR_9.tp_end_header - VAR_9.tp_start_pos + 1),
                    8);
    FUNC_3(VAR_4, VAR_6, 8, VAR_5);

    VAR_10 = VAR_2.tile[VAR_3].marker;

    for (VAR_7 = 0; VAR_7 < VAR_2.tile[VAR_3].marknum;
            VAR_7++) {
        FUNC_4(VAR_6, VAR_10[VAR_7].type, 2);
        FUNC_4(VAR_6 + 2, 0, 2);
        FUNC_3(VAR_4, VAR_6, 4, VAR_5);
        FUNC_4(VAR_6, (OPJ_UINT32)(VAR_10[VAR_7].pos - VAR_1), 8);
        FUNC_3(VAR_4, VAR_6, 8, VAR_5);
        FUNC_4(VAR_6, (OPJ_UINT32)VAR_10[VAR_7].len, 2);
        FUNC_3(VAR_4, VAR_6, 2, VAR_5);
    }



    VAR_11 = (OPJ_UINT32)(FUNC_2(VAR_4) - VAR_12);
    FUNC_0(VAR_4, VAR_12, VAR_5);
    FUNC_4(VAR_6, VAR_11, 4);
    FUNC_3(VAR_4, VAR_6, 4, VAR_5);
    FUNC_0(VAR_4, VAR_12 + VAR_11, VAR_5);

    return (int)VAR_11;
}
