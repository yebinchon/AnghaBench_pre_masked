
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int opj_stream_private_t ;
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

void FUNC_5(int VAR_1, int VAR_2, opj_stream_private_t *VAR_3,
                    opj_event_mgr_t * VAR_4)
{
    OPJ_BYTE VAR_5 [3 * 8];
    OPJ_UINT32 VAR_6;
    OPJ_OFF_T VAR_7;


    VAR_7 = FUNC_2(VAR_3);
    FUNC_1(VAR_3, 4, VAR_4);
    FUNC_4(VAR_5, VAR_0, 4);
    FUNC_4(VAR_5 + 4, 0, 2);
    FUNC_4(VAR_5 + 6, 0, 2);
    FUNC_4(VAR_5 + 8, (OPJ_UINT32)VAR_1,
                    8);
    FUNC_4(VAR_5 + 16, (OPJ_UINT32)VAR_2,
                    8);
    FUNC_3(VAR_3, VAR_5, 3 * 8, VAR_4);

    VAR_6 = (OPJ_UINT32)(FUNC_2(VAR_3) - VAR_7);
    FUNC_0(VAR_3, VAR_7, VAR_4);
    FUNC_4(VAR_5, VAR_6, 4);
    FUNC_3(VAR_3, VAR_5, 4, VAR_4);
    FUNC_0(VAR_3, VAR_7 + VAR_6, VAR_4);

}
