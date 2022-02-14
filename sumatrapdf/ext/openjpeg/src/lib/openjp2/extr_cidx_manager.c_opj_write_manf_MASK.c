
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int opj_stream_private_t ;
struct TYPE_3__ {scalar_t__ type; scalar_t__ length; } ;
typedef TYPE_1__ opj_jp2_box_t ;
typedef int opj_event_mgr_t ;
typedef scalar_t__ OPJ_UINT32 ;
typedef scalar_t__ OPJ_OFF_T ;
typedef int OPJ_BYTE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,scalar_t__,int *) ;
 int FUNC_1 (int *,int,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int,int *) ;
 int FUNC_4 (int *,scalar_t__,int) ;

void FUNC_5(int VAR_1,
                    int VAR_2,
                    opj_jp2_box_t *VAR_3,
                    opj_stream_private_t *VAR_4,
                    opj_event_mgr_t * VAR_5)
{
    OPJ_BYTE VAR_6 [4];
    int VAR_7;
    OPJ_UINT32 VAR_8;
    OPJ_OFF_T VAR_9;

    VAR_9 = FUNC_2(VAR_4);
    FUNC_1(VAR_4, 4, VAR_5);
    FUNC_4(VAR_6, VAR_0, 4);
    FUNC_3(VAR_4, VAR_6, 4, VAR_5);

    if (VAR_1) {
        for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
            FUNC_4(VAR_6, VAR_3[VAR_7].length,
                            4);
            FUNC_3(VAR_4, VAR_6, 4, VAR_5);
            FUNC_4(VAR_6, VAR_3[VAR_7].type,
                            4);
            FUNC_3(VAR_4, VAR_6, 4, VAR_5);
        }
    }

    VAR_8 = (OPJ_UINT32)(FUNC_2(VAR_4) - VAR_9);
    FUNC_0(VAR_4, VAR_9, VAR_5);
    FUNC_4(VAR_6, VAR_8, 4);
    FUNC_3(VAR_4, VAR_6, 4, VAR_5);
    FUNC_0(VAR_4, VAR_9 + VAR_8, VAR_5);
}
