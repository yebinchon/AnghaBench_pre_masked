
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int opj_stream_private_t ;
typedef int opj_event_mgr_t ;
struct TYPE_5__ {TYPE_1__* marker; scalar_t__ marknum; scalar_t__ main_head_start; scalar_t__ main_head_end; } ;
typedef TYPE_2__ opj_codestream_info_t ;
struct TYPE_4__ {size_t type; int pos; scalar_t__ len; } ;
typedef size_t OPJ_UINT32 ;
typedef size_t OPJ_OFF_T ;
typedef int OPJ_BYTE ;


 size_t VAR_0 ;
 int FUNC_0 (int *,size_t,int *) ;
 int FUNC_1 (int *,int,int *) ;
 size_t FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int,int *) ;
 int FUNC_4 (int *,size_t,int) ;

int FUNC_5(int VAR_1, opj_codestream_info_t VAR_2,
                       opj_stream_private_t *VAR_3,
                       opj_event_mgr_t * VAR_4)
{
    OPJ_BYTE VAR_5 [8];
    OPJ_UINT32 VAR_6;
    OPJ_UINT32 VAR_7;
    OPJ_OFF_T VAR_8;

    VAR_8 = FUNC_2(VAR_3);
    FUNC_1(VAR_3, 4,
                    VAR_4);
    FUNC_4(VAR_5, VAR_0,
                    4);
    FUNC_3(VAR_3, VAR_5, 4, VAR_4);

    FUNC_4(VAR_5,
                    (OPJ_UINT32)(VAR_2.main_head_end - VAR_2.main_head_start + 1),
                    8);
    FUNC_3(VAR_3, VAR_5, 8, VAR_4);

    for (VAR_6 = 1; VAR_6 < (OPJ_UINT32)VAR_2.marknum;
            VAR_6++) {
        FUNC_4(VAR_5, VAR_2.marker[VAR_6].type, 2);
        FUNC_4(VAR_5 + 2, 0, 2);
        FUNC_3(VAR_3, VAR_5, 4, VAR_4);
        FUNC_4(VAR_5, (OPJ_UINT32)(VAR_2.marker[VAR_6].pos - VAR_1), 8);
        FUNC_3(VAR_3, VAR_5, 8, VAR_4);
        FUNC_4(VAR_5, (OPJ_UINT32)VAR_2.marker[VAR_6].len, 2);
        FUNC_3(VAR_3, VAR_5, 2, VAR_4);
    }

    VAR_7 = (OPJ_UINT32)(FUNC_2(VAR_3) - VAR_8);
    FUNC_0(VAR_3, VAR_8, VAR_4);
    FUNC_4(VAR_5, VAR_7, 4);
    FUNC_3(VAR_3, VAR_5, 4, VAR_4);
    FUNC_0(VAR_3, VAR_8 + VAR_7, VAR_4);

    return (int)VAR_7;
}
