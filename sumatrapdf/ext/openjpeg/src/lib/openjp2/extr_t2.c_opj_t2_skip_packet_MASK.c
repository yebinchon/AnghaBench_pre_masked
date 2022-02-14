
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int opj_tcp_t ;
typedef int opj_tcd_tile_t ;
typedef int opj_t2_t ;
typedef int opj_pi_iterator_t ;
typedef int opj_packet_info_t ;
typedef int opj_event_mgr_t ;
typedef scalar_t__ OPJ_UINT32 ;
typedef int OPJ_BYTE ;
typedef scalar_t__ OPJ_BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *,int *,int *,scalar_t__*,int *,scalar_t__*,scalar_t__,int *,int *) ;
 int FUNC_1 (int *,int *,int *,scalar_t__*,scalar_t__,int *,int *) ;

__attribute__((used)) static OPJ_BOOL FUNC_2(opj_t2_t* VAR_2,
                                   opj_tcd_tile_t *VAR_3,
                                   opj_tcp_t *VAR_4,
                                   opj_pi_iterator_t *VAR_5,
                                   OPJ_BYTE *VAR_6,
                                   OPJ_UINT32 * VAR_7,
                                   OPJ_UINT32 VAR_8,
                                   opj_packet_info_t *VAR_9,
                                   opj_event_mgr_t *VAR_10)
{
    OPJ_BOOL VAR_11;
    OPJ_UINT32 VAR_12 = 0;
    OPJ_UINT32 VAR_13 = 0;

    *VAR_7 = 0;

    if (! FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, &VAR_11, VAR_6,
                                    &VAR_12, VAR_8, VAR_9, VAR_10)) {
        return VAR_0;
    }

    VAR_6 += VAR_12;
    VAR_13 += VAR_12;
    VAR_8 -= VAR_12;


    if (VAR_11) {
        VAR_12 = 0;

        if (! FUNC_1(VAR_2, VAR_3, VAR_5, &VAR_12,
                                      VAR_8, VAR_9, VAR_10)) {
            return VAR_0;
        }

        VAR_13 += VAR_12;
    }
    *VAR_7 = VAR_13;

    return VAR_1;
}
