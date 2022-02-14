
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int opj_stream_private_t ;
typedef int opj_event_mgr_t ;
typedef int opj_codestream_info_t ;
typedef scalar_t__ OPJ_UINT32 ;
typedef int OPJ_OFF_T ;
typedef int OPJ_BYTE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,scalar_t__,int *) ;
 int FUNC_1 (int *,int,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int,int *) ;
 int FUNC_4 (int *,scalar_t__,int) ;
 int FUNC_5 (int,int ,int ,int,int *,int *) ;

int FUNC_6(int VAR_1,
                   opj_codestream_info_t VAR_2,
                   int VAR_3, opj_stream_private_t *VAR_4,
                   opj_event_mgr_t * VAR_5)
{
    OPJ_BYTE VAR_6 [4];
    OPJ_UINT32 VAR_7;
    OPJ_OFF_T VAR_8;

    VAR_8 = FUNC_2(VAR_4);
    FUNC_1(VAR_4, 4, VAR_5);
    FUNC_4(VAR_6, VAR_0, 4);
    FUNC_3(VAR_4, VAR_6, 4, VAR_5);

    FUNC_5(VAR_1, 0, VAR_2, VAR_3, VAR_4, VAR_5);

    VAR_7 = (OPJ_UINT32)(FUNC_2(VAR_4) - VAR_8);

    FUNC_1(VAR_4, VAR_8, VAR_5);
    FUNC_4(VAR_6, VAR_7, 4);
    FUNC_3(VAR_4, VAR_6, 4, VAR_5);
    FUNC_0(VAR_4, VAR_8 + VAR_7, VAR_5);

    return (int)VAR_7;
}
