
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int opj_stream_private_t ;
struct TYPE_3__ {scalar_t__ type; scalar_t__ pos; } ;
typedef TYPE_1__ opj_marker_info_t ;
typedef int opj_event_mgr_t ;
typedef scalar_t__ OPJ_OFF_T ;
typedef int OPJ_BYTE ;
typedef int OPJ_BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,unsigned int*,int) ;
 int FUNC_1 (int *,int *,int,int *) ;
 int FUNC_2 (int *,scalar_t__,int *) ;
 scalar_t__ FUNC_3 (int *) ;

OPJ_BOOL FUNC_4(int VAR_3, opj_marker_info_t *VAR_4, int VAR_5,
                          opj_stream_private_t *VAR_6,
                          opj_event_mgr_t * VAR_7)
{
    OPJ_BYTE VAR_8 [4];
    OPJ_BOOL VAR_9 = VAR_1;
    int VAR_10 = 0;
    OPJ_OFF_T VAR_11;
    unsigned int VAR_12;

    for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
        if (VAR_4[VAR_10].type == VAR_0) {
            VAR_11 = FUNC_3(VAR_6);
            FUNC_2(VAR_6, VAR_3 + VAR_4[VAR_10].pos + 2, VAR_7);

            FUNC_1(VAR_6, VAR_8, 1, VAR_7);
            FUNC_0(VAR_8, &VAR_12, 1);
            if (((VAR_12 >> 2) & 1)) {
                VAR_9 = VAR_2;
            }
            FUNC_2(VAR_6, VAR_11, VAR_7);

            break;
        }
    }
    return VAR_9;
}
